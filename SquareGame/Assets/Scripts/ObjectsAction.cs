using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ObjectsAction : MonoBehaviour
{
    [HideInInspector] public int Score;
    private Color32 _original_Color;
    private SpriteRenderer _render;
    private Transform _transform;

    public  delegate void NewObject();
    public static event NewObject newObject;

    public delegate void NewParticle(Vector2 pos);
    public static event NewParticle newParticle;

   
    void Start()
    {
        _transform = this.GetComponent<Transform>();
        _render = this.GetComponent<SpriteRenderer>();
        _original_Color = _render.color;
       
        

        switch (tag)
        {
            case "bottomSquare":
               StartCoroutine(IEChangeColor(Color.green, Random.Range(3,11)));
            break;

            case "leftSquare":
                StartCoroutine(IEMove_Sin());
            break;
        }
    }

    IEnumerator  IEChangeColor(Color32 newColor, float time)
    {
        
        float currTime = 0f;
        do
        {
            _render.color = Color32.Lerp (_original_Color, newColor, currTime/time);
            currTime += Time.deltaTime;
            yield return null;
        }
        while (currTime<=time);
        newParticle(transform.localPosition);
        Destroy(gameObject);
    }

    IEnumerator IEMove_Sin()
    {
        Vector2 pos = _transform.position;
        float startY = pos.y;
        float currTime = 0;
        float speed = Random.Range(0.5f, 1.5f);
        float h = Random.Range(1f, 2.5f);
        do
        {
            pos.x = _transform.position.x + Time.deltaTime * speed;
            pos.y = startY + Mathf.PingPong(currTime * speed, h) ;
            currTime += Time.deltaTime;
            _transform.position = pos;
            yield return null;
        }
        while (pos.x < 11);
        newObject();
        Destroy(gameObject);
    }
     
}
