# Inserting clips

The Timeline window supports different methods of inserting clips depending on the type of track, where you click, and whether a clip or track is already selected. In the Timeline window, inserting clips refers to adding and making space for a clip without blending or replacing intersecting clips.

To accurately insert a clip, select Ripple mode as the Clip Edit mode, and position the Timeline Playhead to set the insertion point. Select **Add From Animation Clip** from the Track menu for the track where you want to insert the clip. 

![Accurately insert a clip with the Ripple mode (red circle), the Timeline Playhead (green box), and the Add From Animation Clip in the Track menu](images/timeline_clips_view_inserting_before.png)

_Accurately insert a clip with the Ripple mode (red circle), the Timeline Playhead (green box), and the Add From Animation Clip in the Track menu_

In the above example, the Timeline Playhead is the insertion point. You can specify the insertion point using these other methods:

* Right-click within a gap and add a clip with the context menu. The insertion point is where you right-click.
* Drag a Source Asset (animation or audio) to a track in the Clips view. The insertion point is where you stop dragging.

The location of the insertion point determines where the clip is inserted and how it affects the other clips and gaps on the same track:

* If the insertion point intersects a clip, the inserted clip is added at the insertion point. The intersected clip, and all subsequent clips and gaps, are rippled after the inserted clip.
* If the insertion point is within a gap and there is enough space between the insertion point and the next clip, then the inserted clip is added to the gap. The other clips on the track are not affected.
* If the insertion point is within a gap and the inserted clip overlaps the next clip, the inserted clips is added at the insertion point. The next clip, and all subsequent clips and gaps, are rippled to accommodate the inserted clip. 

![For example, inserting a clip at the Timeline Playhead ripples Clip 1B to accommodate the 36 frame Run clip.](images/timeline_clips_view_inserting_after.png)

_For example, inserting a clip at the Timeline Playhead ripples Clip 1B to accommodate the 36 frame Run clip._

