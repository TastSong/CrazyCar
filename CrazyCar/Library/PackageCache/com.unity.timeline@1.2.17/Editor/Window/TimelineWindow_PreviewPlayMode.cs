using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace UnityEditor.Timeline
{
    partial class TimelineWindow
    {
        void OnPreviewPlayModeChanged(bool isPlaying)
        {
            if (EditorApplication.isPlaying)
                return;

            if (isPlaying)
            {
                PreparePreviewPlay();
                EditorApplication.update += OnPreviewPlay;
            }
            else
            {
                EditorApplication.update -= OnPreviewPlay;
            }
        }

        void PreparePreviewPlay()
        {
            if (state == null || state.masterSequence.asset == null || state.masterSequence.director == null)
                return;
            if (state.playRangeEnabled && !state.isJogging)
            {
                EnsurePlayRangeIsRespected();
            }
        }

        internal void OnPreviewPlay()
        {
            if (state == null || state.masterSequence.asset == null || state.masterSequence.director == null)
                return;

            var director = state.masterSequence.director;
            if (director.timeUpdateMode == DirectorUpdateMode.Manual)
            {
                Repaint();
                return;
            }

            if (state.isJogging)
            {
                ApplyJog();
            }
            else if (state.playRangeEnabled)
            {
                EnsurePlayRangeIsRespected();
            }

            if (director.extrapolationMode == DirectorWrapMode.None && director.playableGraph.IsValid() && !state.playRangeEnabled && director.playableGraph.IsDone())
            {
                //reset time if we hit the end of the timeline
                state.masterSequence.time = 0.0;
                state.Pause();
            }

            Repaint();
            AudioMixerWindow.RepaintAudioMixerWindow();
        }

        void ApplyJog()
        {
            state.masterSequence.time = Math.Max(0.0, Math.Min(state.masterSequence.duration, state.masterSequence.time + state.playbackSpeed));
        }

        void EnsurePlayRangeIsRespected()
        {
            var playRangeTime = state.playRange;
            var time = state.masterSequence.time;
            if (Math.Abs(time - playRangeTime.y) < TimeUtility.kFrameRateEpsilon || time > playRangeTime.y || time < playRangeTime.x)
            {
                state.masterSequence.time = playRangeTime.x;
                // case 1215926 : Special case to make the director mode to play if the wrap mode is None.
                // In that mode, the engine stop the graph before we can ensure play range is respected.
                if (!state.playing && state.masterSequence.director.extrapolationMode == DirectorWrapMode.None)
                    state.Play();
            }
        }
    }
}
