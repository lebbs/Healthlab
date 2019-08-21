using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class DontDestroy : MonoBehaviour
{
    // Start is called before the first frame update
    public void Awake()
    {
        GameObject[] objs = GameObject.FindGameObjectsWithTag("PlaySpace");
        //GameObject[] objs1 = GameObject.FindGameObjectsWithTag("MRTK");


        if (objs.Length > 1)
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(this.gameObject);

        VuforiaRuntime.Instance.InitVuforia();

    }

    // Update is called once per frame

}
