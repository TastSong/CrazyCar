# CrazyCar 项目分析文档

## 1. 项目概述

**CrazyCar** 是一款网络联机赛车游戏，采用完整的全栈游戏架构设计。项目分为三个主要子系统：

| 子项目 | 描述 | 技术栈 |
|--------|------|--------|
| `CrazyCarClient` | Unity 游戏客户端 | Unity 2021.3+, QFramework, URP |
| `CrazyCarServer` | Spring Boot 游戏服务端 | Spring Boot 2.7.1, MySQL, WebSocket/KCP |
| `CrazyCarBackground` | Vue + Element 后台管理系统 | Vue 2.6, Element UI |

项目当前分支为 `dev/v9.6.0`，采用 MIT 许可证开源。

---

## 2. 项目目录结构

```
F:\Github\CrazyCar\
├── CrazyCarClient/           # Unity 客户端
│   ├── Assets/
│   │   ├── Scripts/          # 核心代码 (QFramework 架构)
│   │   │   ├── Anim/         # 动画管理
│   │   │   ├── Command/      # 命令模式实现
│   │   │   ├── Event/        # 事件系统
│   │   │   ├── Game/         # 游戏逻辑 (玩家、车辆、AI等)
│   │   │   ├── Model/        # 数据模型
│   │   │   ├── Query/        # 查询模式
│   │   │   ├── System/       # 系统层 (网络、资源管理等)
│   │   │   ├── UI/           # UI 界面组件
│   │   │   └── Utility/      # 工具类
│   │   ├── Plugins/          # 第三方插件 (QFramework, DOTween, UniTask等)
│   │   ├── HotUpdate/        # 热更新相关
│   │   ├── HybridCLRGenerate/# HybridCLR 代码生成
│   │   └── Scenes/           # 游戏场景
│   ├── Packages/             # Unity 包配置
│   └── Library/              # Unity 库文件
│
├── CrazyCarServer/           # Spring Boot 服务端
│   ├── src/main/java/com/tastsong/crazycar/
│   │   ├── common/           # 常量定义 (GameType, NetType)
│   │   ├── config/           # Spring 配置 (WebSocket, MyBatis, CORS)
│   │   ├── controller/       # REST API 控制器
│   │   ├── dto/              # 数据传输对象 (req/resp)
│   │   ├── mapper/           # MyBatis Mapper 接口
│   │   ├── model/            # JPA 实体模型
│   │   ├── service/          # 业务逻辑层
│   │   ├── task/             # 定时任务
│   │   └── utils/            # 工具类 (JWT Token)
│   └── src/main/resources/
│       ├── application.properties
│       └── data.sql          # 数据库初始化脚本
│
├── CrazyCarBackground/       # Vue 后台管理
│   ├── src/
│   │   ├── api/              # API 接口封装
│   │   ├── components/       # 通用组件
│   │   ├── layout/           # 布局组件
│   │   ├── router/           # 路由配置
│   │   ├── store/            # Vuex 状态管理
│   │   ├── utils/            # 工具函数
│   │   └── views/            # 页面视图
│   │       ├── dashboard/    # 数据仪表盘
│   │       ├── avatar/       # 头像管理
│   │       ├── equip/        # 装备管理
│   │       ├── match/        # 比赛管理
│   │       ├── trial/        # 计时赛管理
│   │       ├── user/         # 用户管理
│   │       └── version/      # 版本控制
│   └── build/                # 构建配置
│
├── Document/                 # 设计文档 (PDF)
├── ProjectOptimization/      # 性能优化文档
└── README*.md               # 项目文档
```

---

## 3. 技术栈与版本信息

### 3.1 客户端 (Unity)

| 技术 | 版本/说明 |
|------|-----------|
| Unity | 2021.3+ |
| 渲染管线 | URP (Universal Render Pipeline) 12.1.7 |
| 架构框架 | QFramework (微改版) |
| 资源热更新 | Addressables 1.19.19 |
| 热修复 | HybridCLR |
| 网络协议 | KCP / WebSocket |
| 异步处理 | UniTask |
| 动画插件 | DOTween |
| UI 框架 | TextMeshPro 3.0.8 |
| 摄像机 | Cinemachine 2.8.9 |
| 输入系统 | Unity Input System |

### 3.2 服务端 (Spring Boot)

| 技术 | 版本 |
|------|------|
| Spring Boot | 2.7.1 |
| Java | 17 |
| ORM 框架 | MyBatis-Plus 3.5.3.2 |
| 数据库 | MySQL 8.0.32 |
| WebSocket | Spring WebSocket |
| KCP | java-Kcp 1.6 |
| JSON 处理 | Hutool 5.8.25 |
| 加密 | Jasypt 3.0.4 |
| 邮件 | Spring Mail |

### 3.3 后台管理 (Vue)

| 技术 | 版本 |
|------|------|
| Vue | 2.6.10 |
| Vue Router | 3.0.2 |
| Vuex | 3.1.0 |
| Element UI | 2.13.2 |
| axios | 0.27.2 |
| ECharts | 4.2.1 |
| 构建工具 | vue-cli 4.4.4 |

---

## 4. 代码架构模式

### 4.1 客户端架构 (QFramework)

项目采用 **分层架构**，遵循以下规则：

```
┌─────────────────────────────────────────────────┐
│              ViewController (表现层)             │  获取 System、Model，发送 Command，监听 Event
├─────────────────────────────────────────────────┤
│                System (系统层)                  │  获取 Model，监听/发送 Event，获取 Utility
├─────────────────────────────────────────────────┤
│                Model (数据层)                   │  获取 Utility，发送 Event
├─────────────────────────────────────────────────┤
│              Utility (工具层)                   │  第三方库封装
├─────────────────────────────────────────────────┤
│           Command (命令层 - 跨层级)              │  获取 System、Model，发送 Event、Command
└─────────────────────────────────────────────────┘
```

**核心架构特点：**
- **命令模式**：ViewController 将交互逻辑以 Command 实现
- **观察者模式**：ViewController 通过 Event 响应表现逻辑
- **代理模式**：ViewController 和 System 对 Model 的数据查询用 Query 实现
- **IOC/DI**：四层注册利用 IOC 原理
- **单例模式**：四层的获取采用单例模式

### 4.2 服务端架构 (Spring Boot MVC)

```
Controller (REST API) → Service (业务逻辑) → Mapper (数据访问) → Model (JPA 实体)
```

---

## 5. 数据库设计

### 5.1 核心数据表

| 表名 | 描述 | 关键字段 |
|------|------|----------|
| `user` | 用户表 | uid, user_name, user_password, star, is_vip, aid, eid |
| `admin_users` | 后台管理员表 | uid, user_name, user_password, routes |
| `avatar` | 头像配置表 | aid, rid, avatar_name, star |
| `avatar_record` | 用户拥有头像记录 | uid, aid |
| `equip` | 赛车装备表 | eid, rid, equip_name, star, mass, power, max_power |
| `equip_record` | 用户拥有装备记录 | uid, eid |
| `match_record` | 比赛记录 | uid, cid, time, rank, map_id, create_time |
| `time_trial_record` | 计时赛记录 | uid, cid, time, rank |
| `time_trial_class` | 计时赛关卡配置 | cid, name, need_star |
| `match_class` | 比赛模式配置 | mid, map_id |
| `match_map` | 比赛地图配置 | map_id, map_name |
| `assets_updating` | 资源更新配置 | id, update_time, is_on, url |
| `version` | 版本控制表 | id, version_code, version_name |
| `user_login_record` | 用户登录记录 | uid, login_time |

---

## 6. API 设计

### 6.1 HTTP API 端点

**基础路径：** `/CrazyCarSpringBootServer/v1`

| 方法 | 路径 | 描述 |
|------|------|------|
| POST | `/Login` | 用户登录 |
| POST | `/Register` | 用户注册 |
| POST | `/Config` | 获取游戏配置 (头像列表) |
| GET | `/TestJWT` | JWT 令牌验证 |
| POST | `/UserInfo` | 获取用户信息 |
| POST | `/EnterGame` | 进入游戏 |
| POST | `/TimeTrial` | 计时赛相关 |
| POST | `/Match` | 匹配系统 |
| POST | `/Avatar` | 头像管理 |
| POST | `/Equip` | 装备管理 |
| POST | `/Version` | 版本控制 |

### 6.2 WebSocket 端点

| 端点 | 描述 |
|------|------|
| `/websocket/TimeTrialWebSocket/{id}` | 计时赛实时通信 |
| `/websocket/MatchRoomWebSocket` | 比赛房间通信 |
| `/websocket/MatchWebSocket` | 比赛实时同步 |

**WebSocket 消息类型 (MsgType)：**
```java
CreatePlayer = 0,      // 创建玩家
PlayerState = 1,       // 玩家状态同步
DelPlayer = 2,         // 删除玩家
MatchRoomCreate = 3,   // 创建房间
MatchRoomJoin = 4,     // 加入房间
MatchRoomStatus = 5,   // 房间状态
MatchRoomExit = 6,     // 退出房间
MatchRoomStart = 7     // 开始比赛
```

### 6.3 JWT 认证

- **Token 有效期**：14 小时
- **密钥**：oeRaQQ7Wo24sDqKSX3IM9ASGmdGPmkTd9jo1QTy4b7P9Ze5

---

## 7. 主要功能模块

### 7.1 游戏核心功能

| 功能 | 说明 |
|------|------|
| **登录注册** | 支持账号密码登录、JWT 认证、单机关卡切换 |
| **计时赛 (Time Trial)** | 单人计时挑战，支持排行榜 |
| **双人比赛 (Match)** | 实时多人匹配，2人对战 |
| **头像系统** | 热更新头像资源，购买和穿戴 |
| **装备系统** | 赛车配置 (速度、质量、动力等属性) |
| **技能系统** | 玩家技能学习和升级 |
| **AI 机器人** | 计时赛中可与机器人竞技 |
| **新手教程** | 可视化配置教程方案 |
| **路线规划** | 自定义赛道路线 |

### 7.2 后台管理功能

| 模块 | 功能 |
|------|------|
| **仪表盘** | 数据统计 (日活、月活、在线用户) |
| **用户管理** | 查看/编辑用户信息，封禁用户 |
| **头像管理** | 上架/下架头像 |
| **装备管理** | 配置赛车属性 |
| **比赛管理** | 查看比赛记录 |
| **计时赛管理** | 配置关卡 |
| **版本控制** | 版本发布、强制更新 |
| **资源管理** | Addressable 资源更新 |

---

## 8. 网络同步方案

### 8.1 双协议支持

```java
public enum NetType {
    WebSocket,  // TCP-based
    KCP         // UDP-based (低延迟)
}
```

### 8.2 同步策略

- **物理同步方式**：服务端计算物理状态，客户端同步
- **Nagle 算法**：减少小包发送，降低网络阻塞
- **消息队列缓冲**：处理高并发消息

---

## 9. 资源热更新

### 9.1 Addressable 系统

- 支持运行时资源下载和更新
- 启动流程：检查编辑器模式 → 下载资源 → 检查新版本 → 登录

### 9.2 HybridCLR 热修复

- 使用 `com.code-philosophy.hybridclr` 实现 C# 热修复
- 支持 AOT 动态加载

---

## 10. 构建与部署

### 10.1 客户端构建

- **支持平台**：Android (APK)、iOS (Xcode 项目)、WebGL
- **构建工具**：Gradle (IL2CPP)

### 10.2 服务端部署

```bash
cd CrazyCarServer
mvn clean package -DskipTests
java -jar target/crazy_car.jar --spring.profiles.active=prod
```

### 10.3 后台部署

```bash
cd CrazyCarBackground
npm install
npm run build:prod
# 部署 crazy_car_background/ 目录
```

---

## 11. 性能优化策略

| 优化项 | 说明 |
|--------|------|
| **合批策略** | 动态合批、静态合批、GPU Instancing、SRP Batcher |
| **LOD** | 根据距离切换模型精度 |
| **Mipmap** | 纹理多级渐进 |
| **遮挡剔除** | 距离剔除、平截头体剔除 |
| **网络同步** | 物理同步、KCP 协议 |

---

## 12. 关键文件路径

### 客户端核心文件

| 文件路径 | 功能 |
|----------|------|
| `Assets/Scripts/CrazyCar.cs` | 架构入口，注册所有 System/Model |
| `Assets/Scripts/System/NetworkSystem.cs` | 网络系统 |
| `Assets/Scripts/System/KCPSystem.cs` | KCP 协议实现 |
| `Assets/Scripts/Game/MPlayer.cs` | 玩家控制器 |
| `Assets/Scripts/Game/AIController.cs` | AI 控制器 |
| `Assets/Scripts/Game/MatchRoomSystem.cs` | 比赛房间系统 |

### 服务端核心文件

| 文件路径 | 功能 |
|----------|------|
| `CrazyCarApplication.java` | Spring Boot 启动类 |
| `MatchRoomWebSocket.java` | 比赛房间 WebSocket |
| `Util.java` | JWT Token 工具 |
| `data.sql` | 数据库初始化脚本 |

---

## 13. 项目特点总结

**CrazyCar** 是一个架构完整、技术栈现代的网络游戏项目，具有以下特点：

1. **架构成熟**：采用 QFramework 分层架构，代码组织清晰
2. **技术先进**：Unity URP + Addressable + HybridCLR + Spring Boot + Vue
3. **双协议支持**：KCP (低延迟) + WebSocket (兼容性)
4. **完整生态**：客户端 + 服务端 + 后台管理一体化
5. **性能优化**：完善的渲染、网络、资源管理优化策略
6. **文档完善**：README、开发文档、优化文档齐全

