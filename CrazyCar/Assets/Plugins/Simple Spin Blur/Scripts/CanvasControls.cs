using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class CanvasControls : MonoBehaviour
{
    public GameObject propeller;
    public Slider rpm, shutterSpeed, samples, alphaOffset, angularVelocityCutoff;
    public SimpleSpinBlur simpleSpinBlur;
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        propeller.transform.Rotate(new Vector3(rpm.value,0,0) * Time.deltaTime);
        simpleSpinBlur.shutterSpeed = (int)shutterSpeed.value;
        simpleSpinBlur.Samples = (int)samples.value;
        simpleSpinBlur.alphaOffset = alphaOffset.value;
        simpleSpinBlur.advancedSettings.AngularVelocityCutoff = angularVelocityCutoff.value;
    }
}
