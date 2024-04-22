<div align="center">
  <h2 href="https://github.com/TastSong/CrazyCar">
    <img src="./SamplePictures/CrazyCarIcon.png"  width="80px" height="80px">
  </h2>
  <h2 align="center">
    网络联机游戏解决方案
  </h2>  
    <img src="https://img.shields.io/github/stars/TastSong/CrazyCar?style=plastic" alt="">
    <img src="https://img.shields.io/github/forks/TastSong/CrazyCar?color=09F709&label=forks&style=plastic" alt="">
    <img src="https://img.shields.io/github/license/TastSong/CrazyCar?color=22DDB8&label=license&style=plastic" alt="">
    <img src="https://img.shields.io/github/commit-activity/m/TastSong/CrazyCar?color=AA8855&label=commit-activity&style=plasticc"alt="">
    <img src="https://img.shields.io/github/last-commit/TastSong/Crazycar?color=%231AE66B&label=last-commit&style=plastic" alt="">
</div>


中文  | &nbsp;[English](./README_en.md)

------

## 简介

**Crazy Car**是一款联机赛车游戏，她的整体架构为：[QFramework](https://github.com/liangxiegame/QFramework) & [Addressable](https://github.com/Unity-Technologies/Addressables-Sample) & [HybridCLR](https://github.com/focus-creative-games/hybridclr)(游戏端) + [Spring Boot](https://github.com/spring-projects/spring-boot) & [Mybatis](https://github.com/mybatis/mybatis-3)(服务端) + [KCP](https://github.com/l42111996/java-Kcp) / [WebSocket](https://github.com/psygames/UnityWebSocket) (网络)  + [Vue & Element](https://github.com/PanJiaChen/vue-element-admin)(后台)，借助于此架构，开发者只要稍作修改就可完成一款定制化的网络联机游戏。

主要提供的演示功能有：登录注册、热更头像与装备、计时赛、双人比赛、版本控制(后台)、用户信息管理(后台)等功能。

<div>
    <img src="./SamplePictures/Preview.gif" >
    <img src="./SamplePictures/Match.gif">
    <img src="./SamplePictures/Background.gif" >
</div>

下载：[Android](https://www.pgyer.com/xlbk) 、[IOS](https://www.pgyer.com/rRut)  (由于证书问题，如果想体验ios需要单独联系作者)  

ID：*(VIP账号 ：**Tast**；密码：**111111** )*

[开始使用(视频)](./README_QuickStart.md)&nbsp; | &nbsp;[技术文档](./README_Dev.md)&nbsp; | &nbsp;[更新日志](https://github.com/TastSong/CrazyCar/releases)&nbsp; | &nbsp;[设计文档](./Document)&nbsp;

:clap:  欢迎使用 **Crazy Car** ！ 

:loudspeaker: **Crazy Car**处于开发阶段，线上的数据库会不定期重置；mater不是发布分支，建议使用最新[releases](https://github.com/TastSong/CrazyCar/releases/latest)进行本地测试

------

## 特性 :point_down:

### Finish

:pushpin:支持版本强制更新

:satellite:网络同步采用物理同步方式

:telephone:支持KCP和WebSocket两种网络传输协议

:foggy:使用URP渲染管线

:blue_book:资源热更新方式为Addressable

♨️热修复使用:**HybridCLR**

:video_game:采用Unity新版本Input System，支持多款手柄

:alien:机器人，计时赛中机器人可与玩家共同竞技

:sunrise: 支持头像和装备的资源热更新

:rocket: 登录页面可以一键切换单机模式 

:car: 可以进行头像和赛车的购买和穿戴 

:iphone:你可以在 **Windows** 、**Android**和**IOS** 设备上使用此客户端 

:earth_asia: 支持多语言，通过**TranslateEditor.cs**可以一键创建多国语言

:page_facing_up: 个人信息页面，记录个人成就

:gemini: 计时赛和多人比赛两种竞技模式

:baby:[新手教程功能](./README_QuickStart.md)，提供可视化配置新手教程方案

:roller_coaster: 路线规划功能，自定义路线

------

## 联系
:email: ： TastSong@163.com

🐧：577016553

------

## 示例截图
<div  align="center">  
    <a><img src="./SamplePictures/Login.JPG"  width="316px" height="146px" title="Login"></a>
    <a><img src="./SamplePictures/Homepage.png" width="316px" height="146px" title="Homepage"></a>
    <a><img src="./SamplePictures/Avatar.png" width="316px" height="146px" title="Avatar"></a>
    <a><img src="./SamplePictures/Profile.png" width="316px" height="146px" title="Profile"></a>
    <a><img src="./SamplePictures/Equip.png" width="316px" height="146px" title="Equip"></a>
    <a><img src="./SamplePictures/Rank.png" width="316px" height="146px" title="Rank"></a>
    <a><img src="./SamplePictures/Setting.png" width="316px" height="146px" title="Setting"></a>
    <a><img src="./SamplePictures/TimeTrial.png" width="316px" height="146px" title="TimeTrial"></a>
    <a><img src="./SamplePictures/Match.png" width="316px" height="146px" title="Login"></a>
    <a><img src="./SamplePictures/Dashboard.png" width="316px" height="146px" title="Setting"></a>
    <a><img src="./SamplePictures/User.png" width="316px" height="146px" title="TimeTrial"></a>
    <a><img src="./SamplePictures/Version.png" width="316px" height="146px" title="Login"></a>
</div> 


------

## 贡献者

[CherryWhite](https://github.com/cherry-white)

欢迎任何形式的贡献，你可以用 [pull requests](https://github.com/TastSong/CrazyCar/pulls) 或 [issues](https://github.com/TastSong/CrazyCar/issues) 的方式提交任何想法。

:seedling: 当然 **Crazy Car** 还很年轻，有很多不足，但请相信，它会不停向前:running:

------

## 项目优化

### 优化方案总览

[详细文档地址](./ProjectOptimization/ProjectOptimization.md)

### 已完成的优化

1. [动态合批、静态合批、手动合批、GPU Instancing、SRP Batcher](./ProjectOptimization/Blending.md)
2. [LOD](./ProjectOptimization/LOD.md)
3. [Mipmap](./ProjectOptimization/Mipmap.md)
4. [包体优化](./ProjectOptimization/Mipmap.md)
5. [网络同步算法](./ProjectOptimization/NetworkSync.md)
5. [Addressable](./ProjectOptimization/Addressable.md)

------

## 引用

1. [UnityWebSocket: The Best Unity WebSocket Plugin for All Platforms. ](https://github.com/psygames/UnityWebSocket)
2. [QFramework: Unity3D System Design Architecture ](https://github.com/liangxiegame/QFramework)
3. [java-Kcp: 基于java的netty实现的可靠udp网络库(kcp算法)，包含fec实现，可用于游戏，视频，加速等业务 ](https://github.com/l42111996/java-Kcp)
4. [kcp4sharp: kcp for c#. ](https://github.com/beykery/kcp4sharp)
5. [DOTween (HOTween v2) Unity Asset Store](https://assetstore.unity.com/packages/tools/animation/dotween-hotween-v2-27676)
6. [Unity实现简化版卡丁车漂移](https://zhuanlan.zhihu.com/p/95013367)
6. [UIEffect: UIEffect is an effect component for uGUI element in Unity](https://github.com/mob-sakai/UIEffect)
8. [UnityNativeShare: A Unity plugin to natively share files ](https://github.com/yasirkula/UnityNativeShare)
8. [Path-Creator: Path creation asset for Unity game development ](https://github.com/SebLague/Path-Creator)
10. [AudioKit：音频控制插件](https://github.com/liangxiegame/AudioKit)
10. [Same Material - Static Mesh Combiner ：Mesh合并](https://assetstore.unity.com/packages/tools/modeling/same-material-static-mesh-combiner-139565)
10. [AutoLOD：自动生成降低Mesh并生成LOD ](https://assetstore.unity.com/packages/tools/utilities/autolod-185662?locale=zh-CN)
10. [UniTask: Provides an efficient allocation free async/await integration for Unity.](https://github.com/Cysharp/UniTask)
10. [全部免费字体大全 (chaziti.cn)](https://chaziti.cn/free/)
10. [Transparent Culling System (URP) 遮挡剔除插件 ](https://assetstore.unity.com/packages/tools/camera/transparent-culling-system-urp-212951)
10. [Simple Spin Blur](https://assetstore.unity.com/packages/tools/integration/simple-spin-blur-202273)
10. [LearnUnityShader: 记录学习Unity Shader过程中实现过的一些Demo)](https://github.com/csdjk/LearnUnityShader)
10. [Simple Water Shader URP](https://assetstore.unity.com/packages/2d/textures-materials/water/simple-water-shader-urp-191449)
10. [Metaverse Full-Body Online 3D Avatar Creator | Ready Player Me](https://readyplayer.me/)
10. [spring-boot: Spring Boot](https://github.com/spring-projects/spring-boot)
10. [Vue.js is a progressive, incrementally-adoptable JavaScript framework for building UI on the web.](https://github.com/vuejs/vue)
10. [element: A Vue.js 2.0 UI Toolkit for Web](https://github.com/ElemeFE/element)
10. [vue-element-admin: A magical vue admin](https://github.com/PanJiaChen/vue-element-admin)
10. [Midjourney](https://www.midjourney.com/app/)
10. [Customizable skybox | 2D 天空 | Unity Asset Store](https://assetstore.unity.com/packages/2d/textures-materials/sky/customizable-skybox-174576)
10. [Plugins for mobile platforms to enable file downloads in background (github.com)](https://github.com/Unity-Technologies/BackgroundDownload/tree/master)
10. [focus-creative-games/hybridclr: HybridCLR是一个特性完整、零成本、高性能、低内存的Unity全平台原生c#热更方案](https://github.com/focus-creative-games/hybridclr)

------


## Star History

![Star History Chart](https://api.star-history.com/svg?repos=TastSong/CrazyCar)


## 证书

[MIT](https://github.com/TastSong/CrazyCar/blob/master/LICENSE)

