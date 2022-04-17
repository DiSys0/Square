using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Controller : MonoBehaviour
{
    private Text _startText, _scoreText;
    private Image _raycast;
    private bool _startgame;
    private float _noClickTimer;

    public  delegate void NewGame();
    public static event NewGame newgame;
    public delegate void EndGame();
    public static event EndGame endGame;

    void Start()
    {
       Input_Controller.addScore += ChangeScore;
       Input_Controller.newClick += ResetNoClickTime;
        _startText = transform.GetChild(0).GetComponent<Text>();
        _scoreText = transform.GetChild(1).GetComponent<Text>();
        _raycast = transform.GetComponent<Image>();
        _startgame = false;
        _noClickTimer = 15;

    }

    void ChangeScore(int score)
    {
        int _score = int.Parse(_scoreText.text);
        _scoreText.text  = Mathf.Clamp(_score + score, 0, _score + score).ToString();
    }
    IEnumerator  IETapScreen(float time)
    {
        float currTime = 0f;
        byte a = (byte) (!_startgame ? 255:0);
        byte b = (byte) (_startgame ? 255:0);
        _raycast.raycastTarget = false;
        if (_startgame) endGame();
        do
        {
            _startText.color = Color32.Lerp (new Color32(0,0,0,a), new Color32(0,0,0,b), currTime/time);
            _scoreText.color = Color32.Lerp (new Color32(0,0,0,b), new Color32(0,0,0,a), currTime/time);
            currTime += Time.deltaTime;
            yield return null;
        }
        while (currTime<=time);
            _startgame = !_startgame;
            if (_startgame)
            {
                _noClickTimer = 15;
                newgame();
            } else
            {
                _scoreText.text = "0";
                _raycast.raycastTarget = true;
            }
    }
    public void ChangeGameStatus()
    {
        StartCoroutine(IETapScreen(3));
    }

    void ResetNoClickTime()
    {
        _noClickTimer = 15;
    }
    void Update()
    {
        if (_startgame)
        {
            if (_noClickTimer > 0)
            {
                _noClickTimer -= Time.deltaTime;
            }else
            {
                _noClickTimer = 15;
                ChangeGameStatus();    
            }
        }
    }
    void OnDestroy()
    {
        Input_Controller.addScore -= ChangeScore;    
        Input_Controller.newClick -= ResetNoClickTime;
    }
    

   
}
