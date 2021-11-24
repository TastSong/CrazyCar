using System;
using System.Collections;
using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Utils
{
    internal sealed class UvAnimation : MonoBehaviour
    {
        public int TilesX = 4;
        public int TilesY = 4;
        public float Fps = 30;
        public int StartFrameOffset;
        public bool IsLoop = true;
        public float StartDelay = 0;
        public bool IsReverse;
        public bool IsBump;

        public AnimationCurve FrameOverTime = AnimationCurve.Linear(0, 1, 1, 1);

        private bool _isInizialised;
        private int _index;
        private int _count, _allCount;
        private float _animationLifeTime;
        private bool _isVisible;
        private bool _isCorutineStarted;
        private Renderer _currentRenderer;
        private Material _instanceMaterial;
        private float _animationStartTime;
        private bool _animationStoped;

        private void Start()
        {
            _currentRenderer = GetComponent<Renderer>();
            InitDefaultVariables();
            _isInizialised = true;
            _isVisible = true;
            Play();
        }

        private void InitDefaultVariables()
        {
            _currentRenderer = GetComponent<Renderer>();
            if (_currentRenderer == null)
                throw new Exception("UvTextureAnimator can't get renderer");
            if (!_currentRenderer.enabled)
                _currentRenderer.enabled = true;
            _allCount = 0;
            _animationStoped = false;
            _animationLifeTime = TilesX * TilesY / Fps;
            _count = TilesY * TilesX;
            _index = TilesX - 1;
            var offset = Vector3.zero;
            StartFrameOffset = StartFrameOffset - (StartFrameOffset / _count) * _count;
            var size = new Vector2(1f / TilesX, 1f / TilesY);

            if (_currentRenderer != null)
            {
                _instanceMaterial = _currentRenderer.material;
                _instanceMaterial.SetTextureScale("_MainTex", size);
                _instanceMaterial.SetTextureOffset("_MainTex", offset);
                if (IsBump)
                {
                    _instanceMaterial.SetTextureScale("_BumpMap", size);
                    _instanceMaterial.SetTextureOffset("_BumpMap", offset);
                }
            }
        }

        private void Play()
        {
            if (_isCorutineStarted)
                return;
            if (StartDelay > 0.0001f)
                Invoke("PlayDelay", StartDelay);
            else
                StartCoroutine(UpdateCorutine());
            _isCorutineStarted = true;
        }

        private void PlayDelay()
        {
            StartCoroutine(UpdateCorutine());
        }

        private void OnEnable()
        {
            if (!_isInizialised)
                return;
            InitDefaultVariables();
            _isVisible = true;
            Play();
        }

        private void OnDisable()
        {
            _isCorutineStarted = false;
            _isVisible = false;
            StopAllCoroutines();
            CancelInvoke("PlayDelay");
        }


        private IEnumerator UpdateCorutine()
        {
            _animationStartTime = Time.time;
            while (_isVisible && (IsLoop || !_animationStoped))
            {
                if (!IsReverse)
                    UpdateFrame();
                else
                    UpdateFrameReversed();

                if (!IsLoop && _animationStoped)
                    break;

                var frameTime = (Time.time - _animationStartTime) / _animationLifeTime;
                var currentSpeedFps = FrameOverTime.Evaluate(Mathf.Clamp01(frameTime));
                yield return new WaitForSeconds(1f / (Fps * currentSpeedFps));
            }
            _isCorutineStarted = false;
        }

        private void UpdateFrame()
        {
            ++_allCount;
            ++_index;
            if (_index >= _count)
                _index = 0;
            if (_count == _allCount)
            {
                _animationStartTime = Time.time;
                _allCount = 0;
                _animationStoped = true;
            }
            var offset = new Vector2((float)_index / TilesX - (int)(_index / TilesX), 1 - (int)(_index / TilesX) / (float)TilesY);
            if (_currentRenderer != null)
            {
                _instanceMaterial.SetTextureOffset("_MainTex", offset);
                if (IsBump)
                    _instanceMaterial.SetTextureOffset("_BumpMap", offset);

            }
        }

        private void UpdateFrameReversed()
        {
            --_allCount;
            --_index;
            if (_index <= 0)
                _index = _count;
            if (_count == _allCount)
            {
                _animationStartTime = Time.time;
                _allCount = 0;
                _animationStoped = true;
            }
            var offset = new Vector2((float)_index / TilesX - (int)(_index / TilesX), 1 - (int)(_index / TilesX) / (float)TilesY);
            if (_currentRenderer != null)
            {
                _instanceMaterial.SetTextureOffset("_MainTex", offset);
                if (IsBump)
                    _instanceMaterial.SetTextureOffset("_BumpMap", offset);
            }
        }


        private void OnDestroy()
        {
            if (_instanceMaterial != null)
            {
                Destroy(_instanceMaterial);
                _instanceMaterial = null;
            }
        }
    }
}