using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.UI;

public class WorldSpaceVideo : MonoBehaviour

    
{

    public VideoPlayer videoPlayer;
    public Button playButton;
    public Button pauseButton;
    
    private void Awake()
    {
        videoPlayer = GetComponent<VideoPlayer>();
    }


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlayPause()
    {
        if (videoPlayer.isPlaying)
        {
            videoPlayer.Pause();
               
        }
        else
        {
            videoPlayer.Play();
        }

    }
}
