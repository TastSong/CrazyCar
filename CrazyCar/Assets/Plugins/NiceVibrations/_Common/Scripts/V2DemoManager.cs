using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace MoreMountains.NiceVibrations
{
	public class V2DemoManager : MonoBehaviour
    {
        public List<RectTransform> Pages;
        public int CurrentPage = 0;
        public float PageTransitionDuration = 1f;
        public AnimationCurve TransitionCurve;
        public Color ActiveColor;
        public Color InactiveColor;
        public bool SoundActive = true;

        protected Vector3 _position;
        protected List<Pagination> _paginations;
        protected Coroutine _transitionCoroutine;


        protected virtual void Start()
        {
            Initialization();
        }

        protected virtual void Initialization()
        {
            Application.targetFrameRate = 60;
            _paginations = new List<Pagination>();
            foreach (RectTransform page in Pages)
            {
                _paginations.Add(page.GetComponentInChildren<Pagination>());
                page.gameObject.SetActive(false);
            }
            foreach(Pagination pagination in _paginations)
            {
                pagination.InitializePagination(Pages.Count);
                pagination.ActiveColor = ActiveColor;
                pagination.InactiveColor = InactiveColor;
                pagination.SetCurrentPage(Pages.Count, 0);
            }
            Pages[0].gameObject.SetActive(true);
            if (SoundActive)
            {
                AudioListener.volume = 1f;
                SoundActive = true;
            }
            else
            {
                AudioListener.volume = 0f;
                SoundActive = false;
            }

            // uncomment this to add debug logs
            // MMVibrationManager.SetDebugMode(true);
        }

        public virtual void PreviousPage()
        {
            if (CurrentPage > 0)
            {
                CurrentPage--;
                Transition(CurrentPage + 1, CurrentPage, false);
                SetCurrentPage();
            }
        }

        public virtual void NextPage()
        {
            if (CurrentPage < Pages.Count-1)
            {
                CurrentPage++;
                Transition(CurrentPage - 1, CurrentPage, true);
                SetCurrentPage();
            }
        }

        protected virtual void SetCurrentPage()
        {
            foreach (Pagination pagination in _paginations)
            {
                pagination.SetCurrentPage(Pages.Count, CurrentPage);
            }
        }

        protected virtual void Transition(int previous, int next, bool goingRight)
        {
						MMVibrationManager.StopAllHaptics(true);

            if (_transitionCoroutine != null)
            {
                StopCoroutine(_transitionCoroutine);
            }
            _transitionCoroutine = StartCoroutine(TransitionCoroutine(previous, next, goingRight));
        }

        protected virtual IEnumerator TransitionCoroutine(int previous, int next, bool goingRight)
        {
            _position.y = Pages[previous].localPosition.y;
            _position.z = Pages[previous].localPosition.z;

            foreach (RectTransform page in Pages)
            {
                _position.x = 1200f;
                page.localPosition = _position;
            }

            Pages[next].gameObject.SetActive(true);

            float timeSpent = 0f;
            while (timeSpent < PageTransitionDuration)
            {
                if (goingRight)
                {
                    _position.x = Mathf.Lerp(0f, -1200f, TransitionCurve.Evaluate(NiceVibrationsDemoHelpers.Remap(timeSpent, 0f, PageTransitionDuration, 0f, 1f)));
                    Pages[previous].localPosition = _position;
                    _position.x = Mathf.Lerp(1200f, 0f, TransitionCurve.Evaluate(NiceVibrationsDemoHelpers.Remap(timeSpent, 0f, PageTransitionDuration, 0f, 1f)));
                    Pages[next].localPosition = _position;
                }
                else
                {
                    _position.x = Mathf.Lerp(0f, 1200f, TransitionCurve.Evaluate(NiceVibrationsDemoHelpers.Remap(timeSpent, 0f, PageTransitionDuration, 0f, 1f)));
                    Pages[previous].localPosition = _position;
                    _position.x = Mathf.Lerp(-1200f, 0f, TransitionCurve.Evaluate(NiceVibrationsDemoHelpers.Remap(timeSpent, 0f, PageTransitionDuration, 0f, 1f)));
                    Pages[next].localPosition = _position;
                }

                timeSpent += Time.deltaTime;
                yield return null;
            }

            Pages[previous].gameObject.SetActive(false);
        }

        public virtual void TurnHapticsOn()
        {
            MMVibrationManager.SetHapticsActive(true);
            MMVibrationManager.Haptic(HapticTypes.Success, false, true, this);
        }

        public virtual void TurnHapticsOff()
        {
            MMVibrationManager.Haptic(HapticTypes.Warning, false, true, this);
            MMVibrationManager.SetHapticsActive(false);
        }

        public virtual void TurnSoundsOn()
        {
            AudioListener.volume = 1f;
            SoundActive = true;
            MMVibrationManager.Haptic(HapticTypes.Success, false, true, this);
        }

        public virtual void TurnSoundsOff()
        {
            AudioListener.volume = 0f;
            SoundActive = false;
            MMVibrationManager.Haptic(HapticTypes.Warning, false, true, this);
        }
    }
}
