using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Threading;

namespace MoreMountains.NiceVibrations
{
    public class MMNVAltThread<T> where T:struct
    {
        private static Thread _altThread;
        private static bool _threadShouldStop;
        private static List<Action<T>> _methodsList = new List<Action<T>>();
        private static List<T> _argumentsList = new List<T>();

        public void Run(Action<T> method, T arguments)
        {
            _methodsList.Add(method);
            _argumentsList.Add(arguments);
            
            if (_altThread == null)
            {
                _altThread = new Thread(() => Process());
                _altThread.Start();
            }
        }

        public void CloseThread() 
        {
            if (_altThread == null)
            {
                return;
            }
                
            _threadShouldStop = true;
            _altThread.Interrupt();
            _altThread.Abort();
        }

        private void Process()
        {
            while (!_threadShouldStop)
            {
                for (int i = 0; i < _methodsList.Count; i++)
                {
                    if (_methodsList[i] != null)
                    {
                        Action<T> entry = (Action<T>)_methodsList[i];
                        entry(_argumentsList[i]);
                        _methodsList.RemoveAt(i);
                        _argumentsList.RemoveAt(i);    
                    }
                }
            }
        }
    }
}