using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Utils
{
    public sealed class DemoPrefabController : MonoBehaviour
    {
        public int StartNum = 0;
        public GameObject[] Prefabs;

        private GameObject _currentInstance;
        private int _currentPrefabNum;

        public void SelectNextPrefab()
        {
            if (Prefabs.Length == 0)
                return;

            _currentPrefabNum++;
            if (_currentPrefabNum >= Prefabs.Length)
                _currentPrefabNum = 0;

            ChangePrefab(_currentPrefabNum);
        }

        public void SelectePrevPrefab()
        {
            if (Prefabs.Length == 0)
                return;

            _currentPrefabNum--;

            if (_currentPrefabNum < 0)
                _currentPrefabNum = Prefabs.Length - 1;

            ChangePrefab(_currentPrefabNum);
        }

        private void Start()
        {
            _currentPrefabNum = StartNum;

            ChangePrefab(_currentPrefabNum);
        }

        private void ChangePrefab(int num)
        {
            if (_currentInstance != null)
                Destroy(_currentInstance);
            _currentInstance = Instantiate(Prefabs[num]);
            _currentInstance.SetActive(true);
        }
    }
}