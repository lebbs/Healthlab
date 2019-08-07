using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class ImageLoader : MonoBehaviour
{

    public string[] url;
    public Renderer thisRenderer;
    private Material[] materials;

    private int urlIndex;
    // Start is called before the first frame update
    //void Start()
    //{
    //    StartCoroutine(LoadFromLikeCoroutine());

    //}

    // Update is called once per frame

    private IEnumerator LoadFromLikeCoroutine()
    {
        Debug.Log("LADATAAN");

        using (UnityWebRequest wwwLoader = UnityWebRequestTexture.GetTexture(url[urlIndex])) 
        {
            yield return wwwLoader.SendWebRequest();

            Debug.Log("ladattu");

            thisRenderer.material.mainTexture = DownloadHandlerTexture.GetContent(wwwLoader);
        }
    }
    public void ButtonPressed()
    {
        StartCoroutine(LoadFromLikeCoroutine());
        Debug.Log("SEURAAVA");
        if (urlIndex <= url.Length)
        {
            StartCoroutine(LoadFromLikeCoroutine());
            urlIndex++;
        }
        //else
        //{
        //    urlIndex--;
        //}

        if(urlIndex > url.Length)
        {
            urlIndex = 0;
        }

        }
    public void ButtonPressedPrevious()
    {

        Debug.Log("EDELLINEN");
        if (urlIndex > 0)
        {
            
            urlIndex--;
            StartCoroutine(LoadFromLikeCoroutine());
        }
        //else
        //{
        //    urlIndex++;
        //}
    }
}