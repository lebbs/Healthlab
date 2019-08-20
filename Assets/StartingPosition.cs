using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartingPosition : MonoBehaviour
{
    Quaternion startRotation;
    Vector3 startPos;
    Vector3 startScale;
    // Start is called before the first frame update
    void Start()
    {
        startPos = this.transform.position;
        startRotation = this.transform.rotation;
        startScale = this.transform.localScale;

        // Update is called once per frame


    }

    public void StarPosition()
    {
        this.transform.position = startPos;
        this.transform.rotation = startRotation;
        this.transform.localScale = startScale;
    }
}