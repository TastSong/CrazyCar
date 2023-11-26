using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using DG.Tweening;

public class MoveAnim : MonoBehaviour
{
    public enum MoveAnimType
    {
        MoveOut = 0,
        MoveIn
    }

    public enum MoveDirction
    {
        Left,
        Right,
        Up,
        Down
    }

    [Serializable]
    public class MoveAnimInfo
    {
        public MoveDirction direction;
        public float moveDistance;
        public Transform target;
    }

    public MoveAnimType moveAnimType;
    public MoveAnimInfo[] moveAnimInfos;
    public float duration = 1.4f;

    private void OnEnable()
    {
        if (moveAnimType == MoveAnimType.MoveIn)
        {
            foreach (var moveAnimInfo in moveAnimInfos)
            {
                if (moveAnimInfo.target != null)
                {
                    if (moveAnimInfo.direction == MoveDirction.Left)
                    {
                        moveAnimInfo.target.localPosition = new Vector3(moveAnimInfo.target.localPosition.x + moveAnimInfo.moveDistance,
                            moveAnimInfo.target.localPosition.y, moveAnimInfo.target.localPosition.z);
                    }
                    else if (moveAnimInfo.direction == MoveDirction.Right)
                    {
                        moveAnimInfo.target.localPosition = new Vector3(moveAnimInfo.target.localPosition.x - moveAnimInfo.moveDistance,
                            moveAnimInfo.target.localPosition.y, moveAnimInfo.target.localPosition.z);
                    }
                    else if (moveAnimInfo.direction == MoveDirction.Up)
                    {
                        moveAnimInfo.target.localPosition = new Vector3(moveAnimInfo.target.localPosition.x,
                            moveAnimInfo.target.localPosition.y - moveAnimInfo.moveDistance, moveAnimInfo.target.localPosition.z);
                    }
                    else if (moveAnimInfo.direction == MoveDirction.Down)
                    {
                        moveAnimInfo.target.localPosition = new Vector3(moveAnimInfo.target.localPosition.x,
                            moveAnimInfo.target.localPosition.y + moveAnimInfo.moveDistance, moveAnimInfo.target.localPosition.z);
                    }
                }
            }

            PlayAnim();
        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            PlayAnim();
        }
    }

    public void PlayAnim()
    {
        Sequence sequence = DOTween.Sequence();
        foreach (var moveAnimInfo in moveAnimInfos)
        {
            if (moveAnimInfo.target == null)
            {
                continue;
            }
            if (moveAnimInfo.direction == MoveDirction.Left)
            {
                sequence.Join(moveAnimInfo.target.DOLocalMoveX(moveAnimInfo.target.localPosition.x - moveAnimInfo.moveDistance, duration));
            }
            else if (moveAnimInfo.direction == MoveDirction.Right)
            {
                sequence.Join(moveAnimInfo.target.DOLocalMoveX(moveAnimInfo.target.localPosition.x + moveAnimInfo.moveDistance, duration));
            }
            else if (moveAnimInfo.direction == MoveDirction.Up)
            {
                sequence.Join(moveAnimInfo.target.DOLocalMoveY(moveAnimInfo.target.localPosition.y + moveAnimInfo.moveDistance, duration));
            }
            else if (moveAnimInfo.direction == MoveDirction.Down)
            {
                sequence.Join(moveAnimInfo.target.DOLocalMoveY(moveAnimInfo.target.localPosition.y - moveAnimInfo.moveDistance, duration));
            }           
        }
    }
}
