# Changelog

All notable changes to this project will be documented in this file.
This project adheres to [Semantic Versioning](http://semver.org/).

## [1.10.0] - 2022.05.24

### Changed
- General refactoring of the package. Avatar creation operations separated into classes.

### Added
- OnFailed, OnProgressChanged and OnCompleted events for AvatarLoader. AvatarLoader with callbacks is now obsolete.
- Vuplex example package. If you own Vuplex, you can use this package to load avatars in VR or standalone builds.
- Ability to clean up the cache of the WebView, which helps you starts RPM from the beginning.
- StopCoroutine method added to CoroutineRunner.

## [1.9.0] - 2022.04.06

### Added

- Context menu for extracting animations from FBX files.

### Fixed

- async loading issue causing mesh explosion

## Changed

- removed legacy post message event listener

## [1.8.0] - 2022.21.03

### Added

- Eye Animation handler play mode update and blink rate field

### Changed

- Animation Target FBX files are removed, animations and animation avatars are mvoed into separete folders
- MipMaps are disabled for avatar textures
- Removed "Wolf3D" from namespace and component names and filenames
- Renamed "Wolf3D Ready Player Me Avatar SDK" folder to "Ready Player Me"

### Fixed

- Partner subdomain save issue
- Partner subdomain forced to return "demo" if set blank

## [1.7.3] - 2021.20.01

### Fixed

- Partner subdomain save issue

## [1.7.2] - 2022.19.01

### Changed

- WebView example close button behaviour update in UI

### Fixed

- Code commenting and typo fixes

### Removed

- Former animation source FBX fiels are removed

## [1.7.1] - 2021.12.20

### Changed

- Editor UI updates
- WebView IOS and Android Platform Dependent Compilation blocks
- Loading avatars if short code url is pasted

## [1.7.0] - 2021.10.08

### Changed

- Layout and styles for editor windows

### Added

- FAQ button to editor windows

## [1.6.0] - 2021.09.02

### Changed

- WebView Plugin updated
- MessageCanvas replaced with MessageCanvas for flexible use.
- WebView is called on a prefab which can be added via create/ui menu.
- WebView example scene updated.

### Added

- OnAvatarImported callback to avatar loader, to receive the gameobject before it is processed.

### Fixed

- File name and typo fixes.

### Removed

- MessageCanvas removed. Unsupported cases are covered by a message panel.
- webview.html is removed.

## [1.5.1] - 2021.06.29

### Added

- Audio Clip support for Voice Handler.

### Changed

- Project version is updated to 2019.4.11f1 LTS.
- Runtime Test scene has URL to an optimized avatar.
- Animation Target files updated with models with basic mesh.
- Animator is moved to root avatar object.
- Avatar Armature and HipBone scale are set to 1.

### Fixed

- Typo fixes and refactoring in general.

## [1.5.0] - 2021.06.14

### Added

- Support for loading avatars from short codes.
- WebView menu window for editing partner subdomain in webview.html

### Changed

- General refactoring.
- RPM website updated to Unity SDK.
- VoiceHandler supports beard and teeth mesh.

### Fixed

- Animations not exporting correctly in the second time.
- WebView IOS permissions issues.
- WebView SSL Issue on Android.
- WebView does not send URL after window is restarted.

## [1.4.3] - 2021.05.27

### Added

- Webview No Internet case covered.

### Fixed

- Asset import order conflict between animation and animation target files fixed.
- Animation Controllers losing animation references fixed.

## [1.4.2] - 2021.05.27

### Added

- Variable caching for Avatar Loader window.
- Reveal Animations Folder button to Avatar Loader window.
- Support for auto assigning animation files avatars during import.

### Updated

- Animation target FBX files for V2 avatars are updated.
- WebView plugin is refactored and code is cleaned up.

### Fixed

- IOS WebView not receiving glb URL.

## Removed

- MacOS support for WebView. Due to working partially.

## [1.4.1] - 2021.05.18

### Updated

- Refactored eye and mouth movement scripts

### Fixed

- Eye blendshape movement for atlassed avatars
- mouth blendshape movement for atlassed avatars

## [1.4.0] - 2021.05.10

### Added

- Unity webview support

### Fixed

- Animation folder name fix for Asset Importer
- Unity 2018 compability fixes
- MountOpen blendshape index issue fix

## [1.3.1] - 2021.04.21

### Added

- Animation target files for V2 avatar rig.
- Fetching avatar metadata.

### Fixed

- GLTFUtility Experimental Asset Importer namespace fix for 2020.1 or newer

## [1.3.0] - 2021.04.12

### Added

- Runtime avatar loading ability

### Changed

- Updated GLTFMesh.cs, changing blendshape range to be from 0-100
- Updated EyeAnimationHandler and VoiceHandler to work with the new blendshape range
- GLTFUtility optimizations for faster loading

## [1.2.0] - 2021.02.08

### Added

- Editor window for RPM SDK for ease of use.
- Blendshape blinking for EyeMovementHandler.cs

### Changed

- AvatarLoader updated.

### Removed

- Avatar.cs script
- Example scene and example scripts

## [1.1.0] - 2021.01.28

### Changed

- AvatarLoader simplified, auto loading animation targets and controllers.
- Avatar script removed.
- Editor time loading for GLB models.

## [1.0.1] - 2020.12.15

### Changed

- Fullbody avatar updates

## [1.0.0] - 2020.10.22

### Added

- Updated GLTF importer
- Initial setup for asset store release

## [0.4.2] - 2020.11.09

### Added

- Mixamo Adaptor for running humanoid avatars on full-body avatars.

### Changed

- Test scene is updated with animation avatar and animators.

## [0.4.1] - 2020.11.09

### Changed

- Avatar parts visibility settings moved into a struct.

## [0.4.0] - 2020.11.09

### Added

- Fullbody avatar support.
- Male and female animation targets.
- Example animation and animators.

## [0.3.3] - 2020.10.05

### Fixed

- Waiting until the whole avatar file is written to user local.

## [0.3.2] - 2020.08.07

### Fixed

- File is not GLB error fixed. Waiting for file to be written to users local.

## [0.3.1] - 2020.08.05

### Fixed

- Blendshape normals issue fixed in GLTFUtility.

## [0.3.0] - 2020.07.30

### Added

- BeardMesh, GlassesMesh, TeethMesh, ShirtMesh fields added to Avatar, access to these assets is enabled.
- Example code for disabling above assets are added to AvatarLoaderExample.cs
- Names added to meshes, textures, animation clips and materials.
- Avatar OnDestroy method is added. Meshes, materials, textures and animation clips are destroyed individually.

### Changed

- HandsObject (Transform) is replaced by HandsMesh (SkinnedMeshRenderer).
- GLTFUtility updated from base master branch. Texture mipmaps disabled.

### Fixed

- VoiceHandler duplicate AudioSource upon avatar duplication.

## [0.2.0] - 2020.07.17

### Added

- HandObject field to Avatar, to access avatar hands.
- Example code for disabling avatar hands.

## [0.1.3] - 2020.05.26

### Changed

- Android and IOS permission checks for voice handler component.
- GLB/GLTF legacy animation support in import settings.

## [0.1.2] - 2020.05.12

### Changed

- Documentation update.
- Test scene update.

### Removed

- Avatar URL check and exception removed.

## [0.1.1] - 2020.05.08

### Changed

- Documentation update.

## [0.1.0] - 2020.05.08 - Initial Release

### Added

- AvatarLoader component, loading glb model avatar from url.
- VoiceHandler component for simple voice to jaw movement.
- EyeRotator component for less static avatar look.
- Example scene.
