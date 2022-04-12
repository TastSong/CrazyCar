### 一、什么是LOD：

LOD技术（level of detail）被称作多层次细节，它的原理是模型物体在场景中根据距离相机的远近来显示不同细节程度的模型，距离渐近时，显示细节程度较高的模型，距离渐远时，显示细节程度较低的模型，从而节省性能的开销。

### 二、LOD如何使用：

1. Unity中通过LOD Group组件来实现LOD，如图所示的集装箱模型，我们准备了四个不同细节程度的Mesh网格

2. 新建一个空物体，添加LOD Group组件，默认是分为3个层次，最后的Culled层是指的剔除层，不会渲染任何模型
3. 这里我们需要四个层次，通过选中一个层次右键/Insert Before插入一个
4. 通过Add来添加不同层次要渲染的Mesh网格
5. 添加完成后在场景中进行预览

除了在Inspector检视面板设置LOD外，在代码中也可以进行设置，LOD Group类中提供了SetLODs函数：

```csharp
//// 摘要://     Set the LODs for the LOD group. This will remove any existing LODs configured//     on the LODGroup.//// 参数://   lods://     The LODs to use for this group.[MethodImpl(MethodImplOptions.InternalCall)][FreeFunction("SetLODs_Binding", HasExplicitThis = true)]public extern void SetLODs(LOD[] lods);
```

测试代码：

```csharp
using UnityEngine;
public class LODExample : MonoBehaviour {
    private void Start() {
        LODGroup group = gameObject.AddComponent<LODGroup>();
        LOD[] lods = new LOD[4];
        for (int i = 0; i < lods.Length; i++) {
            lods[i] = new LOD(1 - (i + 1) * .2f, new Renderer[] { transform.GetChild(i).GetComponent<Renderer>() });
        }
        group.SetLODs(lods); group.RecalculateBounds();
    }
}
```

### 三、使用LOD的弊端：

​		弊端也是显而易见的，首先是增加建模同事的工作量，要准备不同细节程度的模型，当然有很多自动减面的插件，例如资源商店中的Mesh Simplify插件，但是程序减面多多少少会破坏模型的原有外观，最理想的情况还是建模人员手动减面。另外，大量的模型文件不但会增加包体的大小，而且在运行时会大量增加内存消耗，因此对于LOD有一句空间换取时间的评价，当然最终是否采用LOD技术要根据具体情况而定，性能优化无非是CPU、GPU与内存之间的取舍。

### 四、使用LOD的注意事项：

​		只有最高层次细节的模型才会参与静态光照的烘焙，如果我们希望细节程度较低的模型看起来也正常，需要在周围放置Light Probe Group 即光照探针，以获取烘焙过程中的间接光照。

### 五、工具推荐

使用[AutoLOD](https://assetstore.unity.com/packages/tools/utilities/autolod-185662?locale=zh-CN)进行自动生成简模
