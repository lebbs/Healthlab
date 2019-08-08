using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
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

    private string textFromWWW;
    private string url = "https://hololensfiles.blob.core.windows.net/share/jeejee.txt?st=2019-08-08T05%3A26%3A08Z&se=2025-08-09T05%3A26%3A00Z&sp=rl&sv=2018-03-28&sr=b&sig=Lj5vUDoWL5qOy2fZvPDqfrqIWfLwMVCyIkZ85y5LtJo%3D"; // <-- enter your url here

    void Start()
    {
        StartCoroutine(GetTextFromWWW());
    }

    void OnGUI()
    {
        GUI.Label(new Rect(0, 0, 200, 200), textFromWWW);
    }

    IEnumerator GetTextFromWWW()
    {
        WWW www = new WWW(url);

        yield return www;

        if (www.error != null)
        {
            Debug.Log("Ooops, something went wrong...");
        }
        else
        {
            textFromWWW = www.text;
            gameObject.GetComponent<Text>().text = textFromWWW;
            
        }
    }






}
