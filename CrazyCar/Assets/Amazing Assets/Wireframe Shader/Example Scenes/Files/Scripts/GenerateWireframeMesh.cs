using UnityEngine;
using System.Collections;
using UnityEngine.UI;



namespace AmazingAssets.WireframeShader.Example
{
    [DefaultExecutionOrder(2)] //This example script must be executed after 'GenerateBlobMesh' script.
    public class GenerateWireframeMesh : MonoBehaviour
    {
        
        public Material material;
        public bool tryQuad;
        public Text uiText;
        

        MeshFilter meshFilter;

        Mesh wireframeMesh;

        void Start()
        {
            meshFilter = GetComponent<MeshFilter>();
        }

        void Update()
        {
            //We generate new wireframe mesh on every frame and need to delete old one
            if (wireframeMesh != null)
                DestroyImmediate(wireframeMesh);



            float time = Time.realtimeSinceStartup;

            wireframeMesh = meshFilter.sharedMesh.GenerateWireframeMesh(false, tryQuad);

            uiText.text = string.Format("Wireframe generation speed: {0} ms", (Time.realtimeSinceStartup - time).ToString("f5"));



            //Use new wireframe mesh
            meshFilter.sharedMesh = wireframeMesh;
        }

        public void OnUIToggleTryQuad(bool value)
        {
            tryQuad = value;
        }

    }
}