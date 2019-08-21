using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Vuforia;

public class Reload : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    //void Awake()
    //{
    //    GameObject[] objs = GameObject.FindGameObjectsWithTag("MainCamera");

    //    DontDestroyOnLoad(this.gameObject);
    //    VuforiaRuntime.Instance.InitVuforia();
    //}




    public void LoadCurrentScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }


}
