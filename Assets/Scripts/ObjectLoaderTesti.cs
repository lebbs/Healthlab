using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ObjectLoaderTesti : MonoBehaviour
{

    // string assetName = "model.cube";
    // // Start is called before the first frame update
    // void Start()
    // {
    //     string url = "https://hololensfiles.file.core.windows.net/objshare/Assetbundles/model.cube?st=2019-08-02T11%3A18%3A53Z&se=2019-08-03T11%3A18%3A53Z&sp=rl&sv=2018-03-28&sr=f&sig=O17QsoQLk4piyhCtkBSo4Q1loK1oSadVcCsyqRs6d8g%3D";
    //     WWW www = new WWW(url);
    //     StartCoroutine(WaitForReq(www));
    // }

    //IEnumerator WaitForReq(WWW www)
    // {
    //     yield return www;
    //     AssetBundle bundle = www.assetBundle;
    //     if(www.error == null)
    //     {

    //     GameObject testi = (GameObject)bundle.LoadAsset("model.cube?st=2019-08-02T11%3A18%3A53Z&se=2019-08-03T11%3A18%3A53Z&sp=rl&sv=2018-03-28&sr=f&sig=O17QsoQLk4piyhCtkBSo4Q1loK1oSadVcCsyqRs6d8g%3D");
    //         Instantiate(testi);
    //     }
    //     else
    //     {
    //         Debug.Log(www.error);
    //     }
    // }




    public string url;
    public GameObject objekti;
    public GameObject newParent;
    private void Start()
    {
        StartCoroutine(DownloadModel());
    }

    IEnumerator DownloadModel()
    {
        WWW www = new WWW(url);
        yield return www;
        AssetBundle assetBundle = www.assetBundle;
        //GameObject g = Instantiate(assetBundle.LoadAsset("model.cube")) as GameObject;
        foreach (var name in assetBundle.GetAllAssetNames())
        {
             GameObject gameObject = Instantiate(assetBundle.LoadAsset("lamppu")) as GameObject;
            gameObject.transform.localScale += new Vector3(001, 001, 001);

        }

    }

    //public void SetParent(GameObject newParent)
    //{
    //    gameObject.transform.parent = newParent.transform;
    //}
}
