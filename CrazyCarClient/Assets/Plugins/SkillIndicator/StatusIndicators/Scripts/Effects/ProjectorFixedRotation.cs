using UnityEngine;
using System.Collections;

namespace StatusIndicators.Effects {
  public class ProjectorFixedRotation : MonoBehaviour {
    public float Angle;

    void LateUpdate() {
      transform.eulerAngles = new Vector3(90, Angle, 0);
    }
  }
}