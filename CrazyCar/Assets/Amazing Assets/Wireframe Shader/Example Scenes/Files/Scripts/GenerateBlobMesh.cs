using UnityEngine;
using System.Collections;
using UnityEngine.UI;



namespace AmazingAssets.WireframeShader.Example
{
    [DefaultExecutionOrder(1)]
    public class GenerateBlobMesh : MonoBehaviour
    {
        MCBlob mcBlob;
        MeshFilter meshFilter;


        void Start()
        {
            meshFilter = GetComponent<MeshFilter>();

            mcBlob = new MCBlob(meshFilter);
        }

        void Update()
        {
            mcBlob.Update();

            meshFilter.sharedMesh = mcBlob.finalMesh;           
        }
    }
}