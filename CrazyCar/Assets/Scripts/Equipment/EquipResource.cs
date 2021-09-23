using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using LitJson;
using System;
using System.IO;


public class EquipResource : MonoBehaviour, ISerializationCallbackReceiver {
    static int _templeCount;

    //[HideInInspector]
    [SerializeField] List<_DicItemRender> _renders;

    #region ISerializationCallbackReceiver implementation

    void ISerializationCallbackReceiver.OnBeforeSerialize() {
        if (renders == null) {
            return;
        }

        if (_renders == null) {
            _renders = new List<_DicItemRender>(renders.Count);
        }

        _renders.Clear();
        foreach (var kvp in renders) {
            _DicItemRender it = new _DicItemRender();
            it.key = kvp.Key;
            it.value = kvp.Value;
            _renders.Add(it);
        }
    }

    void ISerializationCallbackReceiver.OnAfterDeserialize() {
        if (_renders == null) {
            _renders = new List<_DicItemRender>(0);
        }
        renders = new Dictionary<string, Renderer>(_renders.Count);
        for (var i = 0; i != _renders.Count; i += 1) {
            var key = _renders[i].key;
            if (renders.ContainsKey(key)) {
                key = _templeCount.ToString();
                _templeCount += 1;
            } else {
                renders[key] = _renders[i].value;
            }
            renders[key] = _renders[i].value;
        }

#if UNITY_EDITOR
        _meshes = null;
        _mats = null;
#endif
    }
    #endregion

    public Dictionary<string, Renderer> renders;

    Dictionary<string, Mesh> _meshes;
    public Dictionary<string, Mesh> meshes {
        get {
            if (_meshes == null) {
                _meshes = new Dictionary<string, Mesh>();
                foreach (var kv in renders) {
                    var f = kv.Value.GetComponent<MeshFilter>();
                    var sf = kv.Value.GetComponent<SkinnedMeshRenderer>();
                    if (f != null) {
                        _meshes[kv.Key] = f.sharedMesh;
                    } else {
                        _meshes[kv.Key] = sf.sharedMesh;
                    }
                }
            }
            return _meshes;
        }
    }

    Dictionary<string, Material> _mats;
    public Dictionary<string, Material> mats {
        get {
            if (_mats == null) {
                _mats = new Dictionary<string, Material>();
                foreach (var kv in renders) {
                    _mats[kv.Key] = kv.Value.sharedMaterial;
                }
            }
            return _mats;
        }
    }
    public Sprite theIcon;
    public new RuntimeAnimatorController animation;

    public string rid;
    //public GameObject fashion;
    [HideInInspector]
    public string type = EquipManager.CAR;
    //public bool hideGlass;
    //public bool useMultipleOffset;
}