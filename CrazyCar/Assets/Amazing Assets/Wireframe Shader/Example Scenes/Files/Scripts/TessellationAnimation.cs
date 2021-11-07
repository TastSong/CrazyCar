using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AmazingAssets.WireframeShader.Example
{
    public class TessellationAnimation : MonoBehaviour
    {
        public float speed = 1;
        public AnimationCurve cuve;

        float deltaTime;
        float fullRotate = 0;

        Material mat;

        // Use this for initialization
        void Start()
        {
            deltaTime = 0;
            fullRotate = 360f / speed;

            if (GetComponent<Renderer>() != null)
                mat = GetComponent<Renderer>().sharedMaterial;
        }

        // Update is called once per frame
        void Update()
        {
            if (mat != null)
            {
                deltaTime += Time.deltaTime / fullRotate;


                float value = Mathf.Clamp01(cuve.Evaluate(deltaTime));

                mat.SetFloat("_Wireframe_Tessellation", 1 + value * value * 31);
                mat.SetFloat("_Wireframe_Tessellation_DispStrength", value * 3);
            }

            transform.Rotate(Vector3.up, Time.deltaTime * speed);
        }
    }
}
