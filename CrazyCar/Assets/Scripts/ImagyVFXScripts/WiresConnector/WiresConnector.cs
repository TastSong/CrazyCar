using UnityEngine;

namespace Assets.ImagyVFX.Scripts.WiresConnector
{
    internal sealed class WiresConnector : MonoBehaviour
    {
        public GameObject WiresParticles;
        public GameObject LineRendererPrefab;
        public bool UseSkinnedMeshRenderer;
        public SkinnedMeshRenderer TargetSkinnedMeshRenderer;
        public float MaxDistance;
        public int MaxConnections;
        public int MaxLineRenderers;

        private ParticleSystem _particleSystem;
        private ParticleSystem.MainModule _particleSystemMainModule;
        private ParticleSystem.Particle[] _particles;
        private LineRenderer[] _lineRenderers;
        private Transform _psTransform;

        private void Start()
        {
            _lineRenderers = new LineRenderer[MaxLineRenderers];

            var go = Instantiate(WiresParticles, transform.position, WiresParticles.transform.rotation);
            go.transform.parent = transform;

            _particleSystem = go.GetComponent<ParticleSystem>();
            var sh = _particleSystem.shape;

            if (UseSkinnedMeshRenderer)
                sh.skinnedMeshRenderer = TargetSkinnedMeshRenderer;

            _particleSystemMainModule = _particleSystem.main;
            _psTransform = _particleSystem.GetComponent<Transform>();

            int maxParticles = _particleSystemMainModule.maxParticles;
            _particles = new ParticleSystem.Particle[maxParticles];
        }

        private void LateUpdate()
        {
            var liveParticles = _particleSystem.GetParticles(_particles);
            var lineRenderersCount = _lineRenderers.Length;

            var lrIndex = 0;
            for (int i = 0; i < liveParticles; i++)
            {
                var p1Pos = _particles[i].position;

                var particleConnections = 0;

                for (int j = i + 1; j < liveParticles; j++)
                {
                    if (particleConnections == MaxConnections || lrIndex == MaxLineRenderers)
                        break;

                    var p2Pos = _particles[j].position;

                    float distance = Vector3.Distance(p2Pos, p1Pos);
                    if (distance > MaxDistance)
                        continue;

                    LineRenderer lineRenderer;

                    if (_lineRenderers[lrIndex] == null)
                    {
                        var go = Instantiate(LineRendererPrefab, _psTransform.position, _psTransform.rotation);
                        lineRenderer = go.GetComponent<LineRenderer>();
                        lineRenderer.transform.parent = _psTransform.transform;
                        _lineRenderers[lrIndex] = lineRenderer;
                    }

                    lineRenderer = _lineRenderers[lrIndex];

                    lineRenderer.enabled = true;
                    lineRenderer.SetPosition(0, p1Pos);
                    lineRenderer.SetPosition(1, p2Pos);

                    lrIndex++;
                    particleConnections++;
                }
            }

            var outdatedLineRenderers = lineRenderersCount - lrIndex;

            for (int i = lrIndex; i < outdatedLineRenderers; i++)
            {
                if (_lineRenderers[i] != null)
                    _lineRenderers[i].enabled = false;
            }
        }

        private void Stop()
        {
            DestroyAllLines();
        }

        private void OnDestroy()
        {
            DestroyAllLines();
        }

        private void DestroyAllLines()
        {
            if (_lineRenderers == null)
                return;

            foreach (var lineRenderer in _lineRenderers)
                if (lineRenderer != null)
                    Destroy(lineRenderer);
        }
    }
}