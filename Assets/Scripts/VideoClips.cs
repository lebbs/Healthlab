using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.UI;
using TMPro;

public class VideoClips : MonoBehaviour
{
    public VideoClip[] videoClips;
    public TextMeshPro currentMinutes;
    public TextMeshPro currentSeconds;
    public TextMeshPro totalMinutes;
    public TextMeshPro totalSeconds;



    private VideoPlayer videoPlayer;
    private int videoClipIndex;




    void Awake()
    {
        videoPlayer = GetComponent<VideoPlayer>();
    }
    // Start is called before the first frame update
    void Start()
    {
        videoPlayer.targetTexture.Release();
        videoPlayer.clip = videoClips[0];
    }

    // Update is called once per frame
    void Update()
    {
        if (videoPlayer.isPlaying)
        {
            SetCurrentTimeUI();
            SetTotalTimeUI();
        }
    }


    public void SetNextClip()
    {
        videoClipIndex++;

        if(videoClipIndex >= videoClips.Length)
        {
            videoClipIndex = videoClipIndex % videoClips.Length;
        }

        videoPlayer.clip = videoClips[videoClipIndex];
        SetTotalTimeUI(); 
        videoPlayer.Play();
    }


    public void SetPreviusClip()
    {
        videoClipIndex--;

        if (videoClipIndex <= videoClips.Length)
        {
            videoClipIndex = videoClipIndex % videoClips.Length;
        }

        videoPlayer.clip = videoClips[videoClipIndex];
        videoPlayer.Play();
    }

    void SetCurrentTimeUI()
    {
        string minutes = Mathf.Floor((int)videoPlayer.time / 60).ToString("00");
        string seconds = ((int)videoPlayer.time % 60).ToString("00");

        currentMinutes.text = minutes;
        currentSeconds.text = seconds;
    }


    void SetTotalTimeUI()
    {
        string minutes = Mathf.Floor((int)videoPlayer.clip.length / 60).ToString("00");
        string seconds = ((int)videoPlayer.clip.length % 60).ToString("00");

        totalMinutes.text = minutes;
        totalSeconds.text = seconds;
    }


}
