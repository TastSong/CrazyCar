// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using UnityEngine;
using UnityEngine.UI;

namespace Ricimi
{
    // This class manages the level scene of the demo. It handles the left and right
    // selection buttons that are used to navigate across the available levels and their
    // associated animations.
    public class LevelScene : MonoBehaviour
    {
        public GameObject prevLevelButton;
        public GameObject nextLevelButton;

        public GameObject levelGroup;

        public Text levelText;

        private const int numLevelIndexes = 3;

        private int m_currentLevelIndex = 0;

        private Animator m_animator;

        private void Awake()
        {
            m_animator = levelGroup.GetComponent<Animator>();
        }

        public void ShowPreviousLevels()
        {
            --m_currentLevelIndex;
            if (m_currentLevelIndex < 0)
                m_currentLevelIndex = 0;

            SetLevelText(m_currentLevelIndex + 1);
            switch (m_currentLevelIndex)
            {
                case 0:
                    if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName("Animation4"))
                        m_animator.Play("Animation4");
                    DisablePrevLevelButton();
                    break;

                case 1:
                    if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName("Animation3"))
                        m_animator.Play("Animation3");
                    EnablePrevLevelButton();
                    EnableNextLevelButton();
                    break;

                default:
                    break;
            }
        }

        public void ShowNextLevels()
        {
            ++m_currentLevelIndex;
            if (m_currentLevelIndex == numLevelIndexes)
                m_currentLevelIndex = numLevelIndexes - 1;

            SetLevelText(m_currentLevelIndex + 1);
            switch (m_currentLevelIndex)
            {
                case 1:
                    if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName("Animation1"))
                        m_animator.Play("Animation1");
                    EnablePrevLevelButton();
                    EnableNextLevelButton();
                    break;

                case 2:
                    if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName("Animation2"))
                        m_animator.Play("Animation2");
                    DisableNextLevelButton();
                    break;

                default:
                    break;
            }
        }

        public void EnablePrevLevelButton()
        {
            var image = prevLevelButton.GetComponentsInChildren<Image>()[1];
            var newColor = image.color;
            newColor.a = 1.0f;
            image.color = newColor;

            var shadow = prevLevelButton.GetComponentsInChildren<Image>()[0];
            var newShadowColor = shadow.color;
            newShadowColor.a = 1.0f;
            shadow.color = newShadowColor;

            prevLevelButton.GetComponent<AnimatedButton>().interactable = true;
        }

        public void DisablePrevLevelButton()
        {
            var image = prevLevelButton.GetComponentsInChildren<Image>()[1];
            var newColor = image.color;
            newColor.a = 40 / 255.0f;
            image.color = newColor;

            var shadow = prevLevelButton.GetComponentsInChildren<Image>()[0];
            var newShadowColor = shadow.color;
            newShadowColor.a = 0.0f;
            shadow.color = newShadowColor;

            prevLevelButton.GetComponent<AnimatedButton>().interactable = false;
        }

        public void EnableNextLevelButton()
        {
            var image = nextLevelButton.GetComponentsInChildren<Image>()[1];
            var newColor = image.color;
            newColor.a = 1.0f;
            image.color = newColor;

            var shadow = nextLevelButton.GetComponentsInChildren<Image>()[0];
            var newShadowColor = shadow.color;
            newShadowColor.a = 1.0f;
            shadow.color = newShadowColor;

            nextLevelButton.GetComponent<AnimatedButton>().interactable = true;
        }

        public void DisableNextLevelButton()
        {
            var image = nextLevelButton.GetComponentsInChildren<Image>()[1];
            var newColor = image.color;
            newColor.a = 40 / 255.0f;
            image.color = newColor;

            var shadow = nextLevelButton.GetComponentsInChildren<Image>()[0];
            var newShadowColor = shadow.color;
            newShadowColor.a = 0.0f;
            shadow.color = newShadowColor;

            nextLevelButton.GetComponent<AnimatedButton>().interactable = false;
        }

        private void SetLevelText(int level)
        {
            levelText.text = level.ToString() + "/3";
        }
    }
}
