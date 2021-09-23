using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(AccessoryChanger))]
public class AccessoryEditor : Editor {

    public string[] carTypes = new string[] {
        "frame",
        "wheel_fl",
        "wheel_fr",
        "wheel_bl",
        "wheel_br"
    };
  
    public string[] types = new string[] {
        EquipManager.CAR
    };

    public Renderer rend;

    bool validCarResourceParts(AccessoryChanger res) {
        foreach (var key in carTypes) {
            if (!res.renders.ContainsKey(key)) {
                return false;
            }
        }
        return true;
    }

    public override void OnInspectorGUI() {
        var res = target as AccessoryChanger;
        base.OnInspectorGUI();

        EditorGUILayout.LabelField("Resource", EditorStyles.boldLabel);


        int selected = 2;
        for (int i = 0; i < types.Length; i += 1) {
            if (res.type == types[i]) {
                selected = i;
                break;
            }
        }
        int idx = EditorGUILayout.Popup("Type", selected, types);
        res.type = types[idx];

        if (res.type == EquipManager.CAR) {
            if (res.renders.Count != carTypes.Length || !validCarResourceParts(res)) {
                res.renders = new Dictionary<string, Renderer>(carTypes.Length);
                foreach (var key in carTypes) {
                    res.renders[key] = null;
                }
            }

            foreach (var key in carTypes) {
                res.renders[key] = EditorGUILayout.ObjectField(key, res.renders[key], typeof(Renderer), true) as Renderer;
            }
        }
    }
}
