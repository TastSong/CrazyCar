using System;
using UnityEditor.IMGUI.Controls;
using UnityEngine.Timeline;

namespace UnityEditor.Timeline.Signals
{
    static class SignalListFactory
    {
        public static SignalReceiverTreeView CreateSignalInspectorList(TreeViewState state, SignalReceiverHeader header, SignalReceiver target, SerializedObject so)
        {
            return new SignalReceiverTreeView(state, header, target, so);
        }

        public static  SignalReceiverHeader CreateHeader(MultiColumnHeaderState state, int columnHeight)
        {
            var header = new SignalReceiverHeader(state) { height = columnHeight };
            header.ResizeToFit();
            return header;
        }

        public static MultiColumnHeaderState CreateHeaderState()
        {
            return new MultiColumnHeaderState(SignalReceiverTreeView.GetColumns());
        }

        public static TreeViewState CreateViewState()
        {
            return new TreeViewState();
        }
    }
}
