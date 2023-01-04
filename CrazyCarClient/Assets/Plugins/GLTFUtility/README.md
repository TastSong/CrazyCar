[![Discord](https://img.shields.io/discord/361769369404964864.svg)](https://discord.gg/qgPrHv4)
[![GitHub issues](https://img.shields.io/github/issues/Siccity/GLTFUtility.svg)](https://github.com/Siccity/GLTFUtility/issues)
[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/Siccity/GLTFUtility/master/LICENSE.md)

## GLTFUtility
Allows you to import and export glTF files during runtime and in editor.
glTF is a new opensource 3d model transmission format which supports everything you'll ever need from a format in Unity.
[Read more about glTF here](https://www.khronos.org/gltf/)

![2019-04-01_00-46-27](https://user-images.githubusercontent.com/6402525/55296304-b2aa5880-5417-11e9-89a8-78ab540dc126.gif)
![image](https://user-images.githubusercontent.com/6402525/55296353-7297a580-5418-11e9-8e76-5078680ee0d3.png)
![image](https://user-images.githubusercontent.com/6402525/55296436-bd65ed00-5419-11e9-9723-31225b99450b.png)


### What makes GLTFUtility different?
Focusing on simplicity and ease of use, GLTFUtility aims to be an import-and-forget solution, keeping consistency with built-in functionality.

### Installation
<details><summary>Using Unity Package Manager (<a href="https://docs.unity3d.com/Manual/upm-git.html">Help</a>)</summary>

1. `"com.siccity.gltfutility": "https://github.com/siccity/gltfutility.git"`
</details>
<details><summary>Using git</summary>

1. Get Newtonsoft.JSON from one of these sources
    * Official upm package: `"com.unity.nuget.newtonsoft-json": "2.0.0-preview"`,
    * Unofficial git repo: https://github.com/jilleJr/Newtonsoft.Json-for-Unity
2. Clone GLTFUtility by itself or as a submodule
    * Clone into your assets folder `git clone git@github.com:Siccity/GLTFUtility.git`
    * Add repo as submodule `git submodule add git@github.com:Siccity/GLTFUtility.git Assets/Submodules/GLTFUtility`
</details>
<details><summary>Manual download</summary>

1. Get [Newtonsoft.JSON](https://assetstore.unity.com/packages/tools/input-management/json-net-for-unity-11347) from the asset store
2. Download [GLTFUtility-master.zip](https://github.com/Siccity/GLTFUtility/archive/master.zip) and extract to your project assets
</details>

### Features
*System*
- [x] Editor import
- [ ] Editor export
- [x] Runtime import API
- [ ] Runtime export API
- [x] GLTF format
- [x] GLB format
- [x] Multithreading
- [x] URP [#75](https://github.com/Siccity/GLTFUtility/issues/75)
- [ ] HDRP [#73](https://github.com/Siccity/GLTFUtility/issues/73)
- [ ] LWRP

*Spec*
- [x] Static mesh (with submeshes)
- [x] UVs (up to 8 channels)
- [x] Normals
- [x] Tangents
- [x] Vertex colors
- [x] Materials (metallic/specular, opaque/mask/blend)
- [x] Textures (embedded/external)
- [x] Remote textures (during async only)
- [x] Rig
- [ ] Avatar/Mask [#70](https://github.com/Siccity/GLTFUtility/issues/70)
- [x] Animations (multiple)
- [x] Morph targets (with experimental names)
- [x] Cameras

*Extensions*
- [x] KHR_texture_transform (partial support)
- [x] KHR_materials_pbrSpecularGlossiness 
- [ ] KHR_lights_punctual [#25](https://github.com/Siccity/GLTFUtility/issues/25)
- [x] KHR_draco_mesh_compression [#27](https://github.com/Siccity/GLTFUtility/issues/27)

### Known issues
* `ArgumentNullException: Value cannot be null` in build but not in editor.
  * This is most likely due to shaders being stripped from the build. To fix this, add the GLTFUtility shaders to the Always Included Shaders list in Graphic Settings.

### Runtime import API
```cs
// Single thread
using Siccity.GLTFUtility;

void ImportGLTF(string filepath) {
   GameObject result = Importer.LoadFromFile(filepath);
}
```
```cs
// Multithreaded
using Siccity.GLTFUtility;

void ImportGLTFAsync(string filepath) {
   Importer.ImportGLTFAsync(filepath, new ImportSettings(), OnFinishAsync);
}

void OnFinishAsync(GameObject result) {
   Debug.Log("Finished importing " + result.name);
}
```
