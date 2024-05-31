using System.Collections;
using System.Linq;
using UnityEngine;
using StatusIndicators.Services;

namespace StatusIndicators.Components {
  public class Cone : SpellIndicator {

    // Constants

    public const float CONE_ANIM_SPEED = 0.15f;

    // Fields

    public Projector LBorder, RBorder;

    // Properties

    public override ScalingType Scaling { get { return ScalingType.LengthAndHeight; } }

    [SerializeField]
    [Range(0, 360)]
    private float angle;

    public float Angle {
      get { return angle; }
      set {
        this.angle = value;
        SetAngle(value);
      }
    }

    // Methods

    public override void Update() {
      if (Manager != null) {
				Manager.transform.rotation = Quaternion.LookRotation(FlattenVector(Manager.Get3DPosition()) - Manager.transform.position);
      }
    }

    public override void OnValueChanged() {
      base.OnValueChanged();
      SetAngle(angle);
    }

    public override void OnShow() {
      base.OnShow();
      StartCoroutine(FadeIn());
    }

    private void SetAngle(float angle) {
      SetShaderFloat("_Expand", Normalize.GetValue(angle - 1, 360));
      LBorder.transform.localEulerAngles = new Vector3(0, 0, (angle + 2) / 2);
      RBorder.transform.localEulerAngles = new Vector3(0, 0, (-angle + 2) / 2);
    }

    /// <summary>
    /// Optional animation when Cone is made visible.
    /// </summary>
    private IEnumerator FadeIn() {
      float final = angle;
      float current = 0;

      foreach (Projector p in Projectors)
        p.enabled = true;

      while (current < final) {
        SetAngle(current);
        current += final * CONE_ANIM_SPEED;
        yield return null;
      }
      SetAngle(final);
      yield return null;
    }
  }
}