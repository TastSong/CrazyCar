using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace KcpCSharp {
    public abstract class Output {
        abstract public void output(ByteBuf msg, Kcp kcp, System.Object user);
    }
}
