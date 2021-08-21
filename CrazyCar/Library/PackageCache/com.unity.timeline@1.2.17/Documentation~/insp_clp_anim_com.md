# Animation clip common properties

Use the Inspector window to change the common properties of an Animation clip. The common properties of an Animation clip include its name, timing, play speed, blend properties, and extrapolation settings.

![Inspector window when selecting an Animation clip in the Timeline window](images/timeline_inspector_animation_clip_common.png)

_Inspector window when selecting an Animation clip in the Timeline window_

## Display Name

The name of the Animation clip shown in the Timeline window. 

## Clip Timing properties

Use the **Clip Timing** properties to position, change the duration, change the ease-in and ease-out duration, choose the extrapolation mode, and adjust the play speed of the Animation clip. 

Most timing properties are expressed in both seconds (s) and frames (f). When specifying seconds, a **Clip Timing** property accepts decimal values. When specifying frames, a property only accepts integer values. For example, if you attempt to enter 12.5 in a frames (f) field, the Inspector window sets the value to 12 frames.

Depending on the [selected Clip Edit mode](clp_about.md), changing the **Start**, **End**, or **Duration** may blend, ripple, or replace Animation clips on the same track.

|**Property** |**Description** |
|:---|:---|
|**Start**|The frame or time (in seconds) when the clip starts. Changing the Start changes the position of the clip on its track in the Timeline Asset.<br />Changing the Start also affects the End. Changing the Start sets the End to the new Start value plus the Duration.|
|**End**|The frame or time (in seconds) when the clip ends.<br />Changing the End also affects the Start. Changing the End sets the Start to the new End value minus the Duration.|
|**Duration**|The duration of the clip in frames or seconds.<br />Changing the Duration also affects the End. Changing the Duration sets the End to the Start value plus the new Duration.|
|**Ease In Duration**|Sets the number of seconds or frames that it takes for the clip to ease in. If the beginning of the clip overlaps and blends with another clip, the Ease In Duration cannot be edited and instead shows the duration of the blend between clips. See [Blending clips](clp_blend.md).|
|**Ease Out Duration**|Sets the number of seconds or frames that it takes for the clip to ease out. If the end of the clip overlaps and blends with another clip, the Ease Out Duration cannot be edited and instead shows the duration of the blend between clips. In this case, trim or position the clip to change the duration of the blend between clips. See [Blending clips](clp_blend.md).|
|**Clip In**|Sets the offset of when the source clip should start playing. For example, to play the last 10 seconds of a 30 second Animation clip, set Clip In to 20 seconds.|
|**Speed Multiplier**|A multiplier on the playback speed of the clip. This value must be greater than 0. Changing this value changes the duration of the clip.|

## Animation Extrapolation

Use the **Animation Extrapolation** properties to set the gap extrapolation before and after an Animation clip. The term **gap extrapolation** refers to how an Animation track approximates or extends animation data in the gaps before, between, and after the Animation clips on a track. 

There are two properties for [setting the gap extrapolation](clp_gap_extrap.md) between Animation clips. The **Pre-Extrapolate** property only appears for Animation clips. 

|**Property** |**Description** |
|:---|:---|
|**Pre-Extrapolate**|Controls how animation data is approximated in the gap before an Animation clip. The Pre-Extrapolate property affects the easing-in of an Animation clip.|
|**Post-Extrapolate**|Controls how animation data extends in the gap after an Animation clip. The Post-Extrapolate property affects the easing-out of an Animation clip.|


## Blend Curves

Use the **Blend Curves** to customize the transition between the outgoing and incoming Animation clips. See [Blending clips](clp_blend.md) for details on how to blend clips and customize blend curves.

When easing-in or easing-out clips, use the **Blend Curves** to customize the curve that eases-in or eases-out an Animation clip. See [Easing-in and Easing-out clips](clp_ease.md) for details.
