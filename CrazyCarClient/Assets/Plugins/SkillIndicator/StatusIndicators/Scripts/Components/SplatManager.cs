using System.Collections;
using System.Linq;
using UnityEngine;
using StatusIndicators.Services;

namespace StatusIndicators.Components {
  /// <summary>
  /// Apply this to the GameObject which holds all your Splats. Make sure the origin is correctly centered at the base of the Character.
  /// </summary>
  public class SplatManager : MonoBehaviour {
    /// <summary>
    /// Determines whether the cursor should be hidden when a Splat is showing.
    /// </summary>
    public bool HideCursor;

    /// <summary>
    /// Determines which layers projectors should ignore.
    /// </summary>
    public LayerMask ProjectorIgnore = 0;

    /// <summary>
    /// Determines which layers cursor should raycast onto.
    /// </summary>
    public LayerMask MouseRaycast = ~0;

    /// <summary>
    /// Returns all Spell Indicators belonging to the Manager.
    /// </summary>
    public SpellIndicator[] SpellIndicators { get; set; }

    /// <summary>
    /// Returns all Status Indicators belonging to the Manager.
    /// </summary>
    public StatusIndicator[] StatusIndicators { get; set; }

    /// <summary>
    /// Returns all Range Indicators belonging to the Manager.
    /// </summary>
    public RangeIndicator[] RangeIndicators { get; set; }

    /// <summary>
    /// Returns the currently selected Spell Indicator.
    /// </summary>
    public SpellIndicator CurrentSpellIndicator { get; private set; }

    /// <summary>
    /// Returns the currently selected Status Indicator.
    /// </summary>
    public StatusIndicator CurrentStatusIndicator { get; private set; }

    /// <summary>
    /// Returns the currently selected Range Indicator.
    /// </summary>
    public RangeIndicator CurrentRangeIndicator { get; private set; }

    void OnEnable() { Initialize(); }

    private void Initialize() {
      SpellIndicators = GetComponentsInChildren<SpellIndicator>(true);
      StatusIndicators = GetComponentsInChildren<StatusIndicator>(true);
      RangeIndicators = GetComponentsInChildren<RangeIndicator>(true);

      SpellIndicators.ToList().ForEach(x => InitializeSplat(x));
      StatusIndicators.ToList().ForEach(x => InitializeSplat(x));
      RangeIndicators.ToList().ForEach(x => InitializeSplat(x));
    }

    private void InitializeSplat(Splat splat) {
      splat.Manager = this;
      splat.Initialize();
      splat.gameObject.SetActive(false);
      UpdateProjectorIgnoreLayers(splat);
    }

    private void UpdateProjectorIgnoreLayers(Splat splat) {
      splat.Projectors.ToList().ForEach(x => x.ignoreLayers = ProjectorIgnore);
    }

    // This Update method and the "HideCursor" variable can be deleted if you do not need this functionality
    void Update() {
      if (HideCursor) {
        if (CurrentSpellIndicator != null)
          Cursor.visible = false;
        else
          Cursor.visible = true;
      }
    }

    void OnValidate() {
#if UNITY_EDITOR
      GetComponentsInChildren<SpellIndicator>().ToList().ForEach(x => UpdateProjectorIgnoreLayers(x));
      GetComponentsInChildren<StatusIndicator>().ToList().ForEach(x => UpdateProjectorIgnoreLayers(x));
      GetComponentsInChildren<RangeIndicator>().ToList().ForEach(x => UpdateProjectorIgnoreLayers(x));
#endif
    }

    /// <summary>
    /// Position of Current Spell Indicator or Mouse Ray if unavailable
    /// </summary>
    public Vector3 GetSpellCursorPosition() {
      if (CurrentSpellIndicator != null) {
        return CurrentSpellIndicator.transform.position;
      } else {
        return Get3DPosition();
      }
    }

    /// <summary>
    /// Select and make visible the Spell Indicator given by name.
    /// </summary>
    public void SelectSpellIndicator(string splatName) {
      CancelSpellIndicator();
      SpellIndicator indicator = GetSpellIndicator(splatName);

      if (indicator.RangeIndicator != null) {
        indicator.RangeIndicator.gameObject.SetActive(true);
        indicator.RangeIndicator.OnShow();
      }

      indicator.gameObject.SetActive(true);
      indicator.OnShow();
      CurrentSpellIndicator = indicator;
    }

    /// <summary>
    /// Select and make visible the Status Indicator given by name.
    /// </summary>
    public void SelectStatusIndicator(string splatName) {
      CancelStatusIndicator();
      StatusIndicator indicator = GetStatusIndicator(splatName);
      indicator.gameObject.SetActive(true);
      indicator.OnShow();
      CurrentStatusIndicator = indicator;
    }

    /// <summary>
    /// Select and make visible the Range Indicator given by name.
    /// </summary>
    public void SelectRangeIndicator(string splatName) {
      CancelRangeIndicator();
      RangeIndicator indicator = GetRangeIndicator(splatName);

      // If current spell indicator uses same Range indicator then cancel it.
      if (CurrentSpellIndicator != null && CurrentSpellIndicator.RangeIndicator == indicator) {
        CancelSpellIndicator();
      }

      indicator.gameObject.SetActive(true);
      indicator.OnShow();
      CurrentRangeIndicator = indicator;
    }

    /// <summary>
    /// Return the Spell Indicator given by name.
    /// </summary>
    public SpellIndicator GetSpellIndicator(string splatName) {
      return SpellIndicators.Where(x => x.name == splatName).FirstOrDefault();
    }

    /// <summary>
    /// Return the Status Indicator given by name.
    /// </summary>
    public StatusIndicator GetStatusIndicator(string splatName) {
      return StatusIndicators.Where(x => x.name == splatName).FirstOrDefault();
    }

    /// <summary>
    /// Return the Range Indicator given by name.
    /// </summary>
    public RangeIndicator GetRangeIndicator(string splatName) {
      return RangeIndicators.Where(x => x.name == splatName).FirstOrDefault();
    }

    /// <summary>
    /// Hide Spell Indicator
    /// </summary>
    public void CancelSpellIndicator() {
      if (CurrentSpellIndicator != null) {
        if (CurrentSpellIndicator.RangeIndicator != null) {
          CurrentSpellIndicator.RangeIndicator.gameObject.SetActive(false);
        }

        CurrentSpellIndicator.OnHide();
        CurrentSpellIndicator.gameObject.SetActive(false);
        CurrentSpellIndicator = null;
      }
    }

    /// <summary>
    /// Hide Status Indicator
    /// </summary>
    public void CancelStatusIndicator() {
      if (CurrentStatusIndicator != null) {
        CurrentStatusIndicator.OnHide();
        CurrentStatusIndicator.gameObject.SetActive(false);
        CurrentStatusIndicator = null;
      }
    }

    /// <summary>
    /// Hide Range Indicator
    /// </summary>
    public void CancelRangeIndicator() {
      if (CurrentRangeIndicator != null) {
        CurrentRangeIndicator.OnHide();
        CurrentRangeIndicator.gameObject.SetActive(false);
        CurrentRangeIndicator = null;
      }
    }

    /// <summary>
    /// Finds the mouse position from the screen point to the 3D world.
    /// </summary>
    ///
    public float indicatorRange = 5f; // 指示器移动范围
    public float heightOffset = 1.0f; // 指示器相对于玩家的高度偏移
    public Vector3 Get3DPosition() {
#if UNITY_STANDALONE
      RaycastHit hit;
      if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 300.0f, MouseRaycast))
        return hit.point;
      else
        return Vector3.zero;
      
#else
      // Vector2 joystickInput = GameManager.Instance.variableJoystick.Direction;
      // joystickInput = Vector2.ClampMagnitude(joystickInput, 1.0f);
      // // 将这个二维坐标转换为三维坐标， 二维坐标是以摇杆中心为原点的，三维坐标是player的位置为圆心的
      // Vector3 indicatorPosition = new Vector3(joystickInput.x, 0, joystickInput.y) * indicatorRange;
      // indicatorPosition += transform.position;
      // indicatorPosition.y = transform.position.y + heightOffset; // 设置指示器的高度
      // return indicatorPosition;
#endif
      return Vector3.zero;
    }
  }
}