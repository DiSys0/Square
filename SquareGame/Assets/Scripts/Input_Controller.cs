using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Input_Controller : MonoBehaviour
{
    public delegate void AddScore(int score);
    public static event AddScore addScore;

    public delegate void NewObject(string type, Vector2 pos);
    public static event NewObject newObject;

    public delegate void NewClick();
    public static event NewClick newClick;
    public delegate void RedSquareClick();
    public static event RedSquareClick redSquareClick;
    


    void OnTouchScreen()
    {
        if (Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                Physics2D.queriesHitTriggers = true;
                Ray beginPoint = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                RaycastHit2D hit = Physics2D.Raycast(beginPoint.origin, beginPoint.direction);
                if (hit)
                {
                    if (hit.transform.tag != "bottomSquare")
                    {
                      
                        if (hit.transform.tag == "leftSquare")
                            if (hit.transform.GetComponent<SpriteRenderer>().color ==  Color.red)    
                                redSquareClick();
                        
                        addScore(hit.transform.GetComponent<ObjectsAction>().Score);
                        newClick();
                        Destroy(hit.collider.gameObject);
                        newObject(hit.transform.tag, hit.transform.localPosition);
                    }
                }
            }
        }
    }

    void OnMouseClick()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray beginPoint = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(beginPoint.origin, beginPoint.direction);
            if (hit)    
            {   
                if (hit.transform.tag != "bottomSquare")
                {
                     if (hit.transform.tag == "leftSquare")
                        if (hit.transform.GetComponent<SpriteRenderer>().color ==  Color.red)
                            redSquareClick();
                        
                    addScore(hit.transform.GetComponent<ObjectsAction>().Score);
                    newClick();
                    Destroy(hit.collider.gameObject);
                    newObject(hit.transform.tag, hit.transform.localPosition);
                }
            }
            
        }

    }
  
    void Update()
    {
        #if UNITY_EDITOR
            OnMouseClick();
        #elif UNITY_ANDROID
            OnTouchScreen();
        #endif
    
    }
}
