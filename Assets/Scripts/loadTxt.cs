using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class loadTxt : MonoBehaviour
{

    public string text;

    private void Awake()
    {
        Lue();
    }
    public void Read(string path)
    {
        text = File.ReadAllText(path);
    }
    public void Lue()
    {
        Read("Assets/Resources/test.txt");
        gameObject.GetComponent<Text>().text = text;
    }






}
