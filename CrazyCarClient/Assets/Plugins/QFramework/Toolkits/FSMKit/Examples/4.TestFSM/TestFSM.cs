using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class TestFSM : MonoBehaviour {
    public enum States {
        A,
        B,
        C
    }

    public FSM<States> FSM = new FSM<States>();

    public class StateA : AbstractState<States, TestFSM> {
        public StateA(FSM<States> fsm, TestFSM target) : base(fsm, target) {
        }

        public override void OnEnter() {
            Debug.Log("++++111 " +  mFSM.CurrentState);
            mFSM.ChangeState(States.B);
        }
    }


    public class StateB : AbstractState<States, TestFSM> {
        public StateB(FSM<States> fsm, TestFSM target) : base(fsm, target) {
        }

        public override void OnEnter() {
            Debug.Log("++++222 " +  mFSM.CurrentState);
            mFSM.ChangeState(States.C);
        }
    }
    
    public class StateC : AbstractState<States, TestFSM> {
        public StateC(FSM<States> fsm, TestFSM target) : base(fsm, target) {
        }

        public override void OnEnter() {
            Debug.Log("++++333 " +  mFSM.CurrentState);
        }
    }

    private void Start() {
        FSM.AddState(States.A, new StateA(FSM, this));
        FSM.AddState(States.B, new StateB(FSM, this));
        FSM.AddState(States.C, new StateC(FSM, this));

        // 支持和链式模式混用
        // FSM.State(States.C)
        //     .OnEnter(() =>
        //     {
        //
        //     });

        FSM.StartState(States.A);
    }

    private void OnGUI() {
        FSM.OnGUI();
    }

    private void OnDestroy() {
        FSM.Clear();
    }
}