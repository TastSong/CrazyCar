using UnityEngine;

namespace VFX
{
	internal sealed class SequencePart : MonoBehaviour
	{
		public bool ShouldInstantiate = true;
		public GameObject EffectPrefab;
		public float LifeTime;
		public float CallNextDelay;

		public void Run(Transform transformParent)
		{
			if (ShouldInstantiate)
			{
				var go = Instantiate(EffectPrefab);
				go.SetActive(true);
				go.transform.parent = transformParent;
				go.transform.position = transformParent.position + EffectPrefab.transform.position;
				Destroy(go, LifeTime);
			}
			else
				Destroy(gameObject, LifeTime);
		}
	}
}