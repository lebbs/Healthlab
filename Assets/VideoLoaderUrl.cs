using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using TMPro;

public class VideoLoaderUrl : MonoBehaviour
{
    private int videoUrlIndex;
    private AudioSource audioSource;




    public string[] videoUrl;
    public VideoClip[] videoClips;
    public TextMeshPro currentMinutes;
    public TextMeshPro currentSeconds;
    public TextMeshPro totalMinutes;
    public TextMeshPro totalSeconds;

    


    private VideoPlayer videoPlayer;
    //private int videoClipIndex;




    void Awake()
    {
        videoPlayer = GetComponent<VideoPlayer>();
        audioSource = gameObject.AddComponent<AudioSource>(); 
    }
    // Start is called before the first frame update
    void Start()
    {
        videoPlayer.url = videoUrl[videoUrlIndex];
        videoPlayer.targetTexture.Release();
       
        //videoPlayer.clip = videoClips[0];

        videoPlayer.audioOutputMode = VideoAudioOutputMode.AudioSource;
        videoPlayer.EnableAudioTrack(2, true);
        videoPlayer.SetTargetAudioSource(2, audioSource);
    }

    // Update is called once per frame
    void Update()
    {
        if (videoPlayer.isPlaying)
        {
            SetCurrentTimeUI();
            //SetTotalTimeUI();
        }
    }


    public void SetNextClip()
    {
        videoUrlIndex++;

        if (videoUrlIndex >= videoUrl.Length)
        {
            videoUrlIndex = videoUrlIndex % videoUrl.Length;
        }

        videoPlayer.url = videoUrl[videoUrlIndex];
        //SetTotalTimeUI();

        videoPlayer.Play();
        audioSource.Play();
    }


    public void SetPreviusClip()
    {
        videoUrlIndex--;

        if (videoUrlIndex <= videoClips.Length)
        {
            videoUrlIndex = videoUrlIndex % videoUrl.Length;
        }

        videoPlayer.url = videoUrl[videoUrlIndex];
        videoPlayer.Play();
        audioSource.Play();
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
