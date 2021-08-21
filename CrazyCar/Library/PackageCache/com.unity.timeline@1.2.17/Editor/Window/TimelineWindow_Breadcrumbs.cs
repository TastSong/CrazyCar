using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace UnityEditor.Timeline
{
    partial class TimelineWindow
    {
        List<BreadCrumbTitle> m_BreadCrumbLabels = new List<BreadCrumbTitle>(100);

        static TitleMode GetTitleMode(ISequenceState sequence)
        {
            var prefabStage = UnityEditor.Experimental.SceneManagement.PrefabStageUtility.GetCurrentPrefabStage();
            // Top level
            if (sequence.hostClip == null)
            {
                if (sequence.director != null && prefabStage != null && prefabStage.IsPartOfPrefabContents(sequence.director.gameObject))
                    return TitleMode.Prefab;
                if (sequence.director != null && PrefabUtility.IsPartOfPrefabAsset(sequence.director))
                    return TitleMode.PrefabOutOfContext;
                if (sequence.director != null && !sequence.director.isActiveAndEnabled)
                    return TitleMode.DisabledComponent;
                if (sequence.director != null)
                    return TitleMode.GameObject;
                if (sequence.asset != null)
                    return TitleMode.Asset;
            }
            // Subtimelines only get an error icon
            else if (sequence.director != null && !sequence.director.isActiveAndEnabled && !PrefabUtility.IsPartOfPrefabAsset(sequence.director))
                return TitleMode.DisabledComponent;

            return TitleMode.None;
        }

        void DoBreadcrumbGUI()
        {
            if (state == null)
                return;
            int count = 0;
            foreach (var sequence in state.GetAllSequences())
            {
                BreadCrumbTitle title = new BreadCrumbTitle()
                {
                    name = DisplayNameHelper.GetDisplayName(sequence),
                    mode = GetTitleMode(sequence)
                };
                if (count >= m_BreadCrumbLabels.Count)
                    m_BreadCrumbLabels.Add(title);
                else
                    m_BreadCrumbLabels[count] = title;
                count++;
            }

            if (m_BreadCrumbLabels.Count > count)
                m_BreadCrumbLabels.RemoveRange(count, m_BreadCrumbLabels.Count - count);

            using (new EditorGUI.DisabledScope(currentMode.headerState.breadCrumb == TimelineModeGUIState.Disabled))
            {
                BreadcrumbDrawer.Draw(breadCrumbAreaWidth, m_BreadCrumbLabels, NavigateToBreadcrumbIndex);
            }
        }

        void NavigateToBreadcrumbIndex(int index)
        {
            state.PopSequencesUntilCount(index + 1);
        }

        void DoSequenceSelectorGUI()
        {
            using (new EditorGUI.DisabledScope(currentMode.headerState.sequenceSelector == TimelineModeGUIState.Disabled))
            {
                if (EditorGUILayout.DropdownButton(DirectorStyles.timelineSelectorArrow, FocusType.Passive, DirectorStyles.Instance.sequenceSwitcher, GUILayout.Width(WindowConstants.selectorWidth)))
                    ShowSequenceSelector();
            }
        }

        void ShowSequenceSelector()
        {
            var allDirectors = TimelineUtility.GetDirectorsInSceneUsingAsset(null);

            var formatter = new SequenceMenuNameFormater();
            var namesAndDirectors = new List<ValueTuple<string, PlayableDirector>>();
            foreach (var d in allDirectors)
            {
                if (d.playableAsset is TimelineAsset)
                {
                    var text = formatter.Format(DisplayNameHelper.GetDisplayName(d));
                    namesAndDirectors.Add(new ValueTuple<string, PlayableDirector>(text, d));
                }
            }

            var sequenceMenu = new GenericMenu();
            foreach (var (timelineName, playableDirector) in namesAndDirectors.OrderBy(i => i.Item1))
            {
                var isCurrent = state.masterSequence.director == playableDirector;
                sequenceMenu.AddItem(new GUIContent(timelineName), isCurrent, OnSequenceSelected, playableDirector);
            }

            if (allDirectors.Length == 0)
                sequenceMenu.AddDisabledItem(DirectorStyles.noTimelinesInScene);

            sequenceMenu.DropDown(EditorGUILayout.s_LastRect);
        }

        void OnSequenceSelected(object arg)
        {
            var directorToBindTo = (PlayableDirector)arg;
            if (directorToBindTo)
            {
                // don't just select the object, it may already be selected.
                SetCurrentTimeline(directorToBindTo);
            }
        }
    }
}
