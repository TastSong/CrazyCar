using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Utils
{
    internal sealed class DemoInputConrtoller : MonoBehaviour
    {
        private const string SpaceButton = "space";

        private DemoPrefabController _demoController;

        private void Start()
        {
            _demoController = GetComponent<DemoPrefabController>();
        }

        private void Update()
        {
            if (Input.GetKeyDown(SpaceButton))
                _demoController.SelectNextPrefab();
        }
    }
}