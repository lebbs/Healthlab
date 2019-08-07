using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.Input.UnityInput;

public class Lerp : MonoBehaviour
{
    //public float driftSeconds = 3;
    //private float driftTimer = 0;
    //private bool isDrifting = false;



    public GameObject objektiVasen;
    public GameObject objektiOikea;
    public GameObject objektiYlös;
    public GameObject objektiAlas;

    //Vasen
    private Vector3  startPos;
    private Vector3 endPos;
    Quaternion  startRotation,endRotation;
    
    //Oikea    
    private Vector3 startPos1;
    private Vector3 endPos1;
    //ylös
    private Vector3 startPos2;
    private Vector3 endPos2;
    //alas
    private Vector3 startPos3;
    private Vector3 endPos3;

    public float distance = 30f;

    public float lerpTime = 5;

    private float currentLerpTime = 0;

    private bool keyHit = false;
   

    //public void FixedUpdate()
    //{

    //    if (objektiVasen = GameObject.FindWithTag("vasen"))
    //    {
    //        //Objektia liikutetaan vasemmalle
    //        startPos = objektiVasen.transform.position;
           
    //        endPos = objektiVasen.transform.position + Vector3.left * distance;


    //        ////TESTIÄ
    //        //isDrifting = true;
    //        //driftTimer = 0;

    //        //startPos = transform.position;
    //        //driftRotation = transform.rotation;
    //    }

        


    //    //Objektia liikutetaan oikealle
    //   if(objektiOikea= GameObject.FindWithTag("oikea"))
    //    {
    //        startPos1 = objektiOikea.transform.position;
    //        endPos1 = objektiOikea.transform.position + Vector3.right * distance;
    //    }
    //   //Objektia liikutetaan ylös
    //   if(objektiYlös = GameObject.FindWithTag("ylös"))
    //    {
    //        startPos2 = objektiYlös.transform.position;
    //        endPos2 = objektiYlös.transform.position + Vector3.up * distance;
    //    }
    //   //objektia liikutetaan alas
    //   if(objektiAlas = GameObject.FindWithTag("alas"))
    //    {
    //        startPos3 = objektiAlas.transform.position;
    //        endPos3= objektiAlas.transform.position + Vector3.down * distance;
    //    }
    //    //Liikuta();


    //}

    //private void Update()
    //{
    //    if (Input.GetKeyDown(KeyCode.Space))
    //    {
    //        keyHit = true;
    //    }

    //    if (keyHit == true)
    //    {
    //        currentLerpTime += Time.deltaTime;
    //        if(currentLerpTime>= lerpTime)
    //        {
    //            currentLerpTime = lerpTime;
    //        }

    //        float Perc = currentLerpTime / lerpTime;
    //        //vasemmalle liikkuva objekti
    //        objektiVasen.transform.position = Vector3.Lerp(startPos, endPos, Perc);
    //        //Oikealle liikkuva objekti
    //        objektiOikea.transform.position = Vector3.Lerp(startPos1, endPos1, Perc);
    //        //Ylös liikkuva objekti
    //        objektiYlös.transform.position = Vector3.Lerp(startPos2, endPos2, Perc);
    //        //Alas liikkuva objekti
    //        objektiAlas.transform.position = Vector3.Lerp(startPos3, endPos3, Perc);

    //    }


    public void ButtonClick()
    {

        currentLerpTime += Time.deltaTime;
        currentLerpTime = lerpTime;


     

        float Perc = currentLerpTime / lerpTime;
      
        startPos = objektiVasen.transform.position;
        endPos = objektiVasen.transform.position + Vector3.left * distance;
        if (objektiVasen = GameObject.FindWithTag("vasen")) objektiVasen.transform.position = Vector3.Lerp(startPos, endPos, Perc);

        //Oikealle liikkuva objekti
        startPos1 = objektiOikea.transform.position;
        endPos1 = objektiOikea.transform.position + Vector3.right * distance;
        if (objektiOikea = GameObject.FindWithTag("oikea"))  objektiOikea.transform.position = Vector3.Lerp(startPos1, endPos1, Perc);


        //Ylös liikkuva objekti
        startPos2 = objektiYlös.transform.position;
        endPos2 = objektiYlös.transform.position + Vector3.up * distance;
        if (objektiYlös = GameObject.FindWithTag("ylös"))   objektiYlös.transform.position = Vector3.Lerp(startPos2, endPos2, Perc);


        //Alas liikkuva objekti
        startPos3 = objektiAlas.transform.position;
        endPos3= objektiAlas.transform.position + Vector3.down * distance;
        if (objektiAlas = GameObject.FindWithTag("alas"))   objektiAlas.transform.position = Vector3.Lerp(startPos3, endPos3, Perc);

        }

    public void ButtonClickReverse()
    {


        //if (Input.GetKeyDown(KeyCode.Space))
        //{
        //    keyHit = true;
        //}

        //currentLerpTime += Time.deltaTime;
        //if (currentLerpTime >= lerpTime)
        //{
        //    currentLerpTime = lerpTime;
        //}

        //float Perc = currentLerpTime / lerpTime;
        //vasemmalle liikkuva objekti
        if (objektiVasen = GameObject.FindWithTag("vasen"))
        {


            //TESTIÄ
            
            objektiVasen.transform.position = startPos;
            //objektiVasen.transform.rotation = startRotation;
        }
        //Oikealle liikkuva objekti
        if (objektiOikea = GameObject.FindWithTag("oikea"))
        {
            objektiOikea.transform.position = startPos1;
        }
        //Ylös liikkuva objekti
        if (objektiYlös = GameObject.FindWithTag("ylös")) {
            objektiYlös.transform.position = startPos2; 
}
        //Alas liikkuva objekti
        if (objektiAlas = GameObject.FindWithTag("alas"))
        {
            objektiAlas.transform.position = startPos3;
        }
    }


}

    //public Transform StartPos;
    //public Transform EndPos;


    //public float speed;

    //private void Update()
    //{
    //    //if(Vector3.Distance(waypoints[current].transform.position, transform.position)< WPradius)
    //    //{
    //    //    current = Random.Range(0, waypoints.Length);
    //    //    if (current >= waypoints.Length)
    //    //    {
    //    //        current = 0;
    //    //    }
    //    //}

    //    transform.position = Vector3.MoveTowards(StartPos.position, EndPos.position, Time.deltaTime * speed);
    //}

    //public void OnTriggerEnter(Collider other)
    //{
    //    Debug.Log("jee");
    //}

    /// <summary>
    /// The time taken to move from the start to finish positions
    /// </summary>
    //public float timeTakenDuringLerp = 1f;

    ///// <summary>
    ///// How far the object should move when 'space' is pressed
    ///// </summary>
    //public float distanceToMove = 10;

    ////Whether we are currently interpolating or not
    //private bool _isLerping;

    ////The start and finish positions for the interpolation
    //public Vector3 _startPosition;
    //public Vector3 _endPosition;

    ////The Time.time value when we started the interpolation
    //private float _timeStartedLerping;

    ///// <summary>
    ///// Called to begin the linear interpolation
    ///// </summary>
    //void StartLerping()
    //{
    //    _isLerping = true;
    //    _timeStartedLerping = Time.time;

    //    //We set the start position to the current position, and the finish to 10 spaces in the 'forward' direction
    //    _startPosition = transform.position;
    //    _endPosition = transform.position + Vector3.forward * distanceToMove;
    //}

    //void Update()
    //{
    //    //When the user hits the spacebar, we start lerping
    //    if (Input.GetKey(KeyCode.Space))
    //    {
    //        StartLerping();
    //    }
    //}

    ////We do the actual interpolation in FixedUpdate(), since we're dealing with a rigidbody
    //void FixedUpdate()
    //{
    //    if (_isLerping)
    //    {
    //        //We want percentage = 0.0 when Time.time = _timeStartedLerping
    //        //and percentage = 1.0 when Time.time = _timeStartedLerping + timeTakenDuringLerp
    //        //In other words, we want to know what percentage of "timeTakenDuringLerp" the value
    //        //"Time.time - _timeStartedLerping" is.
    //        float timeSinceStarted = Time.time - _timeStartedLerping;
    //        float percentageComplete = timeSinceStarted / timeTakenDuringLerp;

    //        //Perform the actual lerping.  Notice that the first two parameters will always be the same
    //        //throughout a single lerp-processs (ie. they won't change until we hit the space-bar again
    //        //to start another lerp)
    //        transform.position = Vector3.Lerp(_startPosition, _endPosition, percentageComplete);

    //        //When we've completed the lerp, we set _isLerping to false
    //        if (percentageComplete >= 1.0f)
    //        {
    //            _isLerping = false;
    //        }
    //    }
    //}










