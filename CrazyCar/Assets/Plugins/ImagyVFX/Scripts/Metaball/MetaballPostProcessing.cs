using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Metaball
{
    internal sealed class MetaballPostProcessing : MonoBehaviour
    {
        private Material _material;

        private Camera _camera;

        private RenderTexture _renderTexture;

        public void Init(Camera camera, Material material)
        {
            _camera = camera;
            _material = material;
            
            _renderTexture = new RenderTexture(Screen.width, Screen.height, 24);
            _camera.enabled = false;
            _camera.targetTexture = _renderTexture;
        }

        private void OnRenderImage(RenderTexture src, RenderTexture dest)
        {
            _camera.Render();
            Graphics.Blit(_renderTexture, src, _material);
            Graphics.Blit(src, dest);
        }
    }
}