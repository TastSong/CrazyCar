using UnityEngine;
using System.Collections;

namespace StatusIndicators.Effects {
  public class LinearDistort : MonoBehaviour {
    public float XSpeed, YSpeed;
    private Material Material;

    void Start() {
      Material = GetComponent<Projector>().material;
    }

    void Update() {
      Material.SetFloat("_OffsetX", Mathf.Repeat(Time.time * XSpeed, 1));
      Material.SetFloat("_OffsetY", Mathf.Repeat(Time.time * YSpeed, 1));
    }
  }
}