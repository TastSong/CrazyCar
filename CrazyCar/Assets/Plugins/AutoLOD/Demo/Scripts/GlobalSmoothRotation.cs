using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalSmoothRotation : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0f, 50f*Time.deltaTime, 0f), Space.World);
    }
}
