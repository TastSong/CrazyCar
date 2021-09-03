// Copyright (C) 2015-2021 ricimi - All rights reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement.
// A Copy of the Asset Store EULA is available at http://unity3d.com/company/legal/as_terms.

using System.Collections;
using UnityEngine;

namespace Ricimi
{
    // This class manages the rotation of the example spin wheel in the demo.
    public class SpinWheel : MonoBehaviour
    {
        // This animation curve drives the spin wheel motion.
        public AnimationCurve AnimationCurve;

        private bool m_spinning = false;

        public void Spin()
        {
            if (!m_spinning)
                StartCoroutine(DoSpin());
        }

        private IEnumerator DoSpin()
        {
            m_spinning = true;
            var timer = 0.0f;
            var startAngle = transform.eulerAngles.z;

            var time = 3.0f;
            var maxAngle = 270.0f;

            while (timer < time)
            {
                var angle = AnimationCurve.Evaluate(timer / time) * maxAngle;
                transform.eulerAngles = new Vector3(0.0f, 0.0f, angle + startAngle);
                timer += Time.deltaTime;
                yield return new WaitForEndOfFrame();
            }

            transform.eulerAngles = new Vector3(0.0f, 0.0f, maxAngle + startAngle);
            m_spinning = false;
        }
    }
}
