using System;
using System.Collections;
using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Utils
{
    [RequireComponent(typeof(Projector))]
    internal sealed class ProjectorTextureAnimation : MonoBehaviour
    {
        public int TilesX = 4;
        public int TilesY = 4;
        public float Fps = 30;
        public AnimationCurve FrameOverTime = AnimationCurve.Linear(0, 1, 1, 1);

        private Projector _projector;
        private Material _projectorMaterial;
        private Material _originalMaterial;
        private float _animationLifeTime;
        private int _index;
        private int _countOfTextures, _currentNumOfTexture;
        private bool _isStarted;
        private bool _isCanceled;
        private float _animationStartTime;

        private void Start()
        {
            _projector = GetComponent<Projector>();
            if (_projector == null)
                throw new InvalidOperationException("Could not get projector");

            _animationLifeTime = TilesX * TilesY / Fps;
            _index = TilesX - 1;
            _countOfTextures = TilesY * TilesX;

            Play();
        }

        private void Play()
        {
            if (_isStarted)
                return;

            if (_projector == null || _projector.material == null)
                return;

            _originalMaterial = _projector.material;
            _projectorMaterial = Instantiate(_projector.material);
            _projector.material = _projectorMaterial;

            if (_originalMaterial == null)
                return;

            var offset = Vector3.zero;
            var size = new Vector2(1f / TilesX, 1f / TilesY);
            _projectorMaterial.SetTextureScale("_MainTex", size);
            _projectorMaterial.SetTextureOffset("_MainTex", offset);

            _isStarted = true;

            StartCoroutine(UpdateCorutine());
        }

        private IEnumerator UpdateCorutine()
        {
            _animationStartTime = Time.time;

            while (!_isCanceled)
            {
                UpdateFrame();

                var frameTime = (Time.time - _animationStartTime) / _animationLifeTime;
                var currentSpeedFps = FrameOverTime.Evaluate(Mathf.Clamp01(frameTime));
                yield return new WaitForSeconds(1f / (Fps * currentSpeedFps));
            }
        }

        private void UpdateFrame()
        {
            ++_currentNumOfTexture;
            ++_index;
            if (_index >= _countOfTextures)
                _index = 0;
            if (_currentNumOfTexture == _countOfTextures)
            {
                _animationStartTime = Time.time;
                _currentNumOfTexture = 0;
            }
            var offset = new Vector2((float)_index / TilesX - (int)(_index / TilesX), 1 - (int)(_index / TilesX) / (float)TilesY);
            if (_projector != null)
                _projectorMaterial.SetTextureOffset("_MainTex", offset);
        }

        private void Stop()
        {
            _isStarted = false;
            _isCanceled = true;
            StopAllCoroutines();
            _projector.material = _originalMaterial;
        }

        private void OnEnable()
        {
            Play();
        }

        private void OnDisable()
        {
            Stop();
        }

        private void OnDestroy()
        {
            Stop();
        }
    }
}
