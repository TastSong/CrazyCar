using UnityEngine;
using System.Collections;
using System;
using UnityEngine.UI;

namespace MoreMountains.NiceVibrations
{	
	/// <summary>
	/// A class to add to an Image or SpriteRenderer to have it act like a button with a different sprite for on and off states
	/// </summary>
	public class MMSpriteReplace : MonoBehaviour 
	{

        [Header("Sprites")]
       
        /// the sprite to use when in the "on" state
        public Sprite OnSprite;
		/// the sprite to use when in the "off" state
		public Sprite OffSprite;

        [Header("Start settings")]
		/// if this is true, the button will start if "on" state
		public bool StartsOn = true;
        
        /// the current state of the button
        public bool CurrentValue { get { return (_image.sprite == OnSprite); } }
        
        protected Image _image;
        protected SpriteRenderer _spriteRenderer;
		protected MMTouchButton _mmTouchButton;

		/// <summary>
		/// On Start we initialize our button
		/// </summary>
		protected virtual void Start()
		{
			Initialization ();
		}

		/// <summary>
		/// On init, we grab our image component, and set our sprite in its initial state
		/// </summary>
		protected virtual void Initialization()
		{
            // grabs components
			_image = GetComponent<Image> ();
            _spriteRenderer = GetComponent<SpriteRenderer>();

            // grabs button
            _mmTouchButton = GetComponent<MMTouchButton> ();
			if (_mmTouchButton != null)
			{
				_mmTouchButton.ReturnToInitialSpriteAutomatically = false;
			}

            // handles start
			if ((OnSprite == null) || (OffSprite == null))
            {
                return;
            }

            if (_image != null)
            {
                if (StartsOn)
                {
                    _image.sprite = OnSprite;
                }
                else
                {
                    _image.sprite = OffSprite;
                }
            }

            if (_spriteRenderer != null)
            {
                if (StartsOn)
                {
                    _spriteRenderer.sprite = OnSprite;
                }
                else
                {
                    _spriteRenderer.sprite = OffSprite;
                }
            }			
		}

		/// <summary>
		/// A public method to change the sprite 
		/// </summary>
		public virtual void Swap()
		{
            if (_image != null)
            {
                if (_image.sprite != OnSprite)
                {
                    SwitchToOnSprite();
                }
                else
                {
                    SwitchToOffSprite();
                }
            }

            if (_spriteRenderer != null)
            {
                if (_spriteRenderer.sprite != OnSprite)
                {
                    SwitchToOnSprite();
                }
                else
                {
                    SwitchToOffSprite();
                }
            }			
		}

		/// <summary>
		/// a public method to switch to off sprite directly
		/// </summary>
		public virtual void SwitchToOffSprite()
		{
			if ((_image == null) && (_spriteRenderer == null))
            {
                return;
            }
			if (OffSprite == null)
            {
                return;
            }

			SpriteOff ();
		}

		/// <summary>
		/// sets the image's sprite to off
		/// </summary>
		protected virtual void SpriteOff()
		{
            if (_image != null)
            {
                _image.sprite = OffSprite;
            }
            if (_spriteRenderer != null)
            {
                _spriteRenderer.sprite = OffSprite;
            }			
		}

		/// <summary>
		/// a public method to switch to on sprite directly
		/// </summary>
		public virtual void SwitchToOnSprite()
        {
            if ((_image == null) && (_spriteRenderer == null))
            {
                return;
            }
            if (OnSprite == null)
            {
                return;
            }

			SpriteOn ();
		}	

		/// <summary>
		/// sets the image's sprite to on
		/// </summary>
		protected virtual void SpriteOn()
		{
			
            if (_image != null)
            {
                _image.sprite = OnSprite;
            }
            if (_spriteRenderer != null)
            {
                _spriteRenderer.sprite = OnSprite;
            }
        }
	}
}
