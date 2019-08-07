using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class disassemble : MonoBehaviour
{
    //liikutettavat objektit
    public GameObject vasen;
    public GameObject oikea;
    public GameObject ylös;
    public GameObject alas;

    //ALoitus positio
    public Vector3 startPos;
    //Lopetus positio
    public Vector3 endPos;
    //Liikuttava matka
    public float distance = 30f;
    //Aika
    public float lerpTime = 5;
    //Päivittää ajan
    public float currentLerptime = 0;

    private bool keyHit = false;



    public float speed;
    //public Vector3 x;
    // Start is called before the first frame update
    void Start()
    {
        startPos = gameObject.transform.position;
        endPos = gameObject.transform.position + Vector3.left * distance;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.U))
        {
            if (keyHit == true)
            {
                currentLerptime += Time.deltaTime;

                if(currentLerptime >= lerpTime)
                {
                    currentLerptime = lerpTime; 
                }
                float Perc = currentLerptime / lerpTime;
                gameObject.transform.position = Vector3.Lerp(startPos, endPos, Perc);
            }
        }
    }
}
