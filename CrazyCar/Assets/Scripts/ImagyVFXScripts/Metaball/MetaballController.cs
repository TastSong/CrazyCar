using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Metaball
{
    internal sealed class MetaballController : MonoBehaviour
    {
        public GameObject MetaballParticles;
        public GameObject MetaballCamera;
        public Material MetaballCameraMaterial;

        private Camera _metaballCamera;
        private GameObject _instMetaballParticles;

        private GameObject _mainCamera;
        private MetaballPostProcessing _metaballPostProcessingComponent;

        private void Start()
        {
            _mainCamera = Camera.main.gameObject;

            var trMainCamera = _mainCamera.transform;

            InstantiateCamera(trMainCamera);

            SetupPostProcessing();

            InstantiateParticles();
        }

        private void InstantiateCamera(Transform trMainCamera)
        {
            _metaballCamera = Instantiate(MetaballCamera).GetComponent<Camera>();
            _metaballCamera.transform.position = trMainCamera.position;
            _metaballCamera.transform.rotation = trMainCamera.rotation;
            _metaballCamera.transform.parent = trMainCamera;
        }

        private void SetupPostProcessing()
        {
            _metaballPostProcessingComponent = _mainCamera.GetComponent<MetaballPostProcessing>();
            _metaballPostProcessingComponent.Init(_metaballCamera, MetaballCameraMaterial);
            _metaballPostProcessingComponent.enabled = true;
        }

        private void InstantiateParticles()
        {
            _instMetaballParticles = Instantiate(MetaballParticles);
            _instMetaballParticles.SetActive(true);
            _instMetaballParticles.transform.parent = transform;
            _instMetaballParticles.transform.position = transform.position;
        }

        private void OnDestroy()
        {
            _metaballPostProcessingComponent.enabled = false;
            
            if (_metaballCamera != null)
                Destroy(_metaballCamera.gameObject);
        }
    }
}