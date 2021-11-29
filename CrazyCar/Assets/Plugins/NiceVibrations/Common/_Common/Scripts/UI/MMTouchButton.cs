using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace MoreMountains.NiceVibrations
{	
	[RequireComponent(typeof(Rect))]
	[RequireComponent(typeof(CanvasGroup))]
	/// <summary>
	/// Add this component to a GUI Image to have it act as a button. 
	/// Bind pressed down, pressed continually and released actions to it from the inspector
	/// Handles mouse and multi touch
	/// </summary>
	public class MMTouchButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler, IPointerEnterHandler, ISubmitHandler
	{
		/// The different possible states for the button : 
		/// Off (default idle state), ButtonDown (button pressed for the first time), ButtonPressed (button being pressed), ButtonUp (button being released), Disabled (unclickable but still present on screen)
		/// ButtonDown and ButtonUp will only last one frame, the others will last however long you press them / disable them / do nothing
		public enum ButtonStates { Off, ButtonDown, ButtonPressed, ButtonUp, Disabled }
		[Header("Binding")]
		/// The method(s) to call when the button gets pressed down
		public UnityEvent ButtonPressedFirstTime;
		/// The method(s) to call when the button gets released
		public UnityEvent ButtonReleased;
		/// The method(s) to call while the button is being pressed
		public UnityEvent ButtonPressed;

		[Header("Sprite Swap")]
		public Sprite DisabledSprite;
		public Sprite PressedSprite;
		public Sprite HighlightedSprite;

        [Header("Color Changes")]
        public bool PressedChangeColor = false;
        public Color PressedColor = Color.white;
        public bool LerpColor = true;
        public float LerpColorDuration = 0.2f;
        public AnimationCurve LerpColorCurve;

        [Header("Opacity")]
		/// the new opacity to apply to the canvas group when the button is pressed
		public float PressedOpacity = 1f;
		public float IdleOpacity = 1f;
		public float DisabledOpacity = 1f;

		[Header("Delays")]
		public float PressedFirstTimeDelay = 0f;
		public float ReleasedDelay = 0f;

		[Header("Buffer")]
		public float BufferDuration = 0f;

		[Header("Animation")]
		public Animator Animator;
		public string IdleAnimationParameterName = "Idle";
		public string DisabledAnimationParameterName = "Disabled";
		public string PressedAnimationParameterName = "Pressed";

		[Header("Mouse Mode")]
		/// If you set this to true, you'll need to actually press the button for it to be triggered, otherwise a simple hover will trigger it (better for touch input).
		public bool MouseMode = false;

		public bool ReturnToInitialSpriteAutomatically { get; set; }

		/// the current state of the button (off, down, pressed or up)
		public ButtonStates CurrentState { get; protected set; }

		protected bool _zonePressed = false;
		protected CanvasGroup _canvasGroup;
		protected float _initialOpacity;
		protected Animator _animator;
		protected Image _image;
		protected Sprite _initialSprite;
		protected Color _initialColor;
		protected float _lastClickTimestamp = 0f;
		protected Selectable _selectable;
        protected float _lastStateChangeAt = -50f;

        protected Color _imageColor;
        protected Color _fromColor;
        protected Color _toColor;

		/// <summary>
		/// On Start, we get our canvasgroup and set our initial alpha
		/// </summary>
		protected virtual void Awake()
		{
			Initialization ();
		}

		protected virtual void Initialization()
		{
			ReturnToInitialSpriteAutomatically = true;

			_selectable = GetComponent<Selectable> ();

			_image = GetComponent<Image> ();
			if (_image != null)
			{
				_initialColor = _image.color;
				_initialSprite = _image.sprite;
			}

			_animator = GetComponent<Animator> ();
			if (Animator != null)
			{
				_animator = Animator;
			}

			_canvasGroup = GetComponent<CanvasGroup>();
			if (_canvasGroup!=null)
			{
				_initialOpacity = IdleOpacity;
				_canvasGroup.alpha = _initialOpacity;
				_initialOpacity = _canvasGroup.alpha;
			}
			ResetButton();
		}

		/// <summary>
		/// Every frame, if the touch zone is pressed, we trigger the OnPointerPressed method, to detect continuous press
		/// </summary>
		protected virtual void Update()
		{
			switch (CurrentState)
			{
				case ButtonStates.Off:
					SetOpacity (IdleOpacity);
					if ((_image != null) && (ReturnToInitialSpriteAutomatically))
					{
						_image.sprite = _initialSprite;
					}
					if (_selectable != null)
					{
						_selectable.interactable = true;
						if (EventSystem.current.currentSelectedGameObject == this.gameObject)
						{
							if (HighlightedSprite != null)
							{
								_image.sprite = HighlightedSprite;
							}
						}
					}
					break;

				case ButtonStates.Disabled:
					SetOpacity (DisabledOpacity);
					if (_image != null)
					{
						if (DisabledSprite != null)
						{
							_image.sprite = DisabledSprite;	
						}
					}
					if (_selectable != null)
					{
						_selectable.interactable = false;
					}
					break;

				case ButtonStates.ButtonDown:

					break;

				case ButtonStates.ButtonPressed:
					SetOpacity (PressedOpacity);
					OnPointerPressed();
					if (_image != null)
					{
						if (PressedSprite != null)
						{
							_image.sprite = PressedSprite;
						}
						if (PressedChangeColor)
						{
							_image.color = PressedColor;	
						}
					}
					break;

				case ButtonStates.ButtonUp:

					break;
			}

            if ((_image != null) && (PressedChangeColor))
            {
                if (Time.time - _lastStateChangeAt < LerpColorDuration)
                {
                    float t = LerpColorCurve.Evaluate(Remap(Time.time - _lastStateChangeAt, 0f, LerpColorDuration, 0f, 1f));
                    _image.color = Color.Lerp(_fromColor, _toColor, t);
                }
            }

			UpdateAnimatorStates ();
		}

		/// <summary>
		/// At the end of every frame, we change our button's state if needed
		/// </summary>
		protected virtual void LateUpdate()
		{
			if (CurrentState == ButtonStates.ButtonUp)
			{
                _lastStateChangeAt = Time.time;
                _fromColor = PressedColor;
                _toColor = _initialColor;
                CurrentState = ButtonStates.Off;
			}
			if (CurrentState == ButtonStates.ButtonDown)
			{
                _lastStateChangeAt = Time.time;
                _fromColor = _initialColor;
                _toColor = PressedColor;
                CurrentState = ButtonStates.ButtonPressed;
			}
		}

		/// <summary>
		/// Triggers the bound pointer down action
		/// </summary>
		public virtual void OnPointerDown(PointerEventData data)
		{
			if (Time.time - _lastClickTimestamp < BufferDuration)
			{
				return;
			}

			if (CurrentState != ButtonStates.Off)
			{
				return;
			}
            CurrentState = ButtonStates.ButtonDown;
			_lastClickTimestamp = Time.time;
			if ((Time.timeScale != 0) && (PressedFirstTimeDelay > 0))
			{
				Invoke ("InvokePressedFirstTime", PressedFirstTimeDelay);	
			}
			else
			{
				ButtonPressedFirstTime.Invoke();
			}
		}

		protected virtual void InvokePressedFirstTime()
		{
			if (ButtonPressedFirstTime!=null)
			{
				ButtonPressedFirstTime.Invoke();
			}
		}

		/// <summary>
		/// Triggers the bound pointer up action
		/// </summary>
		public virtual void OnPointerUp(PointerEventData data)
		{
			if (CurrentState != ButtonStates.ButtonPressed && CurrentState != ButtonStates.ButtonDown)
			{
				return;
			}

			CurrentState = ButtonStates.ButtonUp;
			if ((Time.timeScale != 0) && (ReleasedDelay > 0))
			{
				Invoke ("InvokeReleased", ReleasedDelay);
			}
			else
			{
				ButtonReleased.Invoke();
			}
		}

		protected virtual void InvokeReleased()
		{
			if (ButtonReleased != null)
			{
				ButtonReleased.Invoke();
			}			
		}

		/// <summary>
		/// Triggers the bound pointer pressed action
		/// </summary>
		public virtual void OnPointerPressed()
		{
			CurrentState = ButtonStates.ButtonPressed;
			if (ButtonPressed != null)
			{
				ButtonPressed.Invoke();
			}
		}

		/// <summary>
		/// Resets the button's state and opacity
		/// </summary>
		protected virtual void ResetButton()
		{
			SetOpacity(_initialOpacity);
			CurrentState = ButtonStates.Off;
		}

		/// <summary>
		/// Triggers the bound pointer enter action when touch enters zone
		/// </summary>
		public virtual void OnPointerEnter(PointerEventData data)
		{
			if (!MouseMode)
			{
				OnPointerDown (data);
			}
		}

		/// <summary>
		/// Triggers the bound pointer exit action when touch is out of zone
		/// </summary>
		public virtual void OnPointerExit(PointerEventData data)
		{
			if (!MouseMode)
			{
				OnPointerUp(data);	
			}
		}
		/// <summary>
		/// OnEnable, we reset our button state
		/// </summary>
		protected virtual void OnEnable()
		{
			ResetButton();
		}

		public virtual void DisableButton()
		{
			CurrentState = ButtonStates.Disabled;
		}

		public virtual void EnableButton()
		{
			if (CurrentState == ButtonStates.Disabled)
			{
				CurrentState = ButtonStates.Off;	
			}
		}

		protected virtual void SetOpacity(float newOpacity)
		{
			if (_canvasGroup!=null)
			{
				_canvasGroup.alpha = newOpacity;
			}
		}

		protected virtual void UpdateAnimatorStates ()
		{
			if (_animator == null)
			{
				return;
			}
			if (DisabledAnimationParameterName != null)
			{
				_animator.SetBool (DisabledAnimationParameterName, (CurrentState == ButtonStates.Disabled));
			}
			if (PressedAnimationParameterName != null)
			{
				_animator.SetBool (PressedAnimationParameterName, (CurrentState == ButtonStates.ButtonPressed));
			}
			if (IdleAnimationParameterName != null)
			{
				_animator.SetBool (IdleAnimationParameterName, (CurrentState == ButtonStates.Off));
			}
		}

		public virtual void OnSubmit(BaseEventData eventData)
		{
			if (ButtonPressedFirstTime!=null)
			{
				ButtonPressedFirstTime.Invoke();
			}
			if (ButtonReleased!=null)
			{
				ButtonReleased.Invoke ();
			}
        }

        protected virtual float Remap(float x, float A, float B, float C, float D)
        {
            float remappedValue = C + (x - A) / (B - A) * (D - C);
            return remappedValue;
        }
    }
}