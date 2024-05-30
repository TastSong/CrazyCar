using UnityEngine;
using System.Collections;

namespace StatusIndicators.Effects {
  public class FixedRotation : MonoBehaviour {
    public Vector3 Rotation;

    void LateUpdate() {
      transform.eulerAngles = Rotation;
    }
  }
}