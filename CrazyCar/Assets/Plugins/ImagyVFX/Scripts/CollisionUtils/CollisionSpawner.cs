using UnityEngine;

namespace Assets.ImagyVFX.Scripts.CollisionUtils
{
    [RequireComponent(typeof(CollisionDetector))]
    internal sealed class CollisionSpawner : MonoBehaviour
    {
        public GameObject CollisionEffectPrefab;
        public float LifeTime = 1f;

        public bool SpawnDecal;
        public GameObject DecalPrefab;

        private bool _isAlreadySpawned;
        private CollisionDetector _collisionDetector;

        private void Start()
        {
            _collisionDetector = GetComponent<CollisionDetector>();
            _collisionDetector.CollisionDetected += OnCollisionDetected;
        }

        private void OnCollisionDetected(Vector3 hit)
        {
            if (_isAlreadySpawned)
                return;

            InstantiateImpactEffect(hit);

            InstantiateDecal(hit);

            Invoke("Reset", LifeTime);

            _isAlreadySpawned = true;
        }

        private void InstantiateImpactEffect(Vector3 pos)
        {
            var impactEffect = Instantiate(CollisionEffectPrefab, pos, CollisionEffectPrefab.transform.rotation);
            impactEffect.transform.position = pos;

            //todo add ivoke with delay and params
            Destroy(impactEffect, LifeTime);
        }

        private void InstantiateDecal(Vector3 pos)
        {
            var decalEffect = Instantiate(DecalPrefab, pos, DecalPrefab.transform.rotation);
            decalEffect.transform.position = pos;

            //todo add ivoke with delay and params
            Destroy(decalEffect, LifeTime);
        }

        private void Reset()
        {
            _isAlreadySpawned = false;
        }

        private void OnDestroy()
        {
            _collisionDetector.CollisionDetected -= OnCollisionDetected;
        }
    }
}
