using UnityEngine;
using System.Collections;

namespace StatusIndicators.Services {
  public class Normalize {
    public float Portion;
    public float Max;
    public float Factor;
    public float Value;

    public Normalize(float portion, float max) {
      this.Portion = portion;
      this.Max = max;
      this.Factor = Portion / Max;
      this.Value = Mathf.Clamp(Factor, 0, 1f);
    }

    public static float GetValue(float portion, float max) {
      return Mathf.Clamp(portion / max, 0, 1f);
    }
  }
}