using UnityEngine;
using System.Collections;

namespace StatusIndicators.Effects {
  public class ProjectorRotate : MonoBehaviour {
    public float RotationSpeed;

    void LateUpdate() {
      transform.eulerAngles = new Vector3(90, Mathf.Repeat(Time.time * RotationSpeed, 360), 0);
    }
  }
}