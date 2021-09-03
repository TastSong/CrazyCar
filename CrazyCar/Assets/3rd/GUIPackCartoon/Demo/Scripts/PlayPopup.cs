// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using UnityEngine;
using UnityEngine.UI;

namespace Ricimi
{
    // Specialized behavior for the popup that opens before selecting a level to play in
    // the demo. It showcases how to create a specialized popup with custom behavior: in this
    // case, one to three stars can be displayed depending on the player score on that particular
    // level.
    public class PlayPopup : Popup
    {
        public Color enabledColor;
        public Color disabledColor;

        public Image leftStarImage;
        public Image middleStarImage;
        public Image rightStarImage;

        public void SetAchievedStars(int starsObtained)
        {
            if (starsObtained == 0)
            {
                leftStarImage.color = disabledColor;
                middleStarImage.color = disabledColor;
                rightStarImage.color = disabledColor;
            }
            else if (starsObtained == 1)
            {
                leftStarImage.color = enabledColor;
                middleStarImage.color = disabledColor;
                rightStarImage.color = disabledColor;
            }
            else if (starsObtained == 2)
            {
                leftStarImage.color = enabledColor;
                middleStarImage.color = enabledColor;
                rightStarImage.color = disabledColor;
            }
            else if (starsObtained == 3)
            {
                leftStarImage.color = enabledColor;
                middleStarImage.color = enabledColor;
                rightStarImage.color = enabledColor;
            }
        }
    }
}
