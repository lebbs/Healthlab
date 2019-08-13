using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animController : MonoBehaviour
{

    Animator animator;
    private bool reverse;
    private bool forward;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }



    public void ButtonClick()
    {

        animator.SetBool("reverse", reverse);
        animator.SetBool("forward", forward);

        reverse = true;
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
