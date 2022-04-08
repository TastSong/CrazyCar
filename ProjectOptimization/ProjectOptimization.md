# Unity 手游性能优化

## 物理

1. 减少射线频率、长度、layer；
2. 善用 Physics Matrix；
3. 不要移动静态 Collider，需要移动的话加 RigidBody；
4. 尽量使用简单的 Collider 替代 MeshCollider；不同类型进行碰撞检测的相对成本是按照以下顺序排序的，从最耗费资源到最不耗费资源：三角形网格、凸包（三角形网格）、胶囊体、球体、立方体、平面、点。
5. 一定要控制好 FixedUpdate 的频率，1s 建议不要执行超过30次，因为是 FixedUpdate 执行 Physics，如果 Update 卡顿，会导致 FixedUpdate 执行多次，继而 Update 更加卡顿形成恶性循环；

## 动画

1. 文件压缩，去除无用通道比如 Scale，降低精度保持两位有效小数，设置数值范围压缩数据等；
2. GPU 加速动画播放； [更多细节 GPU 加速动画渲染方案](https://nashnie.github.io/rendering/2018/11/19/gpu-animator.html)
3. 开启 Unity 的优化选项；
4. 减少关键帧；

## 渲染

1. 运行时根据摄像机距离以及手机性能进行 LOD；

2. 降低屏幕分辨率；

3. Unity地形贴图数量以及贴图法线（转换成Mesh，然后切割，减少贴图数量、使用Texture2DArray）；

4. Using ASTC Texture Compression for Game Assets；

5. 一般情况下 Shader 使用低精度代替高精度；

6. 遮挡剔除&距离剔除&平截头体剔除； [更多细节 基于大地图的遮挡剔除优化方案](https://nashnie.github.io/none/2018/11/01/bigworld-occlusionculling.html)

7. 开启 Unity 的 Mesh optimizing优化选项；

8. 优先使用 Vulkan API；

9. 针对老机型（OpenGL ES 2.0），使用 ETC1 和 alpha 两张图保存 PNG图片（带有 alpha 通道的图片）；

10. 慎用 PBR，场景内大部分物件可以使用简单的 PBR，主角等重要物件使用复杂 PBR 渲染；

11. 使用 lightmap，如不行的话，如果物件之间不能批处理的话（不同材质），那么烘焙代理网格处理实时阴影，解决阴影 drawcall 太多的问题； [更多细节 ShadowMeshProxy Plugin](https://github.com/nashnie/ShadowMeshProxyPlugin)

12. 可程序化粒子特效（可剔除），尽量程序化，如何避免不可程序化；

13. 静态批处理场景物件；

14. 动态批处理角色身上的物件，比如武器等，减少 drawcall；

15. 石头、树木、草丛等使用 GPU Intancing；

16. 移除不需要动画的物件身上的空动画组件；

17. 关闭不要接受阴影的物件的接受阴影设置；

18. 减少OverDraw，a，大型物件放到渲染队列的末端比如天空盒、地形等；b，减少使用Alpha Blending、Transparency；

19. Camera 设置为 Clear Camera;

20. GPU Upload(Asynchronous Texture Upload) 设置 Time-Slice 以及 Buffer Size；

21. 减少 Shader 变体，减少 pass；

22. Shader warm up；

23. 场景材质图集合并；

24. **大地形设计&优化**，这个比较复杂，具体说一下:

    切块（Tile）比如32x32。每个 Tile 分层。地表、LOD0（大型建筑物比如房子）、LOD1（小型物件比如桌子、椅子）、LOD2（很细节物件比如花花草草）、Dynamic（场景动画、特效）。
    根据英雄所在位置加载周围 Tile，根据分层信息加载显示或者隐藏Tile物件。
    场景分区域包围盒，根据距离判断是否卸载某个区域资源。
    包围盒设计的大一点以及包围盒可重叠，可重叠为了处理一些特殊情况。单一用距离判断会有瑕疵。比如在城墙外，即使隔的很近也不需要加载城内的细节。而我们完全可以在城门外加一个缓冲的小区域并入城市区域，只要玩家一踩到城门口，城内的细节加载流程就开始启动了。
    一个区域物件分细节和外观物件两种，离一个区域较近时就应该开始加载外观物件同时卸载细节物件。比如一片树林是外观物件而地上的花花草草则是细节物件。
    手机内存应用一般可以500M，一定要控制在350M以内。

25. 正确应用纹理压缩可提供显着的性能优势。在较新的移动设备上，使用 ASTC 压缩的纹理格式。如果目标设备上没有 ASTC，在 Android 上使用 ETC2，在 iOS 上使用 PVRTC；

26. 一个角色一般三种贴图 Diffuse + Normal + PBR（Metal + Roughness + AO），尺寸512、512、256；

## 逻辑&网络

1. 编译设置成 IL2CPP，运行效率较大提升；
2. 缓存协议字节数组；
3. 使用 ByteArray（定长）替代 ByteList（不定长），尽量用 short 替代 float；
4. Nagle 算法，通过减少小的消息发送，来减少网络阻塞；
5. KCP 算法，不丢包的 UDP。本质上是 TCP。当成 TCP 来用；
6. 尽量缓存计算结果；
7. 使用四叉树、八叉树等管理场景物件，控制逻辑频率以及渲染频率（动画等）；
8. 使用重要度系统（物件的屏占比）管理场景物件，控制控制逻辑频率以及渲染频率（动画等）；
9. 使用管理器管理物件的 Update 和 FixedUpdate，替代 Unity 自带的 Update、FixedUpdate 的函数，提高性能；
10. 使用多线程加速热点逻辑计算；切记不要滥用多线程，应该先优化该热点逻辑，然后移至多线程；
11. 资源销毁，分帧处理；
12. GC 优化，减少匿名函数使用等；字符串操作是万恶之源！！使用 stringbuilder 或者重写 unity 的 string 解决这个问题；
13. 实现重要度管理系统（SignificanceManager），根据对象的距离、面向、屏幕占比等来优化性能，比如降低TICK、LOD、控制特效播放等； [更多细节 重要度管理系统方案](https://github.com/nashnie/SignificanceManager)

## 内存

1. 更细致的对象池处理；比如基于视野的对象池，如果对象在角色背后，但是在玩家 AOI 逻辑内，逻辑保持运行，显示层直接回收，给其他在玩家视野里的对象使用，最大化缓冲池作用；
2. 使用离线的遮挡剔除替代 Unity 遮挡剔除，节省内存； [更多细节 基于大地图的遮挡剔除优化方案](https://nashnie.github.io/none/2018/11/01/bigworld-occlusionculling.html)
3. 使用 LOD 加载远距离的物件；
4. 堆内存优化，比如使用定长数组，减少实例化等等；
5. 注意各种资源的格式设置比如mp3等；
6. 使用引用计数管理 AssetBundle，防止泄露；
7. 控制好贴图尺寸，1k 贴图比 512 贴图，因为 mipmap 的原因内存要占用多很多；
8. 优先使用 ASTC 压缩；

## UI

1. 动静分离，减少 UI Overdraw；
2. 如果 GPU 在绘制 UI 时时间花费过多，帧调试器指示片段着色器遇到了瓶颈，那么UI很可能是超越 GPU 承受范围的像素填充率；
3. 关闭不需要UI交互 Graphics Recast；
4. 隐藏和显示UI最好使用开关 Canvas 的方式；

## Debug && Profiler

如何判断一部手机性能好坏？
CPU，获取 CPU 数量以及最大同时运行 CPU 数量计算出一个值
GPU，根据不同厂商（nvidia geforce，tegra 等等）GPU型号解析计算出 GPU 的 version(枚举出所有型号的比如填充率，三角形渲染效率等，检测不到的GPU认为是高版本)
特殊机型特殊处理，比如小米
特殊情况特殊处理，比如系统内存小于 1G，或者 cpu、gpu 某一项分太低
安卓和 IOS 分开处理
综合以上得出一个总分。

调试工具
WeTest
Adreno Profiler
Unity Profiler
Unity FrameDebugger