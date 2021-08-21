# Changelog
These are the release notes for the TextMesh Pro UPM package which was first introduced with Unity 2018.1. Please see the following link for the Release Notes for prior versions of TextMesh Pro. http://digitalnativestudios.com/forum/index.php?topic=1363.0

## [2.1.1] - 2020-07-26
## [1.5.1]
## [3.0.1]
### Changes
- Addressed compiler warning related to the new virtual event OnPreRenderText.
- Added one additional layer of missing character search where in the even the missing glyph character \u0000 or space character \u0020 is not available in any font asset or potential fallbacks, the End of Text (ETX) \u0003 will be used instead.
- Input Field Integer or Decimal validation will now take into account the current culture. See [forum post](https://forum.unity.com/threads/currentculture-decimal-separator-in-input-fields.908999/) for details.
- Added Editor only font asset post processor to handle font assets being modified outside of the Unity Editor.
- Fixed potential Array Out of Bounds error that could occur when using &lt;/style&gt; without first using a valid &lt;style&gt;. Case #1263787 and See [forum post](https://forum.unity.com/threads/missingreferenceexception-occurs-on-selecting-a-tmp-dropdown-in-the-hierarchy-after-a-play-occurs.728018/#post-6094317) for details.
- Fixed potential issue when using multiple &lt;font&gt; tag in the same text object where these referencing several font assets derived from the same font file. Since their Default Material all have the same name, this was causing an issue in the Material Reference Manager. See [forum post](https://forum.unity.com/threads/argumentexception-on-v2-1-0-unity-2019-4-4f1-identified-bug.934789/) for details. Case #1264596. 

## [2.1.0] - 2020-06-30
## [1.5.0]
## [3.0.0]
### Changes
- Added support to control if a text object is Maskable and affected by UI Mask components. The new setting is found in the Extra Settings section of the &lt;TextMeshProUGUI&gt; component inspector.
- Fixed potential Null Reference Exception when trying to add characters and / or glyphs to a font asset via scripting and before it has been initialized or ReadFontAssetDefinition() has been called.
- Fixed incorrect preferred width values when using alternative font weight font assets. Case #1255336
- Enabling or disabling the Mesh Renderer of a &lt;TextMeshPro&gt; text object should now also mirror that state on any sub text object renderers as well.
- Fixed &lt;sprite&gt; incorrect position when this sprite is the only character in the text and when the sprite asset face info has not been defined.
- Fixed potential Null Reference Exception related to culling when entering play mode.
- Added OnPreRenderText event delegate to allow potential modification of the text geometry before it is uploaded to the mesh and rendered.
- Fixed missing warning when the requested character is missing from the font asset or any potential fallbacks. Case #1256879
- Fixed potential issue with Underline and StrikeThrough when using alternative typeface. Case #1255336
- Fixed potential errors in the Text StyleSheet Inspector when adding or removing Text Styles after resetting the asset. Case #1254602 
- Fixed text Margin property values not being draggable in the Extra Settings section of the text inspector. Case #1253447
- It will no longer be possible to create Editor Presets for the TMP_FontAsset, TMP_SpriteAsset, TMP_StyleSheet, TMP_ColorGradient and TMP_Settings as these are persistent and runtime assets. Case #1251229

## [2.1.0-preview.14] - 2020-06-08
## [1.5.0-preview.14]
## [3.0.0-preview.14]
### Changes
- Fixed sprite character and sprite glyph scale not being reflected in the text layout. See [forum post](https://forum.unity.com/threads/glyph-scale-dont-change-line-height.898817/) for details.
- Fixed potential null reference exception in the CrossFadeColor or CrossFadeAlpha functions. See [forum post](https://forum.unity.com/threads/version-1-5-0-2-1-0-3-0-0-preview-13-now-available-for-testing.753587/page-4#post-5885075) for details.
- Minor improvements to the Sprite Asset Importer to improve allocations and address potential error encountered when creating multiple sprite assets. 
- TMP GUID Remapping Tool - Removed "UnityEditor.Animations.AnimatorController" from the exclusion search list.
- Fixed potential culling issue when dynamically updating the content of child text objects of RectMask2D components. Case #1253625
- Fixed InvalidOperationException that could occur when changing text Overflow linked components via code. Case #1251283

## [2.1.0-preview.13] - 2020-05-22
## [1.5.0-preview.13]
## [3.0.0-preview.13]
### Changes
- Fixed potential issue where the Font Asset Creator could get stuck in the packing phase of the atlas generation process. See [forum post](https://forum.unity.com/threads/font-asset-creator-stuck-at-packing-glyphs-pass-8.811863/) for details.
- Fixed issue potentially affecting text layout as a result of the width of the RectTransform being incorrectly reported. See [forum post](https://forum.unity.com/threads/textmesh-pro-forcemeshupdate-true-not-working-when-object-inactive.524507/#post-5798515) for details.
- Previously created prefabs containing sub text objects will now have their HideFlags updated to HideFlags.DontSave to be consistent with newly created prefabs whose sub text objects are no longer serialized. Case #1247184 
- Fixed culling issue where lossy scale was not considered in the determination of the bounds of the text geometry.

## [2.1.0-preview.12] - 2020-05-09
## [1.5.0-preview.12]
## [3.0.0-preview.12]
### Changes
- Added synchronization of the RaycastTarget property of the parent &lt;TextMeshProUGUI&gt; with potential child sub text objects. Case #1240784
- Fixed Font Asset Bold Spacing adjustment scaling based on the text object point size instead of current point size. Case #1241132
- Improved text alignment when using RTL in conjunction with character, word and other spacing adjustments.
- Fixed TMP Input Field caret potentially not being visible when reaching the right side of the viewport. See [forum post](https://forum.unity.com/threads/inputfield-bug-2.879244/) for more details.
- Fixed TMP Input Field incorrect text RectTransform horizontal adjustment when using the Backspace key. See [forum post](https://forum.unity.com/threads/inputfield-bug4-delete-and-backspace-bug.879283/) for more details.
- Fixed potential null reference in the TextMeshProUGUI.Cull function when using a workflow that involves enabling / disabling Canvases in the scene.
- Fixed ArgumentOutOfRangeException when using the "Update Sprite Asset" inspector option on a sprite asset that does not contain any sprites. Case #1242936
- Fixed incorrect culling of the text geometry by the RectMask2D component on newly created text objects. Case #1245445
- It is now possible to use the Material Context Menu options to Copy / Paste Material Properties or Atlas Texture originally created for TMP with all other non TMP specific materials. Case #1242671
- Fixed NullReferenceException when setting the Atlas Texture to None in the Debug Settings of the Material Inspector of a text object. Case #1245104 

## [2.1.0-preview.11] - 2020-04-22
## [1.5.0-preview.11]
## [3.0.0-preview.11]
### Changes
- Fixed incorrect culling of text object by RectMask2D component when the parent Canvas Render Mode is set to Screen Space - Camera or World Space. Case #1240595
- Added special handling to ForceMeshUpdate() when the parent Canvas is disabled. 

## [2.1.0-preview.10] - 2020-04-21
## [1.5.0-preview.10]
## [3.0.0-preview.10]
### Changes
- Revised caching of Preferred Width and Height to further reduce the amount of time it has to be recomputed when using a complex structure of Layout components.
- Fixed potential issue when using Text Overflow Ellipsis and Truncate modes when the text contains characters using superscript, subscript or using the &lt;voffset&gt; tag.
- Revised culling of text objects when using a RectMask2D where the bounds of the text geometry instead of the RectTransform define the culling rect.
- Added HDR support to material preset colors.
- Fixed various formatting issues in this ChangeLog.
- Added the ability to define a unicode value for a missing sprite character in the TMP Settings.
- Added support for displaying a missing sprite character when the requested sprite character is not present in the sprite asset or potential fallback(s). This new functionality is only available when trying to reference a sprite by name.
- Sprite Characters will now have a default Unicode value of 0xFFFE (Private NonCharacter) instead of a Unicode value of 0x0 (default unicode value for missing character).  
- Using the sprite asset context menu option "Update Sprite Asset" will now remap sprite characters with unicode value of 0x0 to 0xFFFE in addition to its currently functionality.
- Updating TMP Essential Resources via the "Window - TextMeshPro - Import TMP Essential Resources" menu option will no longer override existing TMP Settings.
- Minor optimization where SDF Scale on some text objects could be unnecessarily updated due to floating point rounding errors in their lossy scale. Case #1230799
- Fixed minor issue where text objects created before importing the required TMP Essential Resources would have no default text.
- Improvements to line breaking for CJK and mixed Latin and CJK characters. See the following [forum post](https://forum.unity.com/threads/tmp-bug.852733/#post-5688274) for more details. 
- Fixed potential NullReferenceException that could occur in the TMP InputField on some platforms if the InputSystem reference is null. Case #1232433
- Added small padding to bitmap character geometry to prevent potential clipping.
- Added optimization to ignore very small RectTransform pivot changes that are usually the result of rounding errors when using Layout Components. Case #1237700
- Sorting Layer ID and Sorting Order properties located in the Extra Settings of &lt;TextMeshPro&gt; text objects will now serialized when creating Editor Presets. Case #1215750 
- TextMeshProUGUI sub text objects will now be set as first sibling of their parent to prevent them from being rendered over other non text object child in the scene hierarchy.
- Fixed text objects becoming visible when set to empty or null as a result of a scale change. Case #1238408
- Fixed useMaxVisibleDescender property now getting set properly via scripting. Case #1218526
- Fixed SortingLayerID and SortingOrder not getting set correctly when multiple &lt;TextMeshPro&gt; objects are selected. Case #1171272
- Fixed default settings getting applied to disabled text objects in the scene hierarchy whose text property was set to null. Case #1151621
- Fixed mouse cursor flickering when hovering the Text Input Box of a text prefab with RTL enabled. Case #1206395

## [2.1.0-preview.8] - 2020-03-14
## [1.5.0-preview.8]
## [3.0.0-preview.8]
### Changes
- Fixed a minor issue where the preferred width of a text object can be incorrect when using multiple font assets, fallbacks and sprites in the same line of text.
- Added Alpha Fade Speed property to the TMP_DropDown inspector.
- Minor improvements to the LogWarning related to missing characters in a font asset or fallback being replaced by a space character.
- Fixed text object geometry not getting clipped when object is outside of RectMask2D.
- Improved search for potential missing character to include the primary font asset and potential fallbacks when the current font asset is not the primary. 
- Ignorable / Synthesized characters in font assets will only be created if they do not exist in the source font file.
- Trying to use Text Overflow Ellipsis mode when no Ellipsis character is available in the primary font asset or potential fallbacks will now issue a warning and switch Text Overflow mode to Truncate. 
- Added &ltcolor=lightblue&gt and &ltcolor=grey&gt to pre-defined rich text tag colors.
- Fixed compatibility issue when using TexturePacker - JSON (Array) mode and the TMP Sprite Asset Importer to create SpriteAssets.
- Simple fix to prevent the underline rich text tag becoming visible in the TMP Input Field when in IME composition mode with Rich Text disabled on the TMP Input Field. This is a temporary fix until a more robust and flexible solution is implemented. Case #1219969
- Sub Text Objects which are created when the text requires the use of a fallback font asset or sprite asset will now use HideFlags.DontSave to prevent them from being save with Prefabs as they are created on demand.
- Fix incorrect material reference when current font asset is not the primary or a fallback that is missing a character which is present in the primary font asset.

## [2.1.0-preview.7] - 2020-03-07
## [1.5.0-preview.7]
## [3.0.0-preview.7]
### Changes
- Reverted recent change to the TMP_SubMeshUI OnDisable() function that could result in a Missing Reference Exception in the GraphicRaycaster.cs script. See the following [forum post](https://forum.unity.com/threads/version-1-5-0-2-1-0-preview-5-now-available-for-testing.753587/page-2#post-5523412).
- Added support for Stadia for Unity 2019.3 or newer.
- Addressed warning that would appear in the console in Unity 2019.3 related to recent Preset API changes. Case #1223257
- Fixed glyph drawing issue in the Font Asset Inspector Glyph Adjustment Table when Multi Atlas Texture is enabled and the glyph is not located in the main atlas texture or at atlasTextures[0].
- Added support for &ltZWSP&gt tag which is internally replaced by a zero width space or \u200B.
- Improved line breaking handling when using &ltNBSP&gt and / or &ltNOBR&gt tags where instead of breaking these line segments per character, they will break at any possible soft breaking space when these segments exceed the width of the text container.
- Improved PreferredHeight calculations and handling when using Text Auto Size.
- Fixed incorrect color being applied to the underline or strikethrough line segments when using <u> and / or <s> tags along with a <color> tag while at the same time applying an Underline or Strikethrough font style on the whole text object.
- Fixed SDF Scale not getting updated when using SetText() with StringBuilder when the lossyScale of the text object changes. Case #1216007
- Added Non Breaking Space \u00A0 and Soft Hyphen \u00AD to list of synthesized characters in the event they are not present in the source font file.
- Fixed stack overflow issue when using TMP_FontAsset.HasCharacter and TMP_FontAsset.HasCharacters function on font assets that have circular fallback references. Case #1222574
- Fixed atlas texture not getting set correctly to IsReadable when switching a static font asset to dynamic in the Generation Settings of the Font Asset Inspector.
- Added check for RectTransform.sizeDelta change when OnRectTransformDimensionsChange() is called by the Canvas system to get around potential rounding error that erroneously trigger this callback when the RectTransform is using Stretch Anchor mode.
- As requested by a few users, TMP_FontAsset.faceInfo setter is now public instead of internal.

## [2.1.0-preview.5] - 2020-02-25
## [1.5.0-preview.5]
## [3.0.0-preview.5]
### Changes
- Revised SetText function formatting options to including ability to specify padding for integral part of the value. Revised format is as follows: {Arg Index:Integral Padding.Decimal Precision} Example: TMP_Text.SetText("Value = {0:000.00}", 10.375f); result in "Value = 010.38".
- Fixed issue where <TextMeshProUGUI> text objects isTextObjectScaleStatic property would be ignored when OnCanvasHierarchyChanged() is called.
- Added a Character, Glyph and Record count to those respective tables in the Font Asset Inspector.
- Fixed potential Null Reference Exception that would occur when using text Overflow Ellipsis mode with a primary font asset that doesn't contain the Ellipsis character. Case #1209771
- Fixed a potential Editor lockup when using text Overflow Page mode. Case #1219055
- Fixed Input Field incorrect caret vertical alignment when using the Midline / Vertical Geometry alignment option.
- Added initial / minimal support for the New Input System. Please use with caution and report any issues.
- Changes to Font Asset Generation Settings via the Font Asset Inspector will now update the existing glyphs and characters for the new settings instead of clearing them.
- Text object InternalUpdate() used to handle potential scale changes of text objects now uses willRenderCanvases event instead of onPreCull. This avoids a potential one frame delay in updating of <TextMeshProUGUI> objects and no impact on <TextMeshPro> objects. Case #1216007

## [2.1.0-preview.4] - 2020-01-31
## [1.5.0-preview.4]
## [3.0.0-preview.4]
### Changes
- Fixed Input Field issue where scrolling events could prevent OnEndEdit event from firing. See [forum post](https://forum.unity.com/threads/mouse-wheel-on-multiline-input-field-with-no-scrollbar-hangs-input-field-stops-event-firing.794607/) for details.
- Improved Input Field handling of Vertical Scrollbar in conjunction with the ResetOnDeActivation property. Using the Vertical Scrollbar no longer triggers OnEndEdit event.
- Fixed MissingReferenceException when deleting a TMP prefab that is part of a nested prefab. Case #1207793
- Improved handling of allocations of newly created text objects with large amount of text. As a result of these revisions, allocations will potentially be reduce by 10X. See #1205923
- Fixed potential Null Reference Exception with the TMP DropDown that could occur when using the experimental Editor "Enter Play Mode" feature. Case #1207915
- Fixed potential issue with the assignment of sub text object materials.
- Add support for hiding the soft keyboard for Switch in the TMP Input Field.
- Fixed incorrect Preferred Height when Word Wrapping is disabled on text objects. See [forum post](https://forum.unity.com/threads/incorrect-wordwrapping-preferredsize-textmespro-2-1-preview-3.812376/) for details.
- Added support for the new Selected state and color to the TMP Input Field. Case #1210496
- Fixed additional instances of TMP Resource Importer window being created when deleting the "TextMesh Pro" folder just after having imported them. Case #1205848
- Added public ITextPreprocessor textPreprocessor; property to allow setting the text preprocessor for a given text component.

## [2.1.0-preview.3] - 2019-12-16
## [1.5.0-preview.3]
### Changes
- Fixed potential issue with TMP Dropdown where calling Show() and Hide() in very short interval could result in additional Blockers. Case #1194114
- Fixed potential issues that could occur when upgrading to version 1.5.0-preview.2 or newer of the TMP package without also updating the TMP Essential Resources in the project.
- Added check and warning when trying to create a font asset whose source font file has "Incl. Font Data" disabled in the Font Import Settings. Case #1198587 and #1198112
- Fixed Ellipsis overflow mode issue when using small caps. Case #1198392
- Fixed potential layout issue when adding a Layout Group to the text object itself. Case #1197614
- Fixed Font Asset Creator issue where too many adjustment records with adjustment value of zero were added to the font asset.
- Added support for Line Separator \u2028 and Paragraph Separator \u2029.
- TMP shaders have been moved from "TextMesh Pro/Resources/Shaders" folder to "TextMesh Pro/Shaders" folder. See the following [post](https://forum.unity.com/threads/version-1-5-0-2-1-0-preview-2-now-available-for-testing.753587/#post-5206853) for details.
- Added new experimental SDF and Mobile SDF Shaders that use Screen Space Derivatives (SSD) where these shaders no longer require SDF Scale to be passed via Vertex Attributes. These shaders have higher performance overhead but are more flexible. This overhead should only be noticeable on mobile platforms.
- Fixed potential text alignment issue where upgrading from package version 1.4.1 to 1.5.0-preview.2 would result in incorrect alignment on prefabs. Case #1198833
- Added \u061C Arabic Letter Mark, \u200E Left-to-Right Mark and \u200F Right-to-Left Mark to list of control and non renderable characters.
- Fixed Missing Reference Exception that would appear when expanding the Extra Settings of a TextMeshPro Preset asset. Case #1201072
- Fixed Missing Reference Exception that would appear when editing the Vertex Color or Color Gradient of a TMP component Preset asset. Case #1201069
- Fixed Inspector layout issue preventing enabling or disabling the Outline, Underlay, Lighting and Glow features when selecting a Preset asset material. Case #1196963
- Revised the Create Material Preset context menu option to issue a warning and ignore materials outside the project. Case #1200109
- Added experimental ITextPreprocessor interface to allow users to create custom components to handle text preprocessing and shaping. This interface includes a PreprocessText(string text) function that is called when the object contains a component that inherits from this interface.
- Added support for Unity Presets in the Editor for both <TextMeshPro> and <TextMeshProUGUI> components. Case #1191793
- Optimization to ensure the TMP Update Manager only rebuilds text objects once per frame regardless of the number of cameras in the scene.

## [2.1.0-preview.2] - 2019-10-30
## [1.5.0-preview.2]
### Changes
- Fixed Input Field issue when Read Only flag is set preventing the initial setting of the text. Also fixed Read Only flag not being respected when using IME input.
- Fixed potential infinite loop when using text overflow mode ScrollRect. See Case #1188867
- Fixed Input Field culling related issue(s) where text would be incorrectly culled. See https://forum.unity.com/threads/version-1-5-0-2-1-0-preview-1-now-available-for-testing.753587/#post-5023700
- Revised handling and referencing of the CanvasRenderer in anticipation of an incoming change to the MaskableGraphic class where it will no longer automatically add a CanvasRenderer to components inheriting from it. As a result, <TextMeshPro> objects will no longer have a CanvasRenderer.
- Fixed potential NRE when using Overflow Truncate mode with sprites. See https://forum.unity.com/threads/tmpro-stackoverflow-caused-by-tmpro-textmeshprougui-generatetextmesh.750398/page-2#post-5042822
- Fixed issue when using font weights in combination of font styles in the editor.
- Fixed for potential incorrect preferred height.
- Improved handling of StyleSheet options to reorder, add or delete styles.
- Fixed Input Field Caret & Selection Highlight potential culling issue when the object was instantiated outside the culling region.
- Fixed potential issue with registration of text objects in the TMP_UpdateManager.
- Optimization to suppress callback to InternalUpdate when parent Canvas is disabled. Case #1189820
- Fixed Fallback material not getting updated correctly when changing Generation Settings on the Fallback Font Asset.
- Fixed a typo in the Font Weight section of the Font Asset Editor.
- Fixed potential ArgumentOutOfRangeException in the Input Field when using Hide Mobile Input and deleting a long string. Case #1162514
- Added "Is Scale Static" option in the Extra Settings to exclude text objects from InternalUpdate callbacks to improve performance when the object's scale is static. This InternalUpdate callback is used to track potential changes to the scale of text objects to update their SDF Scale.
- Added the ability to control culling modes for the TMP Shaders. This new option is available in the Debug section of the Material Inspector. New feature requires updating the TMP Essential Resources. See the following post https://forum.unity.com/threads/not-see-textmeshpro-rendering-from-the-back.767510/#post-5112461.
- Fixed Material Inspector issue when toggling the Record button in the Animation window. Case #1174960
- Improved Line Breaking handling for CJK. This also addresses a few reported issues. Case #1171603
- Added support for &ltNBSP&gt tag which is internally replaced by a non-breaking space or \u00A0.
- Improved performance when retrieving glyph adjustment records when using dynamic font assets.
- Fixed potential Null Reference Exception in the Editor when assigning new font asset to disabled game object when no previous font asset was assigned.

## [2.1.0-preview.1] - 2019-09-30
## [1.5.0-preview.1]
### Changes
- Fixed an issue when using Overflow Ellipsis mode where the Ellipsis character would not be displayed correctly when the preceding character is a sprite.
- Added the ability to define the Resource path for Style Sheets in the TMP Settings.
- TMP Style Sheets can now be assigned to text objects in the Extra Settings section of the text object inspector.
- Added the ability to assign a Style to text objects using the new Text Style property in the text object inspector. A new public property TMP_Text.textStyle was also added.
- Improved Style Sheet editor to allow sorting of styles in the style sheet.
- Improved handling of nested styles.
- Added public TMP_Style GetStyle(string name) to get the potential style by name.
- Revised the ForceMeshUpdate() function as follows:  public void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false).
- Fixed SubMeshUI objects text disappearing when saving a scene.
- Creating Material Presets via the Material Context menu with multi selection will now work as expected and assign the newly created material preset to all selected text objects.
- Fixed minor issue when changing Material Preset in prefab isolation mode with multiple text objects selected where the new material preset would not be assigned to disabled text objects.
- Revised Character, Word, Line and Paragraph spacing adjustments to be in font units (em) where a value of 1 represents 1/100 em.
- Added TMP_Text.onFontAssetRequest and TMP_Text.onSpriteAssetRequest events to allow users to implement custom asset loading when using the &ltfont="Font Asset Name"&gt and &ltsprite="Sprite Asset Name"&gt tags.
- Additional Shader Channels on the Canvas will be set to TexCoord1, Normal and Tangents or Mixed when using TMP Surface Shaders. Otherwise it will be set to TexCoord1 only. Case #1100696
- Added new attribute to the &ltmark&gt tag to allow users to define a padding value for the mark / highlight region. Example: &ltmark color=#FFFF0080 padding="1.0,1.0,0.0,0.0"&gt where padding="Left, Right, Top, Bottom".
- Fixed an issue which could result in out of range exception when referencing sprites contained in fallback sprite assets using unicode values.
- Fixed an issue in the Font Asset Creator where the source font file property of the newly created font asset was not getting set.
- Added .blend files to exclusion asset scan list of the Project GUID Remapping tool.
- Fixed issue where Caret position would be incorrect when using IME. Case #1146626
- Clamped Outline Softness to a value of 0-1 in the TMP Distance Field shader which makes it consistent with other SDF Shaders. Case #1136161
- Text Auto-Sizing Min and Max values are now clamped between 0 and 32767. Case #1067717
- Text Font Size Min and Max values are now clamped between 0 and 32767. Case #1164407
- Rich Text Tag values are now limited to a maximum value of 32767.
- Added Placeholder option to TMP Dropdown. Placeholder text is displayed when selection value is -1. Also added example scene in the TMP Examples & Extras.
- Added the ability to define Face Info metrics per Sprite Assets. This will provide for more consistent scaling of the sprites regardless of the font asset used. Sprite Assets with undefined Face Info will continue to inherit the Face Info metrics of the current font asset.
- Added Update Sprite Asset option in the header of the Sprite Asset inspector. This increases the discoverability of this option already available via the Sprite Asset Context Menu.
- Revised the text auto-sizing handling in regards to maximum iteration threshold which could result in a crash on some Android devices. Case #1141328
- Font Asset Generation Settings are now disabled in the inspector if the Source Font File is missing or if the Atlas Population Mode is set to static.
- Fixed vertical alignment issue when using Overflow Page mode.
- Improved handling of text auto-size line adjustment spacing resulting in fewer iterations and more accurate resulting point size.
- Added support for Layout Elements to the TMP Input Field.
= Fixed text alignment issue with TMP Input Field when using Center alignment on the underlying text component.
- Setting ContentType.Custom on the TMP Input Field will no longer hide the Soft Keyboard. The Soft Keyboard can now be control independently via the shouldHideSoftKeyboard property.
- Added new Font Asset Context Menu option "Force Upgrade To Version 1.1.0" for convenience purposes in case a font asset didn't get upgraded automatically when migrating from version 1.3.0 to 1.4.x or 2.0.x.
- The &ltgradient&gt tag now as an optional attribute "tint=0" or "tint=1" controlling whether or not the gradient will be affect by vertex color. The alpha of the gradient will continue to be affected by the vertex color alpha.
- Added new angle=x attribute to the &lti&gt tag where the value of x define the italic slant angle.
- Since the legacy TextContainer used by TMP has been deprecated, it was removed from the Layout Context Menu options.
- Improved character positioning when using italic text where large angle / slant would potentially result in uneven spacing between normal and italic blocks of text.
- Fixed an issue where &ltmspace&gt and &ltcspace&gt tags would not be handled correctly in conjunction with word wrapping.
- Fixed issue in the TMP_Dropdown.cs that was affecting navigation. Case 1162600. See https://forum.unity.com/threads/huge-bug-missing-a-code-line-since-1-4-0.693421/
- Fixed an issue related to kerning where the glyph adjustment values did not account for the upsampling of the legacy SDF modes like SDF8 / SDF16 and SDF32.
- Made the TMP_Text.text property virtual.
- Fixed Material Preset of fallback materials getting modified when the TMP Settings Match Material Preset option is disabled.
- Added ShaderUtilities.ID_GlowInner to list of material property IDs.
- Fixed potential null reference exception when creating new text objects when no default font asset has been assigned in the TMP Settings and the LiberationSans SDF font asset has been deleted from the project. Case #1161120
- Fixed import TMP Essential Resources button being disabled when importing the TMP Examples & Extras first. Case #1163979
- Fixed potential ArgumentOutOfRangeException when Hide Mobile Input is enabled and deleting the last character in the text. Case #1162514
- Improved handling of manual addition of glyph positional adjustment pairs for both dynamic and static font assets. Case #1165763
- Fixed issue where text in the TMP_InputField would disappear due to incorrect culling. Case #1164096
- Fixed potential IndexOutOfRangeException that could be thrown when using the Pinyin IME interface and typing very fast to enter Chinese text. Case #1164383
- Added support for Vertical Tab \v which inserts a line break but not a paragraph break.
- Added support for Shift Enter in the TMP Input Field which inserts a Vertical Tab in the text in Multi Line mode.
- Fixed text horizontal alignment when lines of text only contain the Ellipsis \u2026 Unicode character. Case #1162685
- Text alignment is now serialized into separate fields for horizontal and vertical alignment and can now be get / set independently via TMP_Text.horizontalAlignment and TMP_Text.verticalAlignment. The TMP_Text.alignment property remains and uses the new serialized fields for horizontal and vertical alignment.
- Improved handling of Soft Hyphens when using Text Auto-Size.
- Fixed Null character being passed to Validate method of the TMP_InputField. Case #1172102
- Fixed an issue where the Preferred Width and Height were not correct when using Tabs.
- The Cull Transparent Mesh flag on TMP_SubMeshUI objects will now mirror the settings on the parent text object's CanvasRenderer.
- Updated Sprite Importer to improve compatibility with Texture Packer Json Array export format.
- Newly created StyleSheets will be pinged in the project tab. Case #1182117
- Added new option in the TMP Settings to control line breaking rules for Hangul to enabled Modern line breaking or traditional line breaking.
- Fixed potential issue related to SDF Scaling when the scale of the text object is negative. See https://forum.unity.com/threads/version-1-4-1-preview-1-with-dynamic-sdf-for-unity-2018-3-now-available.622420/page-5#post-4958240 for details.
- Added validation check for Sprite Data Source file in the Sprite Asset Importer. Case #1186620
- Added warning when using Create - TextMeshPro - Sprite Asset menu when no valid texture is selected. Case #1163982
- Fixed potential cosmetic issue in the text component inspector when using Overflow Linked mode. Case #1177640

## [1.4.1] - 2019-04-12
### Changes
- Improved handling of font asset automatic upgrade to version 1.1.0 which is required to support the new Dynamic SDF system.
- Made release compatible with .Net 3.5 scripting runtime.

## [1.4.0] - 2019-03-07
### Changes
- Same release as 1.4.0-preview.3a.

## [1.4.0-preview.3a] - 2019-02-28
### Changes
- Improved performance of the Project Files GUID Remapping Tool.
- Fixed an issue with the TMP_FontAsset.TryAddCharacters() functions which was resulting in an error when added characters exceeded the capacity of the atlas texture.
- Updated TMP_FontAsset.TryAddCharacters functions to add new overloads returning list of characters that could not be added.
- Added function in OnEnable of FontAsset Editor's to clean up Fallback list to remove any null / empty entries.
- Added support for Stereo rendering to the TMP Distance Field and Mobile Distance Field shaders.

## [1.4.0-preview.2a] - 2019-02-14
### Changes
- Fixed an issue with SDF Scale handling where the text object would not render correctly after the object scale had been set to zero.
- Fixed an issue with the TMP_UpdateManager where text objects were not getting unregistered correctly.
- Any changes to Font Asset Creation Settings' padding, atlas width and / or atlas height will now result in all Material Presets for the given font asset to also be updated.
- Added new section in the TMP Settings related to the new Dynamic Font System.
- Added new property in the Dynamic Font System section to determine if OpenType Font Features will be retrieved from source font files at runtime as new characters are added to font assets. Glyph Adjustment Data (Kerning) is the only feature currently supported.
- Fix an issue where font assets created at runtime were not getting their asset version number set to "1.1.0".
- Improved parsing of the text file used in the Font Asset Creator and "Characters from File" option to handle UTF16 "\u" and UTF32 "\U" escape character sequences.
- Fixed a Null Reference Error (NRE) that could occur when using the &ltfont&gt tag with an invalid font name followed by the &ltsprite&gt tag.
- The Glyph Adjustment Table presentation and internal data structure has been changed to facilitate the future addition of OpenType font features. See https://forum.unity.com/threads/version-1-4-0-preview-with-dynamic-sdf-for-unity-2018-3-now-available.622420/#post-4206595 for more details.
- Fixed an issue with the &ltrotate&gt tag incorrectly affecting character spacing.

## [1.4.0-preview.1] - 2019-01-30
### Changes
- Renamed TMPro_FontUtilities to TMP_FontAssetCommon to more accurately reflect the content of this file.
- Accessing the TextMesh Pro Settings via the new Edit - Settings menu when TMP Essential Resources have not yet been imported in the project will no longer open a new window to provide the options to import these resources.
- Fixed an issue where using int.MaxValue, int.MinValue, float.MaxValue and float.MinValue in conjunction with SetText() would display incorrect numerical values. Case #1078521.
- Added public setter to the TMP Settings' missingGlyphCharacter to allow changing which character will be used for missing characters via scripting.
- Fixed a potential Null Reference Exception related to loading the Default Style Sheet.
- Added compiler conditional to TMP_UpdateManager.cs to address changes to SRP.
- Improved the &ltmargin&gt tag to make it possible to define both left and right margin values. Example: &ltmargin left=10% right=10px&gt.
- Added new menu option to allow the quick creation of a UI Button using TMP. New menu option is located in Create - UI - Button (TextMeshPro).
- Renamed TMP related create menu options.
- Fixed TMP object creation handling when using Prefab isolation mode. Case #1077392
- Fixed another issue related to Prefabs where some serialized properties of the text object would incorrectly show up in the Overrides prefab options. Case #1093101
- Fixed issue where changing the Sorting Layer or Sorting Order of a <TextMeshPro> object would not dirty the scene. Case #1069776
- Fixed a text alignment issue when setting text alignment on disabled text objects. Case #1047771
- Fixed an issue where text object bounds were not set correctly on newly created text objects or in some cases when setting the text to null or string.empty. Case #1093388
- Fixed an issue in the IntToString() function that could result in Index Out Of Bounds error. Case #1102007
- Changed the TMP_InputField IsValidChar function to protected virtual.
- The "Allow Rich Text Editing" property of the TMP_InputField is now set to false by default.
- Added new option to the Sprite Asset context menu to make it easier to update sprite glyphs edited via the Unity Sprite Editor.
- Added new Sharpness slider in the Debug section of the SDF Material inspector.
- Fixed an error that would occur when using the context menu Reset on text component. Case #1044726
- Fixed issue where CharacterInfo.index would be incorrect as a result of using Surrogate Pairs in the text. Case #1037828
- The TMP_EditorPanel and TMP_UiEditorPanel now have their "UseForChildren" flag set to true to enable user / custom inspectors to inherit from them.
- Fixed an issue where rich text tags using pixel (px) or font units (em) were not correctly accounting for orthographic camera mode. This change only affects the normal TMP text component.
- Fixed an inspector issue related to changes to the margin in the TMP Extra Settings panel. Case #1114253
- Added new property to Glyph Adjustment Pairs which determines if Character Spacing Adjustments should affect the given pair.
- Updated the Glyph Adjustment Table where ID now represents the unicode (hex) value for the character instead of its decimal value.
- Added new SetValueWithoutNotify() function to TMP_DropDown and SetTextWithoutNotify() function to TMP_InputField allowing these to be set without triggering OnValueChanged event.
- Geometry buffer deallocation which normally takes place when current allocations exceed those of the new text by more than 256 characters will no longer occur if the new text is set to null or string.empty.
- Fixed a minor issue where the underline SDF scale would be incorrect when the underline text sequence contained normal size characters and ended with a subscript or superscript character.
- Fixed an error that would occur when using the Reset Context menu on a Material using the SDF Surface or Mobile SDF Surface Shaders. Case #1122279
- Resolved a Null Reference Error that would appear when cycling through the text overflow modes. Case #1121624

## [1.3.0] - 2018-08-09
### Changes
- Revamped UI to conform to Unity Human Interface Guidelines.
- Updated the title text on the Font Asset Creator window tab to "Font Asset Creator".
- Using TMP_Text.SetCharArray() with an empty char[] array will now clear the text.
- Made a small improvement to the TMP Input Field when using nested 2d RectMasks.
- Renamed symbol defines used by TMP to append TMP_ in front of the define to avoid potential conflicts with user defines.
- Improved the Project Files GUID Remapping tool to allow specifying a target folder to scan.
- Added the ability to cancel the scanning process used by the Project Files GUID Remapping tool.
- Moved TMP Settings to universal settings window in 2018.3 and above.
- Changing style sheet in the TMP Settings will now be reflected automatically on existing text objects in the editor.
- Added new function TMP_StyleSheet.UpdateStyleSheet() to update the internal reference to which style sheet text objects should be using in conjunction with the style tag.

## [1.2.4] - 2018-06-10
### Changes
- Fixed a minor issue when using Justified and Flush alignment in conjunction with \u00A0.
- The Font Asset creationSettings field is no longer an Editor only serialized field.

## [1.2.3] - 2018-05-29
### Changes
- Added new bitmap shader with support for Custom Font Atlas texture. This shader also includes a new property "Padding" to provide control over the geometry padding to closely fit a modified / custom font atlas texture.
- Fixed an issue with ForceMeshUpdate(bool ignoreActiveState) not being handled correctly.
- Cleaned up memory allocations from repeated use of the Font Asset Creator.
- Sprites are now scaled based on the current font instead of the primary font asset assigned to the text object.
- It is now possible to recall the most recent settings used when creating a font asset in the Font Asset Creator.
- Newly created font assets now contain the settings used when they were last created. This will make the process of updating / regenerating font assets much easier.
- New context menu "Update Font Asset" was added to the Font Asset inspector which will open the Font Asset Creator with the most recently used settings for that font asset.
- New Context Menu "Create Font Asset" was added to the Font inspector panel which will open the Font Asset Creator with this source font file already selected.
- Fixed 3 compiler warnings that would appear when using .Net 4.x.
- Modified the TMP Settings to place the Missing Glyph options in their own section.
- Renamed a symbol used for internal debugging to avoid potential conflicts with other user project defines.
- TMP Sprite Importer "Create Sprite Asset" and "Save Sprite Asset" options are disabled unless a Sprite Data Source, Import Format and Sprite Texture Atlas are provided.
- Improved the performance of the Project Files GUID Remapping tool.
- Users will now be prompted to import the TMP Essential Resources when using the Font Asset Creator if such resources have not already been imported.

## [1.2.2] - 2018-03-28
### Changes
- Calling SetAllDirty() on a TMP text component will now force a regeneration of the text object including re-parsing of the text.
- Fixed potential Null Reference Exception that could occur when assigning a new fallback font asset.
- Removed public from test classes.
- Fixed an issue where using nested links (which doesn't make sense conceptually) would result in an error. Should accidental use of nested links occurs, the last / most nested ends up being used.
- Fixed a potential text alignment issue where an hyphen at the end of a line followed by a new line containing a single word too long to fit the text container would result in miss alignment of the hyphen.
- Updated package license.
- Non-Breaking Space character (0xA0) will now be excluded from word spacing adjustments when using Justified or Flush text alignment.
- Improved handling of Underline, Strikethrough and Mark tag with regards to vertex color and Color tag alpha.
- Improved TMP_FontAsset.HasCharacter(char character, bool searchFallbacks) to include a recursive search of fallbacks as well as TMP Settings fallback list and default font asset.
- The &ltgradient&gt tag will now also apply to sprites provided the sprite tint attribute is set to a value of 1. Ex. &ltsprite="Sprite Asset" index=0 tint=1&gt.
- Updated Font Asset Creator Plugin to allow for cancellation of the font asset generation process.
- Added callback to support the Scriptable Render Pipeline (SRP) with the normal TextMeshPro component.
- Improved handling of some non-breaking space characters which should not be ignored at the end of a line.
- Sprite Asset fallbacks will now be searched when using the &ltsprite&gt tag and referencing a sprite by Unicode or by Name.
- Updated EmojiOne samples from https://www.emojione.com/ and added attribution.
- Removed the 32bit versions of the TMP Plugins used by the Font Asset Creator since the Unity Editor is now only available as 64bit.
- The isTextTruncated property is now serialized.
- Added new event handler to the TMP_TextEventHandler.cs script included in Example 12a to allow tracking of interactions with Sprites.

## [1.2.1] - 2018-02-14
### Changes
- Package is now backwards compatible with Unity 2018.1.
- Renamed Assembly Definitions (.asmdef) to new UPM package conventions.
- Added DisplayName for TMP UPM package.
- Revised Editor and Playmode tests to ignore / skip over the tests if the required resources are not present in the project.
- Revised implementation of Font Asset Creator progress bar to use Unity's EditorGUI.ProgressBar instead of custom texture.
- Fixed an issue where using the material tag in conjunction with fallback font assets was not handled correctly.
- Fixed an issue where changing the fontStyle property in conjunction with using alternative typefaces / font weights would not correctly trigger a regeneration of the text object.

## [1.2.0] - 2018-01-23
### Changes
- Package version # increased to 1.2.0 which is the first release for Unity 2018.2.

## [1.1.0] - 2018-01-23
### Changes
- Package version # increased to 1.1.0 which is the first release for Unity 2018.1.

## [1.0.27] - 2018-01-16
### Changes
- Fixed an issue where setting the TMP_InputField.text property to null would result in an error.
- Fixed issue with Raycast Target state not getting serialized properly when saving / reloading a scene.
- Changed reference to PrefabUtility.GetPrefabParent() to PrefabUtility.GetCorrespondingObjectFromSource() to reflect public API change in 2018.2
- Option to import package essential resources will only be presented to users when accessing a TMP component or the TMP Settings file via the project menu.

## [1.0.26] - 2018-01-10
### Added
- Removed Tizen player references in the TMP_InputField as the Tizen player is no longer supported as of Unity 2018.1.

## [1.0.25] - 2018-01-05
### Added
- Fixed a minor issue with PreferredValues calculation in conjunction with using text auto-sizing.
- Improved Kerning handling where it is now possible to define positional adjustments for the first and second glyph in the pair.
- Renamed Kerning Info Table to Glyph Adjustment Table to better reflect the added functionality of this table.
- Added Search toolbar to the Glyph Adjustment Table.
- Fixed incorrect detection / handling of Asset Serialization mode in the Project Conversion Utility.
- Removed SelectionBase attribute from TMP components.
- Revised TMP Shaders to support the new UNITY_UI_CLIP_RECT shader keyword which can provide a performance improvement of up to 30% on some devices.
- Added TMP_PRESENT define as per the request of several third party asset publishers.

## [1.0.23] - 2017-11-14
### Added
- New menu option added to Import Examples and additional content like Font Assets, Materials Presets, etc for TextMesh Pro. This new menu option is located in "Window -> TextMeshPro -> Import Examples and Extra Content".
- New menu option added to Convert existing project files and assets created with either the Source Code or DLL only version of TextMesh Pro. Please be sure to backup your project before using this option. The new menu option is located in "Window -> TextMeshPro -> Project Files GUID Remapping Tool".
- Added Assembly Definitions for the TMP Runtime and Editor scripts.
- Added support for the UI DirtyLayoutCallback, DirtyVerticesCallback and DirtyMaterialCallback.