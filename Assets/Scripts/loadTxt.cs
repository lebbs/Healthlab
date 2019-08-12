using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;
public class loadTxt : MonoBehaviour
{

    //public string text;

    //private void Awake()
    //{
    //    Lue();
    //}
    //public void Read(string path)
    //{
    //    text = File.ReadAllText(path);
    //}
    //public void Lue()
    //{
    //    Read("Assets/test.txt");
    //    gameObject.GetComponent<Text>().text = text;
    //}
    private int urlIndex = 0;
    private string textFromWWW;
    public string[] url;
   
    void Start()
    {
        StartCoroutine(GetTextFromWWW());
    }

    //void OnGUI()
    //{
    //    GUI.Label(new Rect(0, 0, 200, 200), textFromWWW);
    //}

    IEnumerator GetTextFromWWW()
    {

        //urlIndex = url.Length;

        WWW www = new WWW(url[urlIndex]);

        //using (UnityWebRequest wwwTxt = UnityWebRequestTexture.GetTexture(url))
        //{
        //    yield return wwwTxt.SendWebRequest();
        //    gameObject.GetComponent<Text>().text = textFromWWW;
        //}

        yield return www;

        if (www.error != null)
        {
            Debug.Log("Something went wrong...");
        }
        else
        {
            textFromWWW = www.text;
            gameObject.GetComponent<TextMeshPro>().text = textFromWWW;

        }

    }

    public void ButtonPressedNext()
    {
        //StartCoroutine(GetTextFromWWW());
        Debug.Log("SEURAAVA");

        urlIndex++;

        if (urlIndex >= url.Length)
        {

            urlIndex = urlIndex % url.Length;
        }
        StartCoroutine(GetTextFromWWW());


        //else
        //{
        //    urlIndex--;
        //}

        //if (urlIndex >= url.Length)
        //{
        //    urlIndex = 0;
        //}

        //else
        //{
        //    urlIndex--;
        //}


    }

    public void ButtonPressedPrevious()
    {
        //urlIndex = url.Length;

        //StartCoroutine(GetTextFromWWW());

        urlIndex--;

        Debug.Log("SEURAAVA");
        if (urlIndex <= url.Length)
        {

            urlIndex = urlIndex % url.Length;
            
          
        }
        StartCoroutine(GetTextFromWWW());
        //if (urlIndex <= url.Length)
        //{
        //    urlIndex = 0;
        //}

        //Debug.Log("Edellinen");

        //if(urlIndex >= 0)
        //{

        //    urlIndex--;
        //    StartCoroutine(GetTextFromWWW());

        //}
    }



}
