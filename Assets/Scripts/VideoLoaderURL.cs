using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Video;


public class VideoLoaderURL : MonoBehaviour
{

    private VideoPlayer videoPlayer;

    public string[] url;
    public Renderer renderer;

    private int videoClipsIndex;


    private void Awake()
    {
        videoPlayer = GetComponent<VideoPlayer>();
    }

    private void Start()
    {
        videoPlayer.targetTexture.Release();
        
    }

    private IEnumerator LoadFromLikeCoroutine()
    {
        Debug.Log("ladataan...");

        using (UnityWebRequest videoLoader = UnityWebRequestTexture.GetTexture(url[videoClipsIndex]))
        {
            yield return videoLoader.SendWebRequest();

            Debug.Log("Ladattu!");

            StartCoroutine(LoadFromLikeCoroutine());
            renderer.material.mainTexture = DownloadHandlerTexture.GetContent(videoLoader);
            videoPlayer.url = "https://hololensfiles.blob.core.windows.net/share/VUMetersGreenVidevo.mov?st=2019-08-01T08%3A06%3A05Z&se=2019-08-02T08%3A06%3A05Z&sp=rl&sv=2018-03-28&sr=b&sig=X5z024LxvQSGhZxcAAa7b7Wpps8jVMPqnKnv8CoYLSI%3D ";
            videoPlayer.Play();

        }
    }

    //public void ButtonPressedNext()
    //{
    //    StartCoroutine(LoadFromLikeCoroutine());
    //    Debug.Log("SEURAAVA");
    //    if (videoClipsIndex <= url.Length)
    //    {
    //        StartCoroutine(LoadFromLikeCoroutine());
    //        videoClipsIndex++;
    //    }
    //    //else
    //    //{
    //    //    urlIndex--;
    //    //}

    //    if (videoClipsIndex > url.Length)
    //    {
    //        videoClipsIndex = 0;
    //    }
    //    videoPlayer.Play();
    //}


}
