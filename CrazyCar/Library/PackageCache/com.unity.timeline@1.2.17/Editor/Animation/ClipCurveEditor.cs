using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.Timeline;
using UnityEngine;
using UnityEngine.Timeline;

namespace UnityEditor
{
    class ClipCurveEditor
    {
        internal readonly CurveEditor m_CurveEditor;
        static readonly CurveEditorSettings s_CurveEditorSettings = new CurveEditorSettings
        {
            hSlider = false,
            vSlider = false,
            hRangeLocked = false,
            vRangeLocked = false,
            scaleWithWindow = true,
            hRangeMin = 0.0f,
            showAxisLabels = true,
            allowDeleteLastKeyInCurve = true,
            rectangleToolFlags = CurveEditorSettings.RectangleToolFlags.MiniRectangleTool
        };

        static readonly float s_GridLabelWidth = 40.0f;

        readonly BindingSelector m_BindingHierarchy;
        public BindingSelector bindingHierarchy
        {
            get { return m_BindingHierarchy; }
        }

        public Rect shownAreaInsideMargins
        {
            get { return m_CurveEditor != null ? m_CurveEditor.shownAreaInsideMargins : new Rect(1, 1, 1, 1); }
        }

        Vector2 m_ScrollPosition = Vector2.zero;

        readonly CurveDataSource m_DataSource;

        float m_LastFrameRate = 30.0f;
        int m_LastClipVersion = -1;
        int m_LastCurveCount = -1;
        TrackViewModelData m_ViewModel;
        bool m_ShouldRestoreShownArea;

        bool isNewSelection
        {
            get
            {
                if (m_ViewModel == null || m_DataSource == null)
                    return true;

                return m_ViewModel.lastInlineCurveDataID != m_DataSource.id;
            }
        }

        internal CurveEditor curveEditor
        {
            get { return m_CurveEditor; }
        }

        public ClipCurveEditor(CurveDataSource dataSource, TimelineWindow parentWindow, TrackAsset hostTrack)
        {
            m_DataSource = dataSource;

            m_CurveEditor = new CurveEditor(new Rect(0, 0, 1000, 100), new CurveWrapper[0], false);

            s_CurveEditorSettings.vTickStyle = new TickStyle
            {
                tickColor = { color = DirectorStyles.Instance.customSkin.colorInlineCurveVerticalLines },
                distLabel = 20,
                stubs = true
            };

            s_CurveEditorSettings.hTickStyle = new TickStyle
            {
                // hide horizontal lines by giving them a transparent color
                tickColor = { color = new Color(0.0f, 0.0f, 0.0f, 0.0f) },
                distLabel = 0
            };

            m_CurveEditor.settings = s_CurveEditorSettings;

            m_ViewModel = TimelineWindowViewPrefs.GetTrackViewModelData(hostTrack);

            m_ShouldRestoreShownArea = true;
            m_CurveEditor.ignoreScrollWheelUntilClicked = true;
            m_CurveEditor.curvesUpdated = OnCurvesUpdated;

            m_BindingHierarchy = new BindingSelector(parentWindow, m_CurveEditor, m_ViewModel.inlineCurvesState);
        }

        public void SelectAllKeys()
        {
            m_CurveEditor.SelectAll();
        }

        public void FrameClip()
        {
            m_CurveEditor.InvalidateBounds();
            m_CurveEditor.FrameClip(false, true);
        }

        public CurveDataSource dataSource
        {
            get { return m_DataSource; }
        }

        internal void OnCurvesUpdated()
        {
            if (m_DataSource == null)
                return;

            if (m_CurveEditor == null)
                return;

            if (m_CurveEditor.animationCurves.Length == 0)
                return;

            List<CurveWrapper> curvesToUpdate = m_CurveEditor.animationCurves.Where(c => c.changed).ToList();

            // nothing changed, return.
            if (curvesToUpdate.Count == 0)
                return;

            AnimationClip clip = m_DataSource.animationClip;

            // something changed, manage the undo properly.
            Undo.RegisterCompleteObjectUndo(clip, "Edit Clip Curve");

            foreach (CurveWrapper c in curvesToUpdate)
            {
                AnimationUtility.SetEditorCurve(clip, c.binding, c.curve);
                c.changed = false;
            }

            m_DataSource.UpdateCurves(curvesToUpdate);
        }

        public void DrawHeader(Rect headerRect)
        {
            m_BindingHierarchy.InitIfNeeded(headerRect, m_DataSource, isNewSelection);

            try
            {
                GUILayout.BeginArea(headerRect);
                m_ScrollPosition = GUILayout.BeginScrollView(m_ScrollPosition, GUIStyle.none, GUI.skin.verticalScrollbar);
                m_BindingHierarchy.OnGUI(new Rect(0, 0, headerRect.width, headerRect.height));
                GUILayout.EndScrollView();
                GUILayout.EndArea();
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }

        class FrameFormatCurveEditorState : ICurveEditorState
        {
            public TimeArea.TimeFormat timeFormat
            {
                get { return TimeArea.TimeFormat.Frame; }
            }
            public Vector2 timeRange { get { return new Vector2(0, 1); } }
            public bool rippleTime { get { return false; } }
        }

        class UnformattedCurveEditorState : ICurveEditorState
        {
            public TimeArea.TimeFormat timeFormat
            {
                get { return TimeArea.TimeFormat.None; }
            }
            public Vector2 timeRange { get { return new Vector2(0, 1); } }
            public bool rippleTime { get { return false; } }
        }

        void UpdateCurveEditorIfNeeded(WindowState state)
        {
            if ((Event.current.type != EventType.Layout) || (m_DataSource == null) || (m_BindingHierarchy == null) || (m_DataSource.animationClip == null))
                return;

            AnimationClipCurveInfo curveInfo = AnimationClipCurveCache.Instance.GetCurveInfo(m_DataSource.animationClip);
            int version = curveInfo.version;
            if (version != m_LastClipVersion)
            {
                // tree has changed
                if (m_LastCurveCount != curveInfo.curves.Length)
                {
                    m_BindingHierarchy.RefreshTree();
                    m_LastCurveCount = curveInfo.curves.Length;
                }
                else
                {
                    // update just the curves
                    m_BindingHierarchy.RefreshCurves();
                }
                m_LastClipVersion = version;
            }

            if (state.timeInFrames)
                m_CurveEditor.state = new FrameFormatCurveEditorState();
            else
                m_CurveEditor.state = new UnformattedCurveEditorState();

            m_CurveEditor.invSnap = state.referenceSequence.frameRate;
        }

        public void DrawCurveEditor(Rect rect, WindowState state, Vector2 clipRange, bool loop, bool selected)
        {
            SetupMarginsAndRect(rect, state);
            UpdateCurveEditorIfNeeded(state);

            if (m_ShouldRestoreShownArea)
                RestoreShownArea();

            var curveVisibleTimeRange = CalculateCurveVisibleTimeRange(state.timeAreaShownRange, m_DataSource);
            m_CurveEditor.SetShownHRangeInsideMargins(curveVisibleTimeRange.x, curveVisibleTimeRange.y); //align the curve with the clip.

            if (m_LastFrameRate != state.referenceSequence.frameRate)
            {
                m_CurveEditor.hTicks.SetTickModulosForFrameRate(state.referenceSequence.frameRate);
                m_LastFrameRate = state.referenceSequence.frameRate;
            }

            foreach (var cw in m_CurveEditor.animationCurves)
                cw.renderer.SetWrap(WrapMode.Default, loop ? WrapMode.Loop : WrapMode.Default);

            using (new GUIGroupScope(rect))
            {
                var localRect = new Rect(0.0f, 0.0f, rect.width, rect.height);
                var localClipRange = new Vector2(Mathf.Floor(clipRange.x - rect.xMin), Mathf.Ceil(clipRange.y - rect.xMin));
                var curveStartPosX = Mathf.Floor(state.TimeToPixel(m_DataSource.start) - rect.xMin);

                EditorGUI.DrawRect(new Rect(curveStartPosX, 0.0f, 1.0f, rect.height), new Color(1.0f, 1.0f, 1.0f, 0.5f));
                DrawCurveEditorBackground(localRect);

                if (selected)
                {
                    var selectionRect = new Rect(localClipRange.x, 0.0f, localClipRange.y - localClipRange.x, localRect.height);
                    DrawOutline(selectionRect);
                }

                EditorGUI.BeginChangeCheck();
                {
                    var evt = Event.current;
                    if (evt.type == EventType.Layout || evt.type == EventType.Repaint || selected)
                        m_CurveEditor.CurveGUI();
                }
                if (EditorGUI.EndChangeCheck())
                    OnCurvesUpdated();

                DrawOverlay(localRect, localClipRange, DirectorStyles.Instance.customSkin.colorInlineCurveOutOfRangeOverlay);
                DrawGrid(localRect, curveStartPosX);
            }
        }

        static Vector2 CalculateCurveVisibleTimeRange(Vector2 timeAreaShownRange, CurveDataSource curve)
        {
            var curveVisibleTimeRange = new Vector2
            {
                x = Math.Max(0.0f, timeAreaShownRange.x - curve.start),
                y = timeAreaShownRange.y - curve.start
            };
            return curveVisibleTimeRange * curve.timeScale;
        }

        void SetupMarginsAndRect(Rect rect, WindowState state)
        {
            var startX = state.TimeToPixel(m_DataSource.start) - rect.x;
            var timelineWidth = state.timeAreaRect.width;
            m_CurveEditor.rect = new Rect(0.0f, 0.0f, timelineWidth, rect.height);
            m_CurveEditor.leftmargin = Math.Max(startX, 0.0f);
            m_CurveEditor.rightmargin = 0.0f;
            m_CurveEditor.topmargin = m_CurveEditor.bottommargin = CalculateTopMargin(rect.height);
        }

        void RestoreShownArea()
        {
            if (isNewSelection)
                FrameClip();
            else
                m_CurveEditor.shownAreaInsideMargins = m_ViewModel.inlineCurvesShownAreaInsideMargins;
            m_ShouldRestoreShownArea = false;
        }

        static void DrawCurveEditorBackground(Rect rect)
        {
            if (EditorGUIUtility.isProSkin)
                return;

            var animEditorBackgroundRect = Rect.MinMaxRect(0.0f, rect.yMin, rect.xMax, rect.yMax);

            // Curves are not legible in Personal Skin so we need to darken the background a bit.
            EditorGUI.DrawRect(animEditorBackgroundRect, DirectorStyles.Instance.customSkin.colorInlineCurvesBackground);
        }

        static float CalculateTopMargin(float height)
        {
            return Mathf.Clamp(0.15f * height, 10.0f, 40.0f);
        }

        static void DrawOutline(Rect rect, float thickness = 2.0f)
        {
            // Draw top selected lines.
            EditorGUI.DrawRect(new Rect(rect.xMin, rect.yMin, rect.width, thickness), Color.white);

            // Draw bottom selected lines.
            EditorGUI.DrawRect(new Rect(rect.xMin, rect.yMax - thickness, rect.width, thickness), Color.white);

            // Draw Left Selected Lines
            EditorGUI.DrawRect(new Rect(rect.xMin, rect.yMin, thickness, rect.height), Color.white);

            // Draw Right Selected Lines
            EditorGUI.DrawRect(new Rect(rect.xMax - thickness, rect.yMin, thickness, rect.height), Color.white);
        }

        static void DrawOverlay(Rect rect, Vector2 clipRange, Color color)
        {
            var leftSide = new Rect(rect.xMin, rect.yMin, clipRange.x - rect.xMin, rect.height);
            EditorGUI.DrawRect(leftSide, color);

            var rightSide = new Rect(Mathf.Max(0.0f, clipRange.y), rect.yMin, rect.xMax, rect.height);
            EditorGUI.DrawRect(rightSide, color);
        }

        void DrawGrid(Rect rect, float curveXPosition)
        {
            var gridXPos = Mathf.Max(curveXPosition - s_GridLabelWidth, rect.xMin);
            var gridRect = new Rect(gridXPos, rect.y, s_GridLabelWidth, rect.height);
            var originalRect = m_CurveEditor.rect;

            m_CurveEditor.rect = new Rect(0.0f, 0.0f, rect.width, rect.height);
            using (new GUIGroupScope(gridRect))
                m_CurveEditor.GridGUI();
            m_CurveEditor.rect = originalRect;
        }
    }
}
