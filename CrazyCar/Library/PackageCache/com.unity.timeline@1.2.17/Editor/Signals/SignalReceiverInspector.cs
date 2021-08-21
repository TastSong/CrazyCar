using UnityEngine;
using UnityObject = UnityEngine.Object;
using UnityEditor.IMGUI.Controls;
using UnityEngine.Events;
using UnityEngine.Timeline;

namespace UnityEditor.Timeline.Signals
{
    [CustomEditor(typeof(SignalReceiver))]
    class SignalReceiverInspector : Editor
    {
        SignalReceiver m_Target;

        [SerializeField] TreeViewState m_TreeState;
        [SerializeField] MultiColumnHeaderState m_MultiColumnHeaderState;
        internal SignalReceiverTreeView m_TreeView;

        SignalEmitter signalEmitterContext
        {
            get { return m_Context as SignalEmitter;}
        }

        void OnEnable()
        {
            m_Target = target as SignalReceiver;
            InitTreeView(serializedObject);

            Undo.undoRedoPerformed += OnUndoRedo;
        }

        void OnDisable()
        {
            Undo.undoRedoPerformed -= OnUndoRedo;
        }

        void OnUndoRedo()
        {
            m_TreeView.dirty = true;
        }

        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            using (var changeCheck = new EditorGUI.ChangeCheckScope())
            {
                m_TreeView.RefreshIfDirty();
                DrawEmitterControls(); // Draws buttons coming from the Context (SignalEmitter)

                EditorGUILayout.Space();
                m_TreeView.Draw();

                if (signalEmitterContext == null)
                    DrawAddRemoveButtons();

                if (changeCheck.changed)
                {
                    serializedObject.ApplyModifiedProperties();
                    m_TreeView.dirty = true;
                }
            }
        }

        void DrawEmitterControls()
        {
            var context = signalEmitterContext;
            if (context != null)
            {
                var currentSignal = context.asset;
                if (currentSignal != null && !m_Target.IsSignalAssetHandled(currentSignal))
                {
                    EditorGUILayout.Separator();
                    var message = string.Format(Styles.NoReaction, currentSignal.name);
                    SignalUtility.DrawCenteredMessage(message);
                    if (SignalUtility.DrawCenteredButton(Styles.AddReactionButton))
                        m_Target.AddNewReaction(currentSignal); // Add reaction on the first
                    EditorGUILayout.Separator();
                }
            }
        }

        internal void SetAssetContext(SignalAsset asset)
        {
            m_TreeView.SetSignalContext(asset);
        }

        void DrawAddRemoveButtons()
        {
            using (new GUILayout.HorizontalScope())
            {
                GUILayout.FlexibleSpace();
                if (GUILayout.Button(Styles.AddReactionButton))
                {
                    Undo.RecordObject(m_Target, Styles.UndoAddReaction);
                    m_Target.AddEmptyReaction(new UnityEvent());
                    PrefabUtility.RecordPrefabInstancePropertyModifications(m_Target);
                }
                GUILayout.Space(18.0f);
            }
        }

        void InitTreeView(SerializedObject so)
        {
            m_TreeState = SignalListFactory.CreateViewState();
            m_MultiColumnHeaderState = SignalListFactory.CreateHeaderState();
            var header = SignalListFactory.CreateHeader(m_MultiColumnHeaderState, SignalReceiverUtility.headerHeight);

            var context = signalEmitterContext;
            m_TreeView = SignalListFactory.CreateSignalInspectorList(m_TreeState, header, m_Target, so);
            m_TreeView.readonlySignals = context != null;

            if (context != null)
                m_TreeView.SetSignalContext(context.asset);
        }
    }
}
