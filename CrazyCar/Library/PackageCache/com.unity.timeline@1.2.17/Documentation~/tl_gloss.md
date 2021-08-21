# Timeline glossary

This topic provides an alphabetical list of the terminology used throughout the Timeline documentation.

**animatable property**: A property belonging to a GameObject, or belonging to a component added to a GameObject, that can have different values over time.

**animation**: The result of adding two different keys, at two different times, for the same animatable property. 

**animation curve**: The curve drawn between keys set for the same animatable property, at different frames or seconds. The position of the tangents and the selected interpolation mode for each key determines the shape of the animation curve. 

**binding** or **Track binding**: Refers to the link between Timeline Asset tracks and the GameObjects in the scene. When you link a GameObject to a track, the track animates the GameObject. Bindings are stored as part of the Timeline instance.

**blend** and **blend area**: The area where two Animation clips, Audio clips, or Control clips overlap. The overlap creates a transition that is referred to as a **blend**. The duration of the overlap is referred to as the **blend area**. The blend area sets the duration of the transition.

**Blend In curve**: In a blend between two Animation clips, Audio clips, or Control clips, there are two blend curves. The blend curve for the incoming clip is referred to as the **Blend In** curve. 

**Blend Out curve**: In a blend between two Animation clips, Audio clips, or Control clips, there are two blend curves. The blend curve for the out-going clip is referred to as the **Blend Out** curve. 

**clip**: A generic term that refers to any clip within the Clips view of the Timeline window. 

**Clips view**: The area in the Timeline window where you add, position, and manipulate clips. 

**Control/Command**: This term is used when instructing the user to press or hold down the Control key on Windows, or the Command key on Mac. 

**Curves view**: The area in the Timeline window that shows the animation curves for Infinite clips or for Animation clips that have been converted from Infinite clips. The Curves view is similar to [Curves mode](animeditor-AnimationCurves) in the Animation window.

**Gap extrapolation**: How an Animation track approximates animation data in the gaps before and after an Animation clip. 

**field**: A generic term that describes an editable box that the user clicks and types-in a value. A field is also referred to as a **property**.

**incoming clip:** The second clip in a blend between two clips. The first clip, the out-going clip, transitions to the second clip, the **incoming clip**.

**Infinite clip**: A special animation clip that contains basic key animation recorded directly to an Animation track within the Timeline window. An Infinite clip cannot be positioned, trimmed, or split because it does not have a defined duration: it spans the entirety of an Animation track.

**interpolation**: The estimation of values that determine the shape of an animation curve between two keys. 

**interpolation mode**: The interpolation algorithm that draws the animation curve between two keys. The interpolation mode also joins or breaks left and right tangents.

**key**: The value of an animatable property, set at a specific point in time. Setting at least two keys for the same property creates an animation.

**out-going clip**: The first clip in a blend between two clips. The first clip, the **out-going clip**, transitions to the second clip, the incoming clip. 

**Playhead Location field**: The field that expresses the location of the Timeline Playhead in either frames or seconds, depending on the Timeline Settings.

**property**: A generic term for the editable fields, buttons, checkboxes, or menus that comprise a component. An editable field is also referred to as a **field**.

**tangent**: One of two handles that controls the shape of the animation curve before and after a key. Tangents appear when a key is selected in the Curves view, or when a key is selected in the Curve Editor.

**tangent mode**: The selected interpolation mode used by the left tangent, right tangent, or both tangents.

**Timeline** or **Unity's Timeline**: Generic terms that refer to all features, windows, editors, and components related to creating, modifying, or reusing cut-scenes, cinematics, and game-play sequences.

**Timeline Asset**: Refers to the tracks, clips, and recorded animation that comprise a cinematic, cut-scene, game-play sequence, or other effect created with the Timeline window. A Timeline Asset does not include bindings to the GameObjects animated by the Timeline Asset. The bindings to scene GameObjects are stored in the Timeline instance. The Timeline Asset is project-based.

**Timeline window**: The official name of the window where you create, modify, and preview a Timeline instance. Modifications to a Timeline instance also affects the Timeline Asset.

**Timeline instance**: Refers to the link between a Timeline Asset and the GameObjects that the Timeline Asset animates in the scene. You create a Timeline instance by associating a Timeline Asset to a GameObject through a Playable Director component. The Timeline instance is scene-based.

**Timeline Playback Controls**: The row of buttons and fields in the Timeline window that controls playback of the Timeline instance. The Timeline Playback Controls affect the location of the Timeline Playhead.

**Timeline Playback mode**: The mode that previews the Timeline instance in the Timeline window. Timeline Playback mode is a simulation of Play mode. Timeline Playback mode does not support audio playback.

**Timeline Playhead**: The white marker and line that indicates the exact point in time being previewed in the Timeline window.

**Timeline Selector**: The name of the menu in the Timeline window that selects the Timeline instance to be previewed or modified.

**track**: A generic term that refers to any track within the Track list of the Timeline window.

**Track groups**: The term for a series of tracks organized in an expandable and collapse collection of tracks. 

**Track list**: The area in the Timeline window where you add, group, and modify tracks.
