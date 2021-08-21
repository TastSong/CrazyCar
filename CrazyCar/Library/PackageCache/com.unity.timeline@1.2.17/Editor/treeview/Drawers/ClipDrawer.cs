using System;
using UnityEngine.Timeline;
using UnityEngine;
using System.Linq;
using System.Collections.Generic;

namespace UnityEditor.Timeline
{
    enum BlendKind
    {
        None,
        Ease,
        Mix
    }

    enum BlendAngle
    {
        Descending,
        Ascending
    }

    struct IconData
    {
        public enum Side { Left = -1, Right = 1 }

        public Texture2D icon;
        public Color tint;

        public float width { get { return 16; } }
        public float height { get { return 16; } }

        public IconData(Texture2D icon)
        {
            this.icon = icon;
            tint = Color.white;
        }
    }

    class ClipBorder
    {
        public readonly Color color;
        public readonly float thickness;

        ClipBorder(Color color, float thickness)
        {
            this.color = color;
            this.thickness = thickness;
        }

        const float k_ClipSelectionBorder = 1.0f;
        const float k_ClipRecordingBorder = 2.0f;

        public static ClipBorder Recording()
        {
            return new ClipBorder(DirectorStyles.Instance.customSkin.colorRecordingClipOutline, k_ClipRecordingBorder);
        }

        public static ClipBorder Selection()
        {
            return new ClipBorder(Color.white, k_ClipSelectionBorder);
        }

        public static ClipBorder Default()
        {
            return new ClipBorder(DirectorStyles.Instance.customSkin.clipBorderColor, k_ClipSelectionBorder);
        }
    }

    struct ClipBlends
    {
        public readonly BlendKind inKind;
        public readonly Rect inRect;

        public readonly BlendKind outKind;
        public readonly Rect outRect;

        public ClipBlends(BlendKind inKind, Rect inRect, BlendKind outKind, Rect outRect)
        {
            this.inKind = inKind;
            this.inRect = inRect;
            this.outKind = outKind;
            this.outRect = outRect;
        }

        public static readonly ClipBlends kNone = new ClipBlends(BlendKind.None, Rect.zero, BlendKind.None, Rect.zero);
    }

    struct ClipDrawData
    {
        public TimelineClip clip;             // clip being drawn
        public Rect targetRect;               // rectangle to draw to
        public Rect unclippedRect;            // the clip's unclipped rect
        public Rect clippedRect;              // the clip's clipped rect to the visible time area
        public Rect clipCenterSection;        // clip center section
        public string title;                  // clip title
        public bool selected;                 // is the clip selected
        public bool inlineCurvesSelected;     // is the inline curve of the clip selected
        public double localVisibleStartTime;
        public double localVisibleEndTime;
        public IconData[] leftIcons;
        public IconData[] rightIcons;
        public TimelineClip previousClip;
        public bool previousClipSelected;
        public bool supportsLooping;
        public int minLoopIndex;
        public List<Rect> loopRects;
        public ClipBlends clipBlends;
        public ClipDrawOptions ClipDrawOptions;
        public ClipEditor clipEditor;
    }

    static class ClipDrawer
    {
        public static class Styles
        {
            public static readonly Texture2D iconWarn = EditorGUIUtility.LoadIconRequired("console.warnicon.inactive.sml");
            public static readonly string HoldText = LocalizationDatabase.GetLocalizedString("HOLD");
            public static readonly Texture2D s_IconNoRecord = EditorGUIUtility.LoadIcon("console.erroricon.sml");
            public static readonly GUIContent s_ClipNotRecorable = EditorGUIUtility.TrTextContent("", "This clip is not recordable");
            public static readonly GUIContent s_ClipNoRecordInBlend = EditorGUIUtility.TrTextContent("", "Recording in blends in prohibited");
        }

        const float k_ClipSwatchLineThickness = 4.0f;
        const float k_MinClipWidth = 7.0f;
        const float k_ClipInOutMinWidth = 15.0f;
        const float k_ClipLoopsMinWidth = 20.0f;
        const float k_ClipLabelPadding = 6.0f;
        const float k_ClipLabelMinWidth = 10.0f;
        const float k_IconsPadding = 1.0f;
        const float k_ClipInlineWidth = 1.0f;

        static readonly GUIContent s_TitleContent = new GUIContent();
        static readonly IconData[] k_ClipErrorIcons =  { new IconData {icon = Styles.iconWarn, tint = DirectorStyles.kClipErrorColor} };
        static readonly Dictionary<int, string> s_LoopStringCache = new Dictionary<int, string>(100);

        // caches the loopstring to avoid allocation from string concats
        static string GetLoopString(int loopIndex)
        {
            string loopString = null;
            if (!s_LoopStringCache.TryGetValue(loopIndex, out loopString))
            {
                loopString = "L" + loopIndex;
                s_LoopStringCache[loopIndex] = loopString;
            }
            return loopString;
        }

        static void DrawLoops(ClipDrawData drawData)
        {
            if (drawData.loopRects == null || drawData.loopRects.Count == 0)
                return;

            var oldColor = GUI.color;

            int loopIndex = drawData.minLoopIndex;
            for (int l = 0; l < drawData.loopRects.Count; l++)
            {
                Rect theRect = drawData.loopRects[l];
                theRect.x -= drawData.unclippedRect.x;
                theRect.x += 1;
                theRect.width -= 2.0f;
                theRect.y = 5.0f;
                theRect.height -= 4.0f;
                theRect.xMin -= 4f;

                if (theRect.width >= 5f)
                {
                    using (new GUIViewportScope(drawData.clipCenterSection))
                    {
                        GUI.color = new Color(0.0f, 0.0f, 0.0f, 0.2f);
                        GUI.Label(theRect, GUIContent.none, DirectorStyles.Instance.displayBackground);

                        if (theRect.width > 36.0f)
                        {
                            var style = DirectorStyles.Instance.fontClipLoop;
                            GUI.color = new Color(0.0f, 0.0f, 0.0f, 0.3f);
                            var loopContent = new GUIContent(drawData.supportsLooping ? GetLoopString(loopIndex) : Styles.HoldText);
                            GUI.Label(theRect, loopContent, style);
                        }
                    }
                }

                loopIndex++;

                if (!drawData.supportsLooping)
                    break;
            }

            GUI.color = oldColor;
        }

        static void DrawClipBorder(ClipDrawData drawData)
        {
            var animTrack = drawData.clip.parentTrack as AnimationTrack;
            var selectionBorder = ClipBorder.Selection();

            if (TimelineWindow.instance.state.recording && animTrack == null && drawData.clip.parentTrack.IsRecordingToClip(drawData.clip))
            {
                DrawClipSelectionBorder(drawData.clipCenterSection, selectionBorder, drawData.clipBlends);
                return;
            }

            DrawClipDefaultBorder(drawData.clipCenterSection, ClipBorder.Default(), drawData.clipBlends);

            if (drawData.selected)
                DrawClipSelectionBorder(drawData.clipCenterSection, selectionBorder, drawData.clipBlends);

            if (drawData.previousClip != null && drawData.previousClipSelected)
                DrawClipBlendSelectionBorder(drawData.clipCenterSection, selectionBorder, drawData.clipBlends);
        }

        public static void DrawClipSelectionBorder(Rect clipRect, ClipBorder border, ClipBlends blends)
        {
            var thickness = border.thickness;
            var color = border.color;
            var min = clipRect.min;
            var max = clipRect.max;

            //Left line
            if (blends.inKind == BlendKind.None)
                EditorGUI.DrawRect(new Rect(min.x, min.y, thickness, max.y - min.y), color);
            else
                DrawBlendLine(blends.inRect, blends.inKind == BlendKind.Mix ? BlendAngle.Descending : BlendAngle.Ascending, thickness, color);

            //Right line
            if (blends.outKind == BlendKind.None)
                EditorGUI.DrawRect(new Rect(max.x - thickness, min.y, thickness, max.y - min.y), color);
            else
                DrawBlendLine(blends.outRect, BlendAngle.Descending, thickness, color);

            //Top line
            var xTop1 = blends.inKind == BlendKind.Mix ? blends.inRect.xMin : min.x;
            var xTop2 = max.x;
            EditorGUI.DrawRect(new Rect(xTop1, min.y, xTop2 - xTop1, thickness), color);

            //Bottom line
            var xBottom1 = blends.inKind == BlendKind.Ease ? blends.inRect.xMin : min.x;
            var xBottom2 = blends.outKind == BlendKind.None ? max.x : blends.outRect.xMax;
            EditorGUI.DrawRect(new Rect(xBottom1, max.y - thickness, xBottom2 - xBottom1, thickness), color);
        }

        static Vector3[] s_BlendLines = new Vector3[4];
        static void DrawBlendLine(Rect rect, BlendAngle blendAngle, float width, Color color)
        {
            var halfWidth = width / 2.0f;
            Vector2 p0, p1;
            var inverse = 1.0f;
            if (blendAngle == BlendAngle.Descending)
            {
                p0 = rect.min;
                p1 = rect.max;
            }
            else
            {
                p0 = new Vector2(rect.xMax, rect.yMin);
                p1 = new Vector2(rect.xMin, rect.yMax);
                inverse = -1.0f;
            }
            s_BlendLines[0] = new Vector3(p0.x - halfWidth, p0.y + halfWidth * inverse);
            s_BlendLines[1] = new Vector3(p1.x - halfWidth, p1.y + halfWidth * inverse);
            s_BlendLines[2] = new Vector3(p1.x + halfWidth, p1.y - halfWidth * inverse);
            s_BlendLines[3] = new Vector3(p0.x + halfWidth, p0.y - halfWidth * inverse);
            Graphics.DrawPolygonAA(color, s_BlendLines);
        }

        static void DrawClipBlendSelectionBorder(Rect clipRect, ClipBorder border, ClipBlends blends)
        {
            var color = border.color;
            var thickness = border.thickness;
            if (blends.inKind == BlendKind.Mix)
            {
                DrawBlendLine(blends.inRect, BlendAngle.Descending, thickness, color);
                var xBottom1 = blends.inRect.xMin;
                var xBottom2 = blends.inRect.xMax;
                EditorGUI.DrawRect(new Rect(xBottom1, clipRect.max.y - thickness, xBottom2 - xBottom1, thickness), color);
            }
        }

        static void DrawClipDefaultBorder(Rect clipRect, ClipBorder border, ClipBlends blends)
        {
            var color = border.color;
            var thickness = border.thickness;

            // Draw vertical lines at the edges of the clip
            EditorGUI.DrawRect(new Rect(clipRect.xMin, clipRect.y, thickness, clipRect.height), color); //left
            //only draw the right one when no out mix blend
            if (blends.outKind != BlendKind.Mix)
                EditorGUI.DrawRect(new Rect(clipRect.xMax - thickness, clipRect.y, thickness, clipRect.height), color); //right
            //draw a vertical line for the previous clip
            if (blends.inKind == BlendKind.Mix)
                EditorGUI.DrawRect(new Rect(blends.inRect.xMin, blends.inRect.y, thickness, blends.inRect.height), color); //left

            //Draw blend line
            if (blends.inKind == BlendKind.Mix)
                DrawBlendLine(blends.inRect, BlendAngle.Descending, thickness, color);
        }

        static void DrawClipTimescale(Rect targetRect, Rect clippedRect, double timeScale)
        {
            if (timeScale != 1.0)
            {
                const float xOffset = 4.0f;
                const float yOffset = 6.0f;
                var segmentLength = timeScale > 1.0f ? 5.0f : 15.0f;

                // clamp to the visible region to reduce the line count (case 1213189), but adject the start segment to match the visuals of drawing targetRect
                var startX = clippedRect.min.x - ((clippedRect.min.x - targetRect.min.x) % (segmentLength*2));
                var endX = clippedRect.max.x;

                var start = new Vector3(startX + xOffset, targetRect.min.y + yOffset, 0.0f);
                var end = new Vector3(endX - xOffset, targetRect.min.y + yOffset, 0.0f);

                Graphics.DrawDottedLine(start, end, segmentLength, DirectorStyles.Instance.customSkin.colorClipFont);
                Graphics.DrawDottedLine(start + new Vector3(0.0f, 1.0f, 0.0f), end + new Vector3(0.0f, 1.0f, 0.0f), segmentLength, DirectorStyles.Instance.customSkin.colorClipFont);
            }
        }

        static void DrawClipInOut(Rect targetRect, TimelineClip clip)
        {
            var assetDuration = TimelineHelpers.GetClipAssetEndTime(clip);

            bool drawClipOut = assetDuration<double.MaxValue &&
                                             assetDuration - clip.end> TimeUtility.kTimeEpsilon;

            bool drawClipIn = clip.clipIn > 0.0;

            if (!drawClipIn && !drawClipOut)
                return;

            var rect = targetRect;

            if (drawClipOut)
            {
                var icon = DirectorStyles.Instance.clipOut;
                var iconRect = new Rect(rect.xMax - icon.fixedWidth - 2.0f,
                    rect.yMin + (rect.height - icon.fixedHeight) * 0.5f,
                    icon.fixedWidth, icon.fixedHeight);

                GUI.Label(iconRect, GUIContent.none, icon);
            }

            if (drawClipIn)
            {
                var icon = DirectorStyles.Instance.clipIn;
                var iconRect = new Rect(2.0f + rect.xMin,
                    rect.yMin + (rect.height - icon.fixedHeight) * 0.5f,
                    icon.fixedWidth, icon.fixedHeight);

                GUI.Label(iconRect, GUIContent.none, icon);
            }
        }

        static void DrawClipLabel(ClipDrawData data, Rect availableRect, Color color)
        {
            var errorText = data.ClipDrawOptions.errorText;
            var hasError = !string.IsNullOrEmpty(errorText);
            var textColor = hasError ? DirectorStyles.kClipErrorColor : color;
            var tooltip = hasError ? errorText : data.ClipDrawOptions.tooltip;

            if (hasError)
                DrawClipLabel(data.title, availableRect, textColor, k_ClipErrorIcons, null, tooltip);
            else
                DrawClipLabel(data.title, availableRect, textColor, data.leftIcons, data.rightIcons, tooltip);
        }

        static void DrawClipLabel(string title, Rect availableRect, Color color, string errorText = "")
        {
            var hasError = !string.IsNullOrEmpty(errorText);
            var textColor = hasError ? DirectorStyles.kClipErrorColor : color;

            if (hasError)
                DrawClipLabel(title, availableRect, textColor, k_ClipErrorIcons, null, errorText);
            else
                DrawClipLabel(title, availableRect, textColor, null, null, errorText);
        }

        static void DrawClipLabel(string title, Rect availableRect, Color textColor, IconData[] leftIcons, IconData[] rightIcons, string tooltipMessage = "")
        {
            s_TitleContent.text = title;
            var neededTextWidth = DirectorStyles.Instance.fontClip.CalcSize(s_TitleContent).x;
            var neededIconWidthLeft = 0.0f;
            var neededIconWidthRight = 0.0f;

            if (leftIcons != null)
                for (int i = 0, n = leftIcons.Length; i < n; ++i)
                    neededIconWidthLeft += leftIcons[i].width + k_IconsPadding;

            if (rightIcons != null)
                for (int i = 0, n = rightIcons.Length; i < n; ++i)
                    neededIconWidthRight += rightIcons[i].width + k_IconsPadding;

            var neededIconWidth = Mathf.Max(neededIconWidthLeft, neededIconWidthRight);

            // Atomic operation: We either show all icons or no icons at all
            var showIcons = neededTextWidth / 2.0f + neededIconWidth < availableRect.width / 2.0f;

            if (showIcons)
            {
                if (leftIcons != null)
                    DrawClipIcons(leftIcons, IconData.Side.Left, neededTextWidth, availableRect);

                if (rightIcons != null)
                    DrawClipIcons(rightIcons, IconData.Side.Right, neededTextWidth, availableRect);
            }

            if (neededTextWidth > availableRect.width)
                s_TitleContent.text = DirectorStyles.Elipsify(title, availableRect.width, neededTextWidth);

            s_TitleContent.tooltip = tooltipMessage;
            DrawClipName(availableRect, s_TitleContent, textColor);
        }

        static void DrawClipIcons(IconData[] icons, IconData.Side side, float labelWidth, Rect availableRect)
        {
            var halfText = labelWidth / 2.0f;
            var offset = halfText + k_IconsPadding;

            foreach (var iconData in icons)
            {
                offset += iconData.width / 2.0f + k_IconsPadding;

                var iconRect =
                    new Rect(0.0f, 0.0f, iconData.width, iconData.height)
                {
                    center = new Vector2(availableRect.center.x + offset * (int)side, availableRect.center.y)
                };

                DrawIcon(iconRect, iconData.tint, iconData.icon);

                offset += iconData.width / 2.0f;
            }
        }

        static void DrawClipName(Rect rect, GUIContent content, Color textColor)
        {
            Graphics.ShadowLabel(rect, content, DirectorStyles.Instance.fontClip, textColor, Color.black);
        }

        static void DrawIcon(Rect imageRect, Color color, Texture2D icon)
        {
            GUI.DrawTexture(imageRect, icon, ScaleMode.ScaleAndCrop, true, 0, color, 0, 0);
        }

        static void DrawClipBackground(Rect clipCenterSection, bool selected)
        {
            if (Event.current.type != EventType.Repaint)
                return;

            var color = selected ? DirectorStyles.Instance.customSkin.clipSelectedBckg : DirectorStyles.Instance.customSkin.clipBckg;
            EditorGUI.DrawRect(clipCenterSection, color);
        }

        static Vector3[] s_BlendVertices = new Vector3[3];
        static void DrawClipBlends(ClipBlends blends, Color inColor, Color outColor, Color backgroundColor)
        {
            switch (blends.inKind)
            {
                case BlendKind.Ease:
                    //     2
                    //   / |
                    //  /  |
                    // 0---1
                    EditorGUI.DrawRect(blends.inRect, backgroundColor);
                    s_BlendVertices[0] = new Vector3(blends.inRect.xMin, blends.inRect.yMax);
                    s_BlendVertices[1] = new Vector3(blends.inRect.xMax, blends.inRect.yMax);
                    s_BlendVertices[2] = new Vector3(blends.inRect.xMax, blends.inRect.yMin);
                    Graphics.DrawPolygonAA(inColor, s_BlendVertices);
                    break;
                case BlendKind.Mix:
                    // 0---2
                    //  \  |
                    //   \ |
                    //     1
                    s_BlendVertices[0] = new Vector3(blends.inRect.xMin, blends.inRect.yMin);
                    s_BlendVertices[1] = new Vector3(blends.inRect.xMax, blends.inRect.yMax);
                    s_BlendVertices[2] = new Vector3(blends.inRect.xMax, blends.inRect.yMin);
                    Graphics.DrawPolygonAA(inColor, s_BlendVertices);
                    break;
            }

            if (blends.outKind != BlendKind.None)
            {
                if (blends.outKind == BlendKind.Ease)
                    EditorGUI.DrawRect(blends.outRect, backgroundColor);
                // 0
                // | \
                // |  \
                // 1---2
                s_BlendVertices[0] = new Vector3(blends.outRect.xMin, blends.outRect.yMin);
                s_BlendVertices[1] = new Vector3(blends.outRect.xMin, blends.outRect.yMax);
                s_BlendVertices[2] = new Vector3(blends.outRect.xMax, blends.outRect.yMax);
                Graphics.DrawPolygonAA(outColor, s_BlendVertices);
            }
        }

        static void DrawClipSwatch(Rect targetRect, Color swatchColor)
        {
            // Draw Colored Line at the bottom.
            var colorRect = targetRect;
            colorRect.yMin = colorRect.yMax - k_ClipSwatchLineThickness;
            EditorGUI.DrawRect(colorRect, swatchColor);
        }

        public static void DrawSimpleClip(TimelineClip clip, Rect targetRect, ClipBorder border, Color overlay, ClipDrawOptions drawOptions)
        {
            GUI.BeginClip(targetRect);
            var clipRect = new Rect(0.0f, 0.0f, targetRect.width, targetRect.height);

            var orgColor = GUI.color;
            GUI.color = overlay;

            DrawClipBackground(clipRect, false);
            GUI.color = orgColor;

            if (clipRect.width <= k_MinClipWidth)
            {
                clipRect.width = k_MinClipWidth;
            }

            DrawClipSwatch(targetRect, drawOptions.highlightColor * overlay);

            if (targetRect.width >= k_ClipInOutMinWidth)
                DrawClipInOut(clipRect, clip);

            var textRect = clipRect;

            textRect.xMin += k_ClipLabelPadding;
            textRect.xMax -= k_ClipLabelPadding;

            if (textRect.width > k_ClipLabelMinWidth)
                DrawClipLabel(clip.displayName, textRect, Color.white, drawOptions.errorText);

            if (border != null)
                DrawClipSelectionBorder(clipRect, border, ClipBlends.kNone);

            GUI.EndClip();
        }

        public static void DrawDefaultClip(ClipDrawData drawData)
        {
            var customSkin = DirectorStyles.Instance.customSkin;
            var blendInColor = drawData.selected ? customSkin.clipBlendInSelected : customSkin.clipBlendIn;
            var blendOutColor = drawData.selected ? customSkin.clipBlendOutSelected : customSkin.clipBlendOut;
            var easeBackgroundColor = customSkin.clipEaseBckgColor;

            DrawClipBlends(drawData.clipBlends, blendInColor, blendOutColor, easeBackgroundColor);
            DrawClipBackground(drawData.clipCenterSection, drawData.selected);

            if (drawData.targetRect.width > k_MinClipWidth)
            {
                DrawClipEditorBackground(drawData);
            }
            else
            {
                drawData.targetRect.width = k_MinClipWidth;
                drawData.clipCenterSection.width = k_MinClipWidth;
            }

            DrawClipTimescale(drawData.targetRect, drawData.clippedRect, drawData.clip.timeScale);

            if (drawData.targetRect.width >= k_ClipInOutMinWidth)
                DrawClipInOut(drawData.targetRect, drawData.clip);

            var labelRect = drawData.clipCenterSection;

            if (drawData.targetRect.width >= k_ClipLoopsMinWidth)
            {
                bool selected = drawData.selected || drawData.inlineCurvesSelected;

                if (selected)
                {
                    if (drawData.loopRects != null && drawData.loopRects.Any())
                    {
                        DrawLoops(drawData);

                        var l = drawData.loopRects[0];
                        labelRect.xMax = Math.Min(labelRect.xMax, l.x - drawData.unclippedRect.x);
                    }
                }
            }

            labelRect.xMin += k_ClipLabelPadding;
            labelRect.xMax -= k_ClipLabelPadding;

            if (labelRect.width > k_ClipLabelMinWidth)
            {
                DrawClipLabel(drawData, labelRect, Color.white);
            }

            DrawClipSwatch(drawData.targetRect, drawData.ClipDrawOptions.highlightColor);
            DrawClipBorder(drawData);
        }

        static void DrawClipEditorBackground(ClipDrawData drawData)
        {
            var isRepaint = (Event.current.type == EventType.Repaint);
            if (isRepaint && drawData.clipEditor != null)
            {
                var customBodyRect = drawData.clippedRect;
                customBodyRect.yMin += k_ClipInlineWidth;
                customBodyRect.yMax -= k_ClipSwatchLineThickness;
                var region = new ClipBackgroundRegion(customBodyRect, drawData.localVisibleStartTime, drawData.localVisibleEndTime);
                try
                {
                    drawData.clipEditor.DrawBackground(drawData.clip, region);
                }
                catch (Exception e)
                {
                    Debug.LogException(e);
                }
            }
        }

        public static void DrawAnimationRecordBorder(ClipDrawData drawData)
        {
            if (!drawData.clip.parentTrack.IsRecordingToClip(drawData.clip))
                return;

            var time = new DiscreteTime(TimelineWindow.instance.state.editSequence.time);
            var start = new DiscreteTime(drawData.clip.start + drawData.clip.mixInDuration);
            var end = new DiscreteTime(drawData.clip.end - drawData.clip.mixOutDuration);

            if (time < start || time >= end)
                return;

            DrawClipSelectionBorder(drawData.clipCenterSection, ClipBorder.Recording(), ClipBlends.kNone);
        }

        public static void DrawRecordProhibited(ClipDrawData drawData)
        {
            DrawRecordInvalidClip(drawData);
            DrawRecordOnBlend(drawData);
        }

        public static void DrawRecordOnBlend(ClipDrawData drawData)
        {
            double time = TimelineWindow.instance.state.editSequence.time;
            if (time >= drawData.clip.start && time < drawData.clip.start + drawData.clip.mixInDuration)
            {
                Rect r = Rect.MinMaxRect(drawData.clippedRect.xMin, drawData.clippedRect.yMin, drawData.clipCenterSection.xMin, drawData.clippedRect.yMax);
                DrawInvalidRecordIcon(r, Styles.s_ClipNoRecordInBlend);
            }

            if (time <= drawData.clip.end && time > drawData.clip.end - drawData.clip.mixOutDuration)
            {
                Rect r = Rect.MinMaxRect(drawData.clipCenterSection.xMax, drawData.clippedRect.yMin, drawData.clippedRect.xMax, drawData.clippedRect.yMax);
                DrawInvalidRecordIcon(r, Styles.s_ClipNoRecordInBlend);
            }
        }

        public static void DrawRecordInvalidClip(ClipDrawData drawData)
        {
            if (drawData.clip.recordable)
                return;

            double time = TimelineWindow.instance.state.editSequence.time;
            if (time < drawData.clip.start + drawData.clip.mixInDuration || time > drawData.clip.end - drawData.clip.mixOutDuration)
                return;

            DrawInvalidRecordIcon(drawData.clipCenterSection, Styles.s_ClipNotRecorable);
        }

        public static void DrawInvalidRecordIcon(Rect rect, GUIContent helpText)
        {
            EditorGUI.DrawRect(rect, new Color(0, 0, 0, 0.30f));

            var icon = Styles.s_IconNoRecord;
            if (rect.width < icon.width || rect.height < icon.height)
                return;

            float x = rect.x + (rect.width - icon.width) * 0.5f;
            float y = rect.y + (rect.height - icon.height) * 0.5f;
            Rect r = new Rect(x, y, icon.width, icon.height);
            GUI.Label(r, helpText);
            GUI.DrawTexture(r, icon, ScaleMode.ScaleAndCrop, true, 0, Color.white, 0, 0);
        }
    }
}
