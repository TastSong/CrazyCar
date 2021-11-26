# CrazyCar
unity 制作前端游戏；Java+MySQL+Tomcat+Nginx部署服务器

## 框架结构

### 层级

* 表现层：ViewController 层

* 系统层：System 层

* 数据层：Model 层

* 工具层：Utility 层

### 规则

#### 表现层：

* 可以获取 System

* 可以获取 Model

* 可以发送 Command

* 可以监听 Event

#### 系统层：

* 可以获取 System

* 可以获取 Model

* 可以监听、发送 Event

* 可以获取 Utility

#### 数据层：

* 可以获取 Utility

* 可以发送 Event

#### 工具层：

* 集成第三方库，或者封装 API

#### Command (独立于层级之外)

* 可以获取 System

* 可以获取 Model

* 可以发送 Event

* 可以获取 Utility

* 可以发送 Command

### 框架-设计模式

1. ViewController将交互逻辑以Command方式实现；(命令模式)
2. ViewController将表现逻辑以Event方式表现；(观察者模式)
3. ViewController和System对Model的数据查询，用Qurey实现，从而使得查询变成充血模型；(中介者模式)
4. 四层的注册利用的原理为IOC；(外观模式) 
5. 四层的获取； (单例模式) 
5. 注册的时候利用接口初始化对象；(原型模式)

> 在[QFramework](https://github.com/liangxiegame/QFramework)上进行微改

## 数据传输格式制定

1. HTTP 数据传输格式指定为JSON

2. 选定JAR包为FastJson，[使用及下载地址](https://www.runoob.com/w3cnote/fastjson-intro.html)

3. 要注意JavaWeb项目的三方JAR，要在WebContent下的WEB-INF新建lib文件夹并放入，才能正常调用

4. 由于Unity系统内置的UnityWebRequest发送的数据为byte数组，所以在服务器端需要额外处理才能使用

   ```java
   protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
   		// TODO Auto-generated method stub
   		response.setContentType("text/html");
   
   		System.out.println("读取请求内容.");
   		BufferedReader br = new BufferedReader(new 		InputStreamReader(request.getInputStream(),"utf-8"));
   		String line = null;
   		StringBuilder sb = new StringBuilder();
   		while ((line = br.readLine()) != null) {
   			sb.append(line);
   		}
   		System.out.println(sb.toString());
   		JSONObject json = JSONObject.parseObject(sb.toString());
   		if(!sb.toString().isEmpty() && json.containsKey("key")){
   			System.out.println(json.getString("key"));
   		}
   
   
   		System.out.println("开始回复消息.");
   		PrintWriter out = response.getWriter();		
   		JSONArray jsonArray = new JSONArray();
           JSONObject jsonObject = new JSONObject();
           jsonObject.put("key", "value");
           jsonArray.add(jsonObject);
           // 此处为数组
   	    String jsonOutput = jsonArray.toJSONString();
   		//out.println(jsonObject.toString());
           out.println(jsonOutput);
   		out.flush();
   		out.close();
   	}
   ```


## 工具

### 一、EasyRoads3D

1. 使用的版本是V3.1.9pro版本，free版本不能用代码获取路线数据

2. 右键 ->  3D Object -> EasyRoads3D -> New Road Network

3. 在Road Network物体上选择`“＋”`进行新建路

4. 通过 `Shift` + 左键进行路线编辑

5. 新建空物体物体 `RouteNet`，并在它下面建立空子物体`Line0001`，分别赋值脚本`RouteNet.cs`以及`CatmullRomSpline.cs`，并给两个脚本赋值上相关引用和初始值

   内容为：

   ```c#
   using System.Collections.Generic;
   using UnityEngine;
   
   public class RouteNet : MonoBehaviour
   {
       [SerializeField] public CatmullRomSpline[] allRoutes;
   }
   ```

   ```c#
   using System.Collections.Generic;
   using UnityEngine;
   
   public partial class CatmullRomSpline : MonoBehaviour
   {
       public string __roadName;
       public int resolution;
       public List<Vector3> positions;
   }
   ```

6. 新建编辑器脚本，并放入`Editor`文件夹

   ```c#
   using UnityEditor;
   using UnityEngine;
   using EasyRoads3Dv3;
   using System.Collections.Generic;
   
   [CustomEditor(typeof(RouteNet))]
   public class RouteNetEditor : Editor
   {
   
       private RouteNet rNet;
   
       public ERRoad markers;
   
       public override void OnInspectorGUI() {
           rNet = target as RouteNet;
           base.OnInspectorGUI();
   
           EditorGUI.BeginChangeCheck();
   
           if (GUILayout.Button("BuildAllRoute")) {
               Undo.RecordObject(target, "BuildAllRoute");
   
               ERRoadNetwork net = new ERRoadNetwork();
               foreach (var r in rNet.allRoutes) {
                   Debug.Log("Road Name : " + r.__roadName + " Points Count " + r.positions.Count);
                   markers = net.GetRoadByName(r.__roadName);
                   if (markers == null) {
                       Debug.LogError("NO SUCH ROAD.....CANCELED......");
                       continue;
                   }
   
                   r.resolution = 50;
                   Vector3[] arr = markers.GetSplinePointsCenter();
                   r.positions = new List<Vector3>(arr);
                   for (int i = 0; i < r.positions.Count; i++) {
                       //Debug.Log(r.positions[i]);
                   }
               }
               EditorUtility.SetDirty(target);
           }
       }
   }
   ```

7. 此时在`RouteNet`物体上的脚本出现`BuildAllRoute`按钮，点击按钮就能获取相关路线的数据

### 二、JWT身份验证

1. 基本原理 [五分钟带你了解啥是JWT - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/86937325) 
2. `Unity`将`Token`放入`Authorization`部分，代码 ： `request.SetRequestHeader("Authorization", token);`
3. 后台通过 `request.getHeader("Authorization");`获取`Token`
4. 后台生成的`Token`中的`Id`部分为用户`Id`

### 三、DOTween

1. 动画插件

### 四、Cinemachine(官方插件)

1. 虚拟摄像机，用来追踪Player

## 功能

### 一、资源热更

#### 前端

```mermaid
graph LR
Start-->IsEditor{IsEditor}--No-->PostResource-->HaveNewResource{HaveNewResource}--Hava-->DownloadResource-->IsFinish--No-->Exit-->End;
IsEditor--Yes-->Login;
HaveNewResource--NotHava-->Login;
IsFinish--Yes-->Login-->End
```



#### 后台

1. 接口：`Host/Resource`

2. Parameter

   | Field | Type | Description |
   | :---- | :--- | :---------- |
   | -     | -    | -           |

3. Success Callback 

   ```
   {
       "code":200,
       "data":{
           "avatar":{
               "size":"0.1289",
               "crc":"1242346442",
               "hash":"9370cfe1c8e8884648f086b820bca347",
               "url":"avatar"
           }
       }
   }
   ```

4. Error Code

   | Field | Description  |
   | :---- | :----------- |
   | ! 200 | 拉取接口失败 |

5. Flow  Chart

   ```mermaid
   graph LR
   Start-->Resource-->GetDataFromDB-->200-->End;
   ```

#### 数据库

1. 表名：`ab_resource`

2. Parameter

   | Field              | Type         | Description |
   | :----------------- | :----------- | :---------- |
   | r_id (primary key) | int          | 资源ID      |
   | r_name             | varchar(100) | 资源名      |
   | r_hash             | VARCHAR(40)  | 资源Hash    |
   | r_crc              | VARCHAR(40)  | 资源CRC     |
   | r_url              | VARCHAR(40)  | 资源URL     |
   | r_size             | VARCHAR(40)  | 资源Size    |

#### 使用方法

> 例如头像需要给线上版本添加新的资源

1. 将新头像放入`Assets\AB\Avatar`文件夹
2. 点击`Window/Build/AB/Remote`编辑资源包
3. 完成后在`Console`上会显示资源的`CRC`和`Hash`,文件大小需要到文件管理器查看
4. 将数据更新到数据库ab_resource表中

### 二、登录

#### 前端 

```mermaid
graph LR
start-->LoginUI-->IsRemember{IsRemember}--Yes-->ClickLoginBtn-->PostLogin-->IsSucc{IsSucc}--Yes-->HomepageUI-->End;
IsRemember--No-->EditUserName-->ClickLoginBtn;
IsSucc--No-->EditUserName;
```



#### 后台

1. 接口：`Host/Login`

2. Parameter

   | Field    | Type   | Description |
   | :------- | :----- | :---------- |
   | UserName | string | 用户名      |
   | Password | string | 密码        |

3. Success Callback 

   ```
   {
       "code":200,
       "data":{
           "user_info":{
               "uid":1,
               "star":13,
               "name":"tast",
               "aid":12
           },
           								"token":"eyJhbGciOiJIUzI1NiJ9.eyJqdGkiOiIxIiwiaWF0IjoxNjMxOTQ1Njc5LCJzdWIiOiJDcmF6eUNhciIsImlzcyI6IlRhc3RTb25nIiwiZXhwIjoxNjMxOTUxNjc5fQ.7_5peioQaU1XmMR238H0sIcdlJjUG2XbzHrD-9PojUY"
       }
   }
   ```

4. Error Code

   | Field | Description |
   | :---- | :---------- |
   | 423   | 密码错误    |
   | 404   | 用户未注册  |

5. Flow Chart

   ```mermaid
   graph LR
   Start-->Login-->IsExistUser{IsExistUser}--Yes-->IsPasswordRight{IsPasswordRight}--Right-->CreateToken-->200-->End;
   IsExistUser--No-->404-->End;
   IsPasswordRight--No-->423-->End;
   ```

   

#### 数据库

1. 表名：`all_user`

2. Parameter

   | Field             | Type         | Description |
   | :---------------- | :----------- | :---------- |
   | uid (primary key) | int          | 用户ID      |
   | user_name         | varchar(100) | 用户名      |
   | user_password     | VARCHAR(40)  | 密码        |
   | login_time        | int          | 注册时间    |
   | aid               | int          | 当前头像ID  |
   | star              | int          | 星星数      |

### 三、注册

#### 前端 

```mermaid
graph LR
start-->LoginUI-->ClickRegisterBotton-->EidtUserName-->ClickRegisterBtn-->IsLegalInput{IsLegalInput}--Yes-->PostRequest-->IsSucc{IsSucc}--Yes-->HomepageUI-->End;
IsLegalInput--No-->EidtUserName;
IsSucc--No-->EidtUserName;
```



#### 后台

1. 接口：`Host/Register`

2. Parameter

   | Field    | Type   | Description |
   | :------- | :----- | :---------- |
   | UserName | string | 用户名      |
   | Password | string | 密码        |

3. Success Callback 

   ```
   {
       "code":200,
       "data":{
           "user_info":{
               "uid":7,
               "star":14,
               "name":"Taylor",
               "aid":1
           },
           "token":"eyJhbGciOiJIUzI1NiJ9.eyJqdGkiOiI3IiwiaWF0IjoxNjMxOTQ5NTQ1LCJzdWIiOiJDcmF6eUNhciIsImlzcyI6IlRhc3RTb25nIiwiZXhwIjoxNjMxOTU1NTQ1fQ.d82x7zabQtVaXogi5wdp0M1tPz4ybyi_3grsThnL83c"
       }
   }
   ```

4. Error Code

   | Field | Description  |
   | :---- | :----------- |
   | 423   | 用户已注册   |
   | 425   | 信息格式不对 |

5. Flow Chat

   ```mermaid
   graph LR
   Start-->Register-->IsExistUser{IsExistUser}--Yes-->423-->End;
   IsExistUser--No-->RegisterUser-->IsExistUser2{IsExistUser}--Yes-->CreateToken-->200-->End;
   IsExistUser2--No-->425-->End;
   ```

   

#### 数据库

1. 表名：`all_user`

2. Parameter

   | Field             | Type         | Description |
   | :---------------- | :----------- | :---------- |
   | uid (primary key) | int          | 用户ID      |
   | user_name         | varchar(100) | 用户名      |
   | user_password     | VARCHAR(40)  | 密码        |
   | login_time        | int          | 注册时间    |
   | aid               | int          | 当前头像ID  |
   | star              | int          | 星星数      |

### 四、头像

#### 前端 

```mermaid
graph TB
start-->ClickHomepageAvatarBtn-->PostAvatar-->UpdataUI;
UpdataUI-->ClickUnlockAvatar-->ClickApplyBtn-->PostChangeAvatar-->IsSucc0{IsSucc}--Yes-->UpdataCurAvatarUI-->ChangeCurAvatar-->End;
UpdataUI-->ClickLockAvatar-->IsBuy{IsBuy}--Yes-->IsEnoughStar--Yes-->PostBuyAvatar-->IsSucc1{IsSucc}--Yes-->ClickUnlockAvatar;
IsBuy--No-->End;
IsEnoughStar--No-->End;
IsSucc1--No-->End;
```



#### 后台

1. * 接口：`Host/Avarar`

   * Parameter

     | Field | Type | Description |
     | :---- | :--- | :---------- |
     | -     | -    | -           |

   * Success Callback 

     ```
     {
        "code":200,
         "data":{
             "current_aid":12,
             "avatars":[
                 {
                     "star":3,
                     "name":"Tast 0",
                     "is_has":true,
                     "aid":0
                 },
                 {
                     "star":2,
                     "name":"Black 1",
                     "is_has":false,
                     "aid":1
                 }
             ]
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | -     | -           |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetAllAvatarID-->isHasAvatar-->200-->End;
     GetUidByToken--No-->End;
     ```

     

2. * 接口：`Host/ChangeAvatar`

   * Parameter

     | Field | Type | Description      |
     | :---- | :--- | :--------------- |
     | aid   | int  | 想要切换的头像ID |

   * Success Callback 

     ```
     {
         "code":200,
         "data":{
             "aid":2
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | 423   | 未拥有      |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetAidByRequest{GetAidByRequest}--Yes-->IsHavaAvatar{IsHavaAvatar}--Yes-->SetAvatar-->200-->End;
     GetUidByToken--No-->End;
     GetAidByRequest--No-->404-->End;
     IsHavaAvatar--No-->423-->End;
     ```

     

3. * 接口：`Host/BuyAvatar`

   * Parameter

     | Field | Type | Description      |
     | :---- | :--- | :--------------- |
     | aid   | int  | 想要购买的头像ID |

   * Success Callback 

     ```
     {
         "code":200,
         "data":{
             "star":10
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | 423   | 星星不足    |
     
   * Flow Chat
   
     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetAidByRequest{GetAidByRequest}--Yes-->IsHavaAvatar{IsHavaAvatar}--Yes-->200-->End;
     GetUidByToken--No-->End;
     GetAidByRequest--No-->404-->End;
     IsHavaAvatar--No-->CanBuyAvatar{CanBuyAvatar}--Yes-->BuyAvatar-->200;
     CanBuyAvatar--No-->423-->End;
     ```
   
     

#### 数据库

1. * 表名：`avatar_name`

   * Parameter

     | Field            | Type        | Description    |
     | :--------------- | :---------- | :------------- |
     | id (primary key) | int         | ID             |
     | aid              | int         | 头像ID         |
     | avatar_name      | VARCHAR(40) | 头像名         |
     | star             | int         | 开锁所需星星数 |

2. * 表名：`avatar_uid`

   * Parameter

     | Field            | Type | Description |
     | :--------------- | :--- | :---------- |
     | id (primary key) | int  | ID          |
     | aid              | int  | 头像ID      |
     | uid              | int  | 用户ID      |

### 五、计时赛详情

#### 前端 

```mermaid
graph TB
start-->PostTimeTrialDetail-->UpdataUI-->ClickUnlock-->JoinGame-->End;
UpdataUI-->ClickLock-->IsBuy{IsBuy}--Yes-->IsEnoughStar--Yes-->PostBuy-->IsSucc{IsSucc}--Yes-->ClickUnlock;
IsBuy--No-->End;
IsEnoughStar--No-->End;
IsSucc--No-->End;
```



#### 后台

1. * 接口：`Host/TimeTrialDetail`

   * Parameter

     | Field | Type | Description |
     | :---- | :--- | :---------- |
     | -     | -    | -           |

   * Success Callback 

     ```
     {
         "code":200,
         "data":[
             {
                 "star":2,
                 "map_id":0,
                 "name":"Map 0",
                 "is_has":true,
                 "cid":0,
                 "times":2,
                 "limit_time":60
             },
             {
                 "star":1,
                 "map_id":1,
                 "name":"Map 1",
                 "is_has":true,
                 "cid":1,
                 "times":2,
                 "limit_time":70
             }
         ]
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | -     | -           |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetAllClassID-->200-->End;
     GetUidByToken--No-->End;
     ```

     

2. * 接口：`Host/BuyTimeTrialClass

   * Parameter

     | Field | Type | Description      |
     | :---- | :--- | :--------------- |
     | cid   | int  | 想要购买的课程ID |

   * Success Callback 

     ```
     {
         "code":200,
         "data":{
             "star":10
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | 423   | 星星不足    |
     
   * Flow Chat
   
     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetCidByRequest{GetCidByRequest}--Yes-->IsHavaClass{IsHavaClass}--Yes-->200-->End;
     GetUidByToken--No-->End;
     GetCidByRequest--No-->404-->End;
     IsHavaClass--No-->CanBuyClass{CanBuyClass}--Yes-->BuyClass-->200;
     CanBuyClass--No-->423-->End;
     ```
   
     

#### 数据库

1. * 表名：`time_trial_class`

   * Parameter

     | Field             | Type        | Description    |
     | :---------------- | :---------- | :------------- |
     | cid (primary key) | int         | 课程ID         |
     | map_id            | int         | 地图ID         |
     | class_name        | VARCHAR(40) | 课程名         |
     | star              | int         | 开锁所需星星数 |
     | limit_time        | int         | 限制时间       |

2. * 表名：`time_trial_user_map`

   * Parameter

     | Field            | Type | Description |
     | :--------------- | :--- | :---------- |
     | id (primary key) | int  | ID          |
     | cid              | int  | 课程ID      |
     | uid              | int  | 用户ID      |

### 六、计时赛记录

#### 前端 

```mermaid
graph LR
start-->JoinGame-->IsArriveLimitTime-->TimeTrialResultUI-->PostResult-->IsSucc{IsSucc}--Yes-->ShowRankAndResult-->End;
JoinGame-->CompleteGame-->TimeTrialResultUI;
IsSucc--No-->End;
```



#### 后台

1. 接口：`Host/TimeTrialResult`

2. Parameter

   | Field         | Type | Description            |
   | :------------ | :--- | :--------------------- |
   | uid           | int  | 用户ID                 |
   | cid           | int  | 课程ID                 |
   | complete_time | int  | 完成时间(-1代表未完成) |

3. Success Callback 

   ```
   {
       "code":200,
       "data":{
           "is_break_record":false,
           "complete_time":16,
           "is_win":true, // 按时完成比赛
           "rank":-1 // 为打破之前成绩记录，所以成绩不上榜
       }
   }
   ```

4. Error Code

   | Field | Description |
   | :---- | :---------- |
   | -     | -           |
   
5. Flow Chat

   ```mermaid
   graph LR
   Start-->IsLegalJWT{IsLegalJWT}--Yes-->GetDataByRequest{GetDataByRequest}--Yes-->InsertDataToDB-->200-->End;
   IsLegalJWT-->End;
   GetDataByRequest--No-->404-->End;
   ```

   

#### 数据库

1. 表名：`time_trial_record`

2. Parameter

   | Field            | Type | Description  |
   | :--------------- | :--- | :----------- |
   | id (primary key) | int  | ID           |
   | uid              | int  | 用户ID       |
   | cid              | int  | 课程ID       |
   | complete_time    | int  | 完成时间     |
   | record_time      | int  | 上传记录时间 |

### 七、计时赛榜单

#### 前端 

```mermaid
graph LR
start-->TimeTrialResultUI-->PostRankRequest-->IsSucc{IsSucc}--Yes-->ShowRank-->End;
IsSucc--No-->End;
```



#### 后台

1. 接口：`Host/TimeTrialRank`

2. Parameter

   | Field | Type | Description |
   | :---- | :--- | :---------- |
   | cid   | int  | 课程ID      |

3. Success Callback 

   ```
   {
       "code":200,
       "data":[
           {
               "complete_time":10,
               "name":"qwe",
               "rank":1,
               "aid":2
           },
           {
               "complete_time":14,
               "name":"Tast",
               "rank":2,
               "aid":2
           },
           {
               "complete_time":14,
               "name":"asd",
               "rank":3,
               "aid":1
           }
       ]
   }
   ```

4. Error Code

   | Field | Description |
   | :---- | :---------- |
   | -     | -           |
   
5. Flow Chat

   ```mermaid
   graph LR
   Start-->IsLegalJWT{IsLegalJWT}--Yes-->GetDataByRequest{GetDataByRequest}--Yes-->GetDataByDB-->200-->End;
   IsLegalJWT-->End;
   GetDataByRequest--No-->404-->End;
   ```

   

#### 数据库

1. 表名：`time_trial_rank_0` 临时表

2. Parameter

   | Field             | Type | Description |
   | :---------------- | :--- | :---------- |
   | uid (primary key) | int  | 用户ID      |
   | rank              | int  | 排名        |
   | aid               | int  | 用户头像ID  |
   | complete_time     | int  | 完成时间    |
   | name              | int  | 用户名      |

### 八、强制更新

#### 前端 

```mermaid
graph LR
start-->IsEditor{IsEditor}--No-->BeforeRequestRes-->PostIsForcedUpdating--Yes-->SkipDownload-->Updating-->End;
IsEditor--Yes-->End;
PostIsForcedUpdating--No-->End;
```



#### 后台

1. 接口：`Host/ForcedUpdating`

2. Parameter

   | Field    | Type   | Description |
   | :------- | :----- | :---------- |
   | platform | string | 平台        |
   | version  | string | 版本号      |

3. Success Callback 

   ```
   {
       "code":200,
       "data":{
       	is_forced_updating : false,
       	url : "http://"
       }
   }
   ```

4. Error Code

   | Field | Description |
   | :---- | :---------- |
   | -     | -           |

5. Flow Chat

   ```mermaid
   graph LR
   Start-->GetDataFromRequest--Yes-->GetCurVersionByPlatform-->GetCurRuleByPlatform-->CheckDataByRule--Yes-->ReturnTrue-->End;
   GetDataFromRequest--No-->End;
   CheckDataByRule--No-->ReturnFalse-->End;
   ```


#### 数据库

1. 表名：`forced_updating` 

2. Parameter

   | Field            | Type   | Description |
   | :--------------- | :----- | :---------- |
   | id (primary key) | int    | ID          |
   | platform         | string | 平台        |
   | version          | string | 当前版本号  |
   | rule             | string | 规则        |
   | url              | string | 下载地址    |

### 九、装备

#### 前端 

```mermaid
graph LR
start-->ChangeCarUI-->PostEquipRequest-->SetItemContent-->ClickItem-->ChangeEquip-->End
```



#### 后台

1. * 接口：`Host/Equip`

   * Parameter

     | Field | Type | Description |
     | :---- | :--- | :---------- |
     | -     | -    | -           |

   * Success Callback 

     ```
     {
         "code":200,
         "data":{
             "equips":[
                 {
                     "eid":0,
                     "star":3,
                     "mass":25,
                     "equip_name":"F1 Blue",
                     "max_speed":50,
                     "is_has":true,
                     "rid":"R_Car_F1_Blue",
                     "speed":30,
                     "is_show":true
                 },
                 {
                     "eid":1,
                     "star":2,
                     "mass":25,
                     "equip_name":"MonsterTruck Red",
                     "max_speed":52,
                     "is_has":true,
                     "rid":"R_Car_MonsterTruck_Red",
                     "speed":38,
                     "is_show":true
                 }
             ]
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | -     | -           |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->IsLegalJWT{IsLegalJWT}--Yes-->GetUid-->GetDataByDB-->PostData-->End;
     IsLegalJWT--No-->Return-->End;
     ```

     

2. * 接口：`Host/ChangeEquip`

   * Parameter

     | Field | Type | Description      |
     | :---- | :--- | :--------------- |
     | eid   | int  | 想要切换的装备ID |

   * Success Callback 

     ```
     {
         "code":200,
         "data":{
             "eid":2
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | 423   | 未拥有      |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetEidByRequest{GetEidByRequest}--Yes-->IsHavaEquip{IsHavaEquip}--Yes-->SetEquip-->200-->End;
     GetUidByToken--No-->End;
     GetEidByRequest--No-->404-->End;
     IsHavaEquip--No-->423-->End;
     ```

     

3. * 接口：`Host/BuyEquip`

   * Parameter

     | Field | Type | Description      |
     | :---- | :--- | :--------------- |
     | aid   | int  | 想要购买的头像ID |

   * Success Callback 

     ```
     {
         "code":200,
         "data":{
             "star":10
         }
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | 423   | 星星不足    |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->GetUidByToken{GetUidByToken}--Yes-->GetEidByRequest{GetEidByRequest}--Yes-->IsHavaEquip{IsHavaEquip}--Yes-->200-->End;
     GetUidByToken--No-->End;
     GetEidByRequest--No-->404-->End;
     IsHavaEquip--No-->CanBuyEquip{CanBuyEquip}--Yes-->BuyEquip-->200;
     CanBuyEquip--No-->423-->End;
     ```

     

#### 数据库

1. * 表名：`all_equip`

   * Parameter

     | Field            | Type   | Description  |
     | :--------------- | :----- | :----------- |
     | id (primary key) | int    | ID           |
     | eid              | int    | 装备ID       |
     | rid              | string | 前端Prefab名 |
     | equip_name       | string | 完成时间     |
     | star             | int    | 用户名       |
     | mass             | int    | 车重         |
     | speed            | int    | 车的普通速度 |
     | max_speed        | int    | 车的最大速度 |
     | is_show          | int    | 是否展示     |

2. * 表名：`equip_uid`

   * Parameter

     | Field            | Type | Description |
     | :--------------- | :--- | :---------- |
     | id (primary key) | int  | ID          |
     | eid              | int  | 装备ID      |
     | uid              | int  | 用户ID      |

#### 

### 十、比赛详情

#### 前端 

```mermaid
graph LR
start-->PostMatchDetail-->UpdataUI-->JoinGame-->End;
```



#### 后台

1. * 接口：`Host/MatchDetail`

   * Parameter

     | Field | Type | Description |
     | :---- | :--- | :---------- |
     | -     | -    | -           |

   * Success Callback 

     ```
     {
         "code":200,
         "data":[
             {
                 "start_time":1633748594,
                 "times":1,
                 "star":2,
                 "enroll_time":1633748534,
                 "map_id":0,
                 "name":"TastSong",
                 "cid":7,
                 "limit_time":60
             }
         ]
     }
     ```

   * Error Code

     | Field | Description |
     | :---- | :---------- |
     | -     | -           |

   * Flow Chat

     ```mermaid
     graph LR
     Start-->GetAllClassID-->200-->End;
     ```


#### 数据库

1. * 表名：`match_class`

   * Parameter

     | Field             | Type        | Description      |
     | :---------------- | :---------- | :--------------- |
     | cid (primary key) | int         | 课程ID           |
     | map_id            | int         | 地图ID           |
     | class_name        | VARCHAR(40) | 课程名           |
     | star              | int         | 开锁所需星星数   |
     | limit_time        | int         | 限制时间         |
     | start_time        | long        | 比赛开始时间     |
     | enroll_time       | long        | 比赛可以进入时间 |


### 十一、比赛榜单

#### 前端 

```mermaid
graph LR
start-->JoinGame-->IsArriveLimitTime-->MatchResultUI-->PostResult-->IsSucc{IsSucc}--Yes-->ShowRank-->End;
JoinGame-->CompleteGame-->MatchResultUI;
IsSucc--No-->End;
```



#### 后台

1. 接口：`Host/MatchResult`

2. Parameter

   | Field         | Type | Description            |
   | :------------ | :--- | :--------------------- |
   | uid           | int  | 用户ID                 |
   | cid           | int  | 课程ID                 |
   | complete_time | int  | 完成时间(-1代表未完成) |

3. Success Callback 

   ```
   {
       "code":200,
       "data":{
           "reward":2,
           "is_break_record":true,
           "complete_time":22,
           "is_win":true,
           "rank":[
               {
                   "complete_time":22,
                   "name":"Tast",
                   "rank":1,
                   "aid":2
               }
           ]
       }
   }
   ```

4. Error Code

   | Field | Description |
   | :---- | :---------- |
   | -     | -           |

5. Flow Chat

   ```mermaid
   graph LR
   Start-->IsLegalJWT{IsLegalJWT}--Yes-->GetDataByRequest{GetDataByRequest}--Yes-->InsertDataToDB-->200-->End;
   IsLegalJWT-->End;
   GetDataByRequest--No-->404-->End;
   ```

   

#### 数据库

1. * 表名：`match_record`

   * Parameter

     | Field            | Type | Description  |
     | :--------------- | :--- | :----------- |
     | id (primary key) | int  | ID           |
     | uid              | int  | 用户ID       |
     | cid              | int  | 课程ID       |
     | complete_time    | int  | 完成时间     |
     | record_time      | int  | 上传记录时间 |

2. * 临时表名：`match_rank_0`

   * Parameter

     | Field             | Type | Description |
     | :---------------- | :--- | :---------- |
     | uid (primary key) | int  | 用户ID      |
     | rank              | int  | 排名        |
     | aid               | int  | 用户头像ID  |
     | complete_time     | int  | 完成时间    |
     | name              | int  | 用户名-+-   |
