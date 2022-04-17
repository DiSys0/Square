using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
   
    [SerializeField] private GameObject _objectPrefab;
    [SerializeField] private GameObject _particlePrefab;
    [SerializeField] private GameObject _parentObjects;

    private string[]  _tagObject = new string[2] {"bottomSquare", "leftSquare"};
    private Color32[] _colors = new Color32[3] {new Color32(136,245,189,255), new Color32 (255,97,0,255), new Color32(255,0,0,255)};
 
    void Start()
    {
        ObjectsAction.newObject += AddLeftObject;
        UI_Controller.newgame += NewGame;
        UI_Controller.endGame += EndGame;
        ObjectsAction.newParticle += CreateParticle;
        Input_Controller.newObject += AddNewObject;
        Input_Controller.redSquareClick += redSquareClick;
        
        
    }

    void CreateObject(GameObject gameObject, float x, float y, Color32 color32, string typeObject, int score)
    {
        GameObject _object;
        _object = Instantiate(gameObject, new Vector2(x, y), Quaternion.identity );
        _object.transform.SetParent(_parentObjects.transform);
        _object.GetComponent<SpriteRenderer>().color = color32;
        _object.tag = typeObject;
        _object.GetComponent<ObjectsAction>().Score = score;
    }

    void CreateParticle(Vector2 pos)
    {
        StartCoroutine(IEParticle(pos));
    }

    IEnumerator IEParticle(Vector2 pos )
    {
        GameObject temp;
        temp = Instantiate(_particlePrefab, pos, Quaternion.identity);
        temp.transform.SetParent(_parentObjects.transform);
        temp.GetComponent<ObjectsAction>().Score = 100;
        yield return new WaitForSeconds(5);
        if (temp != null)
        {
            Destroy(temp);
            CreateObject(_objectPrefab, pos.x, pos.y, new Color32(255,0,255,255), _tagObject[0],0);
        }
    }

   
    public void NewGame()
    {
       
        for (int i = 0; i < 4; i++)
        {
           CreateObject(_objectPrefab, 2*i-3, -4.2f, new Color32(255,0,255,255), _tagObject[0], 0);   
        }

        for (int i = 0; i < 5; i++)
        {
            AddLeftObject();    
        }
    }

    void EndGame()
    {
        for (int i = 0; i < _parentObjects.transform.childCount; i++)
        {
            Destroy(_parentObjects.transform.GetChild(i).gameObject);
        }
    }

    void AddNewObject(string type, Vector2 pos)
    {
        switch (type)
        {
            case "leftSquare":
                AddLeftObject();
            break;

            case "Particle":
                AddBottomObject(pos);
            break;
        }
    }
    void AddBottomObject(Vector2 pos)
    {
        CreateObject(_objectPrefab, pos.x, pos.y, new Color32(255,0,255,255), _tagObject[0], 0);    
    }
    void AddLeftObject()
    {
        int i = Random.Range(0,3);
        int s = 0;
        switch (i)
        {
            case 0 :
                s = 100;
            break;
            case 1:
                s = 200;
            break;
            case 2:
                s = -300;
            break;
        }
         CreateObject(_objectPrefab, -11, Random.Range(-3f,3f), _colors[i], _tagObject[1], s);     
    }

    void redSquareClick()
    {
        StartCoroutine(IERedClick());
    }

    IEnumerator IERedClick()
    {
        Color cam = Camera.main.backgroundColor;
        Camera.main.backgroundColor = Color.red;
        yield return new WaitForSeconds(0.1f);
        Camera.main.backgroundColor = cam;
    }
   
    
    void Destroy()
    {
        ObjectsAction.newObject -= AddLeftObject;
        UI_Controller.newgame -= NewGame;
        UI_Controller.endGame -= EndGame;
        ObjectsAction.newParticle -= CreateParticle;
        Input_Controller.newObject -= AddNewObject;
        Input_Controller.redSquareClick -= redSquareClick;
    }
}
