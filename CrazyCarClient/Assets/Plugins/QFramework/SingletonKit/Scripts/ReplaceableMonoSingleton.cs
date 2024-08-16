/****************************************************************************
 * Copyright (c) 2015 - 2022 liangxiegame UNDER MIT License
 * 
 * http://qframework.cn
 * https://github.com/liangxiegame/QFramework
 * https://gitee.com/liangxiegame/QFramework
 ****************************************************************************/

using UnityEngine;

namespace QFramework
{
    public class ReplaceableMonoSingleton<T> : MonoBehaviour where T : Component
    {
        protected static T mInstance;
        
        public float InitializationTime;
        
        public static T Instance
        {
            get
            {
                if (mInstance == null)
                {
                    mInstance = FindObjectOfType<T>();
                    if (mInstance == null)
                    {
                        var obj = new GameObject
                        {
                            hideFlags = HideFlags.HideAndDontSave
                        };
                        mInstance = obj.AddComponent<T>();
                    }
                }

                return mInstance;
            }
        }
        
        protected virtual void Awake()
        {
            if (!Application.isPlaying)
            {
                return;
            }

            InitializationTime = Time.time;

            DontDestroyOnLoad(this.gameObject);

            var check = FindObjectsOfType<T>();
            foreach (var searched in check)
            {
                if (searched == this) continue;
                if (searched.GetComponent<ReplaceableMonoSingleton<T>>().InitializationTime < InitializationTime)
                {
                    Destroy(searched.gameObject);
                }
            }

            if (mInstance == null)
            {
                mInstance = this as T;
            }
        }
    }
}