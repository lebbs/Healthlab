using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Video;
using System;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;

public class VideoProgressBar : MonoBehaviour, IDragHandler, IPointerDownHandler
{
    // Start is called before the first frame update


    public VideoPlayer videoPlayer;

    private Image progress;

    private void Awake()
    {
        progress = GetComponent<Image>();

    }

    
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (videoPlayer.frameCount > 0)
        {
            progress.fillAmount = (float)videoPlayer.frame / (float)videoPlayer.frameCount;
        }
    }


    public void OnDrag (PointerEventData eventData)
    {
        TrySkip(eventData);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        TrySkip(eventData);
    }

    private void TrySkip(PointerEventData eventData)
    {
        Vector2 localpoint;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(progress.rectTransform,
            eventData.position, Camera.main, out localpoint))
        {
            float pct = Mathf.InverseLerp(progress.rectTransform.rect.xMin, progress.rectTransform.rect.xMax, localpoint.x);
                SkipToPercent(pct);
        }
    }

    private void SkipToPercent(float pct)
    {
        var frame = videoPlayer.frameCount * pct;
        videoPlayer.frame = (long)frame;
    }
}
