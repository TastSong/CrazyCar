using UnityEngine;

namespace Assets.ImagyVFX.Scripts.EffectsSequence
{
    internal sealed class EffectsSequence : MonoBehaviour
    {
        public SequencePart[] EffectParts;
        public bool IsLoopBack;

        private int _effectIndex;

        private void Start()
        {
            if (EffectParts.Length == 0)
                return;

            RunEffect();
        }

        private void RunEffect()
        {
            var effect = EffectParts[_effectIndex++];
            effect.Run(transform);

            Invoke("CallNext", effect.CallNextDelay);
        }

        private void CallNext()
        {
            if (_effectIndex >= EffectParts.Length)
            {
                if (!IsLoopBack)
                    return;
                _effectIndex = 0;
            }

            RunEffect();
        }
    }
}