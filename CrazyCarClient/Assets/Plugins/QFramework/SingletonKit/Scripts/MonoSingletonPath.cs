/****************************************************************************
 * Copyright (c) 2015 - 2022 liangxiegame UNDER MIT License
 * 
 * http://qframework.cn
 * https://github.com/liangxiegame/QFramework
 * https://gitee.com/liangxiegame/QFramework
 ****************************************************************************/

using System;

namespace QFramework
{
    [AttributeUsage(AttributeTargets.Class)] //这个特性只能标记在Class上
    public class MonoSingletonPathAttribute : Attribute
    {
        public MonoSingletonPathAttribute(string pathInHierarchy)
        {
            PathInHierarchy = pathInHierarchy;
        }

        public string PathInHierarchy { get; private set; }
    }
}