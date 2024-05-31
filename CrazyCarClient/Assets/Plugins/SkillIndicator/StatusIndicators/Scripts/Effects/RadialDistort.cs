using UnityEngine;
using System.Collections;

namespace StatusIndicators.Effects {
  public class RadialDistort : MonoBehaviour {
    public float Speed;
    private Material Material;

    void Start() {
      Material = GetComponent<Projector>().material;
    }

    void Update() {
      Material.SetFloat("_Offset", Mathf.Repeat(Time.time * Speed, 1));
    }
  }
}