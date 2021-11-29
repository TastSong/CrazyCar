using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// Add this bar to an object and link it to a bar (possibly the same object the script is on), and you'll be able to resize the bar object based on a current value, located between a min and max value.
    /// See the HealthBar.cs script for a use case
    /// </summary>
    public class MMProgressBar : MonoBehaviour
    {
        /// the possible fill modes 
        public enum FillModes { LocalScale, FillAmount, Width, Height }
        /// the possible directions for the fill (for local scale and fill amount only)
        public enum BarDirections { LeftToRight, RightToLeft, UpToDown, DownToUp }
        /// the possible timescales the bar can work on
        public enum TimeScales { UnscaledTime, Time }

        [Header("General Settings")]
        /// the local scale or fillamount value to reach when the bar is empty 
        public float StartValue = 0f;
        /// the local scale or fillamount value to reach when the bar is full
        public float EndValue = 1f;
        /// the direction this bar moves to
        public BarDirections BarDirection = BarDirections.LeftToRight;
        /// the foreground bar's fill mode
        public FillModes FillMode = FillModes.LocalScale;
        /// defines whether the bar will work on scaled or unscaled time (whether or not it'll keep moving if time is slowed down for example)
        public TimeScales TimeScale = TimeScales.UnscaledTime;

        [Header("Foreground Bar Settings")]
        /// whether or not the foreground bar should lerp
        public bool LerpForegroundBar = true;
        /// the speed at which to lerp the foreground bar
        public float LerpForegroundBarSpeed = 15f;

        [Header("Delayed Bar Settings")]
        /// the delay before the delayed bar moves (in seconds)
        public float Delay = 1f;
        /// whether or not the delayed bar's animation should lerp
        public bool LerpDelayedBar = true;
        /// the speed at which to lerp the delayed bar
        public float LerpDelayedBarSpeed = 15f;

        [Header("Bindings")]
        /// optional - the ID of the player associated to this bar
        public string PlayerID;
        /// the delayed bar
        public Transform DelayedBar;
        /// the main, foreground bar
        public Transform ForegroundBar;

        [Header("Bump")]
        /// whether or not the bar should "bump" when changing value
        public bool BumpScaleOnChange = true;
        /// whether or not the bar should bump when its value increases
        public bool BumpOnIncrease = false;
        /// the duration of the bump animation
        public float BumpDuration = 0.2f;
        /// whether or not the bar should flash when bumping
        public bool ChangeColorWhenBumping = true;
        /// the color to apply to the bar when bumping
        public Color BumpColor = Color.white;
        /// the curve to map the bump animation on
        public AnimationCurve BumpAnimationCurve = new AnimationCurve(new Keyframe(1, 1), new Keyframe(0.3f, 1.05f), new Keyframe(1, 1));
        /// the curve to map the bump animation color animation on
        public AnimationCurve BumpColorAnimationCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.3f, 1f), new Keyframe(1, 0));
        /// whether or not the bar is bumping right now
        public bool Bumping { get; protected set; }

        [Header("Realtime")]
        /// whether or not this progress bar should update itself every update (if not, you'll have to update it using the UpdateBar method
        public bool AutoUpdating = false;
        /// the current progress of the bar
        [Range(0f, 1f)]
        public float BarProgress;
        
        protected float _targetFill;
        protected Vector3 _targetLocalScale = Vector3.one;
        protected float _newPercent;
        protected float _lastPercent;
        protected float _lastUpdateTimestamp;
        protected bool _bump = false;
        protected Color _initialColor;
        protected Vector3 _initialScale;
        protected Vector3 _newScale;
        protected Image _foregroundImage;
        protected Image _delayedImage;
        protected bool _initialized;
        protected Vector2 _initialFrontBarSize;

        /// <summary>
        /// On start we store our image component
        /// </summary>
        protected virtual void Start()
        {
            _initialScale = this.transform.localScale;

            if (ForegroundBar != null)
            {
                _foregroundImage = ForegroundBar.GetComponent<Image>();
                _initialFrontBarSize = _foregroundImage.rectTransform.sizeDelta;
            }
            if (DelayedBar != null)
            {
                _delayedImage = DelayedBar.GetComponent<Image>();
            }
            _initialized = true;
        }

        /// <summary>
        /// On Update we update our bars
        /// </summary>
        protected virtual void Update()
        {
            AutoUpdate();
            UpdateFrontBar();
            UpdateDelayedBar();
        }

        protected virtual void AutoUpdate()
        {
            if (!AutoUpdating)
            {
                return;
            }

            _newPercent = Remap(BarProgress, 0f, 1f, StartValue, EndValue);
            _targetFill = _newPercent;
            _lastUpdateTimestamp = (TimeScale == TimeScales.Time) ? Time.time : Time.unscaledTime;
        }

        /// <summary>
        /// Updates the front bar's scale
        /// </summary>
        protected virtual void UpdateFrontBar()
        {
            float currentDeltaTime = (TimeScale == TimeScales.Time) ? Time.deltaTime : Time.unscaledTime;

            if (ForegroundBar != null)
            {
                switch (FillMode)
                {
                    case FillModes.LocalScale:
                        _targetLocalScale = Vector3.one;
                        switch (BarDirection)
                        {
                            case BarDirections.LeftToRight:
                                _targetLocalScale.x = _targetFill;
                                break;
                            case BarDirections.RightToLeft:
                                _targetLocalScale.x = 1f - _targetFill;
                                break;
                            case BarDirections.DownToUp:
                                _targetLocalScale.y = _targetFill;
                                break;
                            case BarDirections.UpToDown:
                                _targetLocalScale.y = 1f - _targetFill;
                                break;
                        }

                        if (LerpForegroundBar)
                        {
                            _newScale = Vector3.Lerp(ForegroundBar.localScale, _targetLocalScale, currentDeltaTime * LerpForegroundBarSpeed);
                        }
                        else
                        {
                            _newScale = _targetLocalScale;
                        }

                        ForegroundBar.localScale = _newScale;
                        break;

                    case FillModes.Width:
                        if (_foregroundImage == null)
                        {
                            return;
                        }
                        float newSizeX = Remap(_targetFill, 0f, 1f, 0, _initialFrontBarSize.x);
                        newSizeX = Mathf.Lerp(_foregroundImage.rectTransform.sizeDelta.x, newSizeX, currentDeltaTime * LerpForegroundBarSpeed);
                        _foregroundImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, newSizeX);
                        break;

                    case FillModes.Height:
                        if (_foregroundImage == null)
                        {
                            return;
                        }
                        float newSizeY = Remap(_targetFill, 0f, 1f, 0, _initialFrontBarSize.y);
                        newSizeY = Mathf.Lerp(_foregroundImage.rectTransform.sizeDelta.x, newSizeY, currentDeltaTime * LerpForegroundBarSpeed);
                        _foregroundImage.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, newSizeY);
                        break;

                    case FillModes.FillAmount:
                        if (_foregroundImage == null)
                        {
                            return;
                        }
                        if (LerpForegroundBar)
                        {
                            _foregroundImage.fillAmount = Mathf.Lerp(_foregroundImage.fillAmount, _targetFill, currentDeltaTime * LerpForegroundBarSpeed);
                        }
                        else
                        {
                            _foregroundImage.fillAmount = _targetFill;
                        }
                        break;
                }
            }
        }

        /// <summary>
        /// Updates the delayed bar's scale
        /// </summary>
        protected virtual void UpdateDelayedBar()
        {
            float currentDeltaTime = (TimeScale == TimeScales.Time) ? Time.deltaTime : Time.unscaledDeltaTime;
            float currentTime = (TimeScale == TimeScales.Time) ? Time.time : Time.unscaledTime;

            if (DelayedBar != null)
            {
                if (currentTime - _lastUpdateTimestamp > Delay)
                {
                    if (FillMode == FillModes.LocalScale)
                    {
                        _targetLocalScale = Vector3.one;

                        switch (BarDirection)
                        {
                            case BarDirections.LeftToRight:
                                _targetLocalScale.x = _targetFill;
                                break;
                            case BarDirections.RightToLeft:
                                _targetLocalScale.x = 1f - _targetFill;
                                break;
                            case BarDirections.DownToUp:
                                _targetLocalScale.y = _targetFill;
                                break;
                            case BarDirections.UpToDown:
                                _targetLocalScale.y = 1f - _targetFill;
                                break;
                        }

                        if (LerpDelayedBar)
                        {
                            _newScale = Vector3.Lerp(DelayedBar.localScale, _targetLocalScale, currentDeltaTime * LerpDelayedBarSpeed);
                        }
                        else
                        {
                            _newScale = _targetLocalScale;
                        }
                        DelayedBar.localScale = _newScale;
                    }

                    if ((FillMode == FillModes.FillAmount) && (_delayedImage != null))
                    {
                        if (LerpDelayedBar)
                        {
                            _delayedImage.fillAmount = Mathf.Lerp(_delayedImage.fillAmount, _targetFill, currentDeltaTime * LerpDelayedBarSpeed);
                        }
                        else
                        {
                            _delayedImage.fillAmount = _targetFill;
                        }
                    }
                }
            }
        }

        /// <summary>
        /// Updates the bar's values based on the specified parameters
        /// </summary>
        /// <param name="currentValue">Current value.</param>
        /// <param name="minValue">Minimum value.</param>
        /// <param name="maxValue">Max value.</param>
        public virtual void UpdateBar(float currentValue, float minValue, float maxValue)
        {
            _newPercent = Remap(currentValue, minValue, maxValue, StartValue, EndValue);
            if ((_newPercent != BarProgress) && !Bumping)
            {
                Bump();
            }
            BarProgress = _newPercent;
            _targetFill = _newPercent;
            _lastUpdateTimestamp = (TimeScale == TimeScales.Time) ? Time.time : Time.unscaledTime;
            _lastPercent = _newPercent;
        }

        /// <summary>
        /// Triggers a camera bump
        /// </summary>
        public virtual void Bump()
        {
            if (!BumpScaleOnChange || !_initialized)
            {
                return;
            }
            if (!BumpOnIncrease && (_lastPercent < _newPercent))
            {
                return;
            }
            if (this.gameObject.activeInHierarchy)
            {
                StartCoroutine(BumpCoroutine());
            }
        }

        /// <summary>
        /// A coroutine that (usually quickly) changes the scale of the bar 
        /// </summary>
        /// <returns>The coroutine.</returns>
        protected virtual IEnumerator BumpCoroutine()
        {
            float journey = 0f;
            float currentDeltaTime = (TimeScale == TimeScales.Time) ? Time.deltaTime : Time.unscaledDeltaTime;

            Bumping = true;
            if (_foregroundImage != null)
            {
                _initialColor = _foregroundImage.color;
            }

            while (journey <= BumpDuration)
            {
                journey = journey + currentDeltaTime;
                float percent = Mathf.Clamp01(journey / BumpDuration);
                float curvePercent = BumpAnimationCurve.Evaluate(percent);
                float colorCurvePercent = BumpColorAnimationCurve.Evaluate(percent);
                this.transform.localScale = curvePercent * _initialScale;

                if (ChangeColorWhenBumping && (_foregroundImage != null))
                {
                    _foregroundImage.color = Color.Lerp(_initialColor, BumpColor, colorCurvePercent);
                }

                yield return null;
            }
            _foregroundImage.color = _initialColor;
            Bumping = false;
            yield return null;

        }


        protected virtual float Remap(float x, float A, float B, float C, float D)
        {
            float remappedValue = C + (x - A) / (B - A) * (D - C);
            return remappedValue;
        }
    }
}