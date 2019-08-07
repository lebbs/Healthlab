using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class picswitch : MonoBehaviour
{
    public Material[] materials;
    public Renderer rend;

    //private void Start()
    //{
    //    StartCoroutine(GetMaterial());
    //}

    //IEnumerator GetMaterial()
    //{
    //    UnityWebRequest webRequest = UnityWebRequest.Get("https://cdn.pixabay.com/photo/2016/10/17/10/52/wind-farm-1747331_960_720.jpg");
    //    yield return webRequest.SendWebRequest();

    //    if (webRequest.isNetworkError || webRequest.isHttpError)
    //    {
    //        Debug.Log(webRequest.error);
    //    }
    //    else
    //    {
    //        Texture texture = ((DownloadHandlerTexture)webRequest.downloadHandler).texture;
    //        GameObject go = GameObject.FindGameObjectWithTag("Content");
    //        var rend = go.GetComponent<Renderer>();
    //        //rend.material = Resources.Load(texture) as Material;
    //    }
    //}




    private int index = 1;

    // Start is called before the first frame update
    public void ButtonPressed()
    {

        if (materials.Length == 0)
            return;

        index += 1;

        if (index == materials.Length + 1)
        {
            index = 1;
        }
        rend.sharedMaterial = materials[index - 1];
    }

    public void ButtonPressedPrevious()
    {
        if (materials.Length == 0)
        {
            return;
        }
        else
        {
            index -= 1;
        }

        rend.sharedMaterial = materials[index - 1];

        index -= 1;

        if (index < materials.Length - 1)
        {
            index -= 1;
        }
        rend.sharedMaterial = materials[index + 1];


    }
}


