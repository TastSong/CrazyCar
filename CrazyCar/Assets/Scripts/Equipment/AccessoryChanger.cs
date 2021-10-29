using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Utils;
using System;

[Serializable]
class _DicItemRender {
    public string key;
    public Renderer value;
}

public class AccessoryChanger : MonoBehaviour, ISerializationCallbackReceiver {
    static int _templeCount;
    [SerializeField] List<_DicItemRender> _renders = new List<_DicItemRender>();

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
    }

    #endregion

    [HideInInspector]
    public string type;  

    public string rid;
    public string eid;

    public Dictionary<string, Renderer> renders = new Dictionary<string, Renderer>();
    Dictionary<string, MeshFilter> _filters;
    public Dictionary<string, MeshFilter> filters {
        get {
            if (_filters == null) {
                _filters = new Dictionary<string, MeshFilter>();
                foreach (var kv in renders) {
                    var f = kv.Value.GetComponent<MeshFilter>();
                    if (f != null) {
                        _filters[kv.Key] = f;
                    }
                }
            }
            return _filters;
        }
    }
    Dictionary<string, SkinnedMeshRenderer> _skinFilters;
    public Dictionary<string, SkinnedMeshRenderer> skinFilters {
        get {
            if (_skinFilters == null) {
                _skinFilters = new Dictionary<string, SkinnedMeshRenderer>();
                foreach (var kv in renders) {
                    var f = kv.Value.GetComponent<SkinnedMeshRenderer>();
                    if (f != null) {
                        _skinFilters[kv.Key] = f;
                    }
                }
            }
            return _skinFilters;
        }
    }

    public Animator anim; // if null, no need to change animation..

    // using the equipment id the get the target Equipment
    // may be cached in Resource Manager? or re-load
    EquipResource GetPartFromResource(string rid) {
        return GameController.manager.resourceManager.GetEquipResource(rid);
    }

    public void _SetResource(EquipResource r) {
        // Skip Invalid Suite
        if (r == null) {
            return;
        }
        foreach (var item in renders) {
            var key = item.Key;
            var render = item.Value;
            //render.sharedMaterial = r.mats[key];
            var renderInResource = r.renders[key];
            render.sharedMaterials = renderInResource.sharedMaterials;
        }
        foreach (var item in filters) {
            var key = item.Key;
            var filter = item.Value;
            if (r.meshes.ContainsKey(key)) {
                filter.sharedMesh = r.meshes[key];
            }
        }
        foreach (var item in skinFilters) {
            var key = item.Key;
            var skin = item.Value;
            if (r.meshes.ContainsKey(key)) {
                skin.sharedMesh = r.meshes[key];
            }
        }

        if (anim != null && r.animation != null) {
            anim.runtimeAnimatorController = r.animation;
        }

    }

    public void SetGear(string eid, string rid) {
        if (eid == null || rid == null || (eid == "" && rid == "")) {
            return;
        }
        this.eid = eid;

        if (this.rid == rid) {
            return;
        }
        this.rid = rid;
        EquipResource r = GetPartFromResource(rid);
        _SetResource(r);
    }
}
