using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pivot : MonoBehaviour
{

    public float gizmoSize = .75f;
    public Color gizmocolor = Color.yellow;

    void OnDrawGizmos()
    {
        Gizmos.color = gizmocolor;
        Gizmos.DrawWireSphere(transform.position, gizmoSize);
    }

}
