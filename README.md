# CrazyCar
unity 制作前端游戏；Java+MySQL+Tomcat+Nginx部署服务器

## 环境版本

1. unity 2019.4.14
2. VS 2019
3. Eclipse Mars 1.4
4. JDK 1.8.0_91
5. JRE 1.8.0_91
6. MySQL 8.0.26
7. Tomcat 8.0.52
8. Nginx  1.20.1

## 服务器环境配置

### 一、配置服务器基本属性

1. 购买云服务器 [华为云](https://www.huaweicloud.com/?locale=zh-cn)
2. 设置云服务的安全组[入口](https://console.huaweicloud.com/lcs/?agencyId=0d551b5ba600f5841fd4c0182c6aa4b6&region=cn-south-1&locale=zh-cn#/lcs/manager/vmList/vmDetail/securitygroups?instanceId=410b1a5b-ee07-434a-8fea-c2c6e3b54a7d) ，华为云初始化会有三个安全组，其中有一个Web Server组是用来做Web开发的，它已经把80、443等网络端口开放，当然也可以自己去设定比如开放8080

### 二、配置Java环境

1. 下载JDK[安装](https://www.jdkdownload.com/) ，注意不是JRE，JDK中包含JRE
2. 配置Java的环境变量
3. 在CMD输入JVAV进行测试配置是否成功

### 三、配置Web服务器

1. 下载并安装[Tomcat](https://www.jdkdownload.com/)
2. 启动Tomcat
3. 浏览器输入localhost:8080，进行测试安装是否成功
4. 下载[Nginx](http://nginx.org/en/download.html)
5. 启动Nginx
6. 浏览器输入localhost:80，进行测试安装是否成功
7. 配置Nginx，将80端口映射成8080
8. 此时就可以直接通过访问IP地址，实现对8080端口的Tomcat下的Web项目

### 四、安装Eclipse Java EE

1. 官网已经停止此安装包，只能通过三方下载
2. 创建Servlet Web项目进行测试，注意此时的Eclipse可能只支持Tomcat8.0，不支持8.5，两个版本差别只在于，8.0多了一个图像界面
3. 服务器本地测试运行正常后，将项目打包成WAR包，复制到Tomcat的webapps文件夹下
4. 重启Tomcat后，Tomcat会自动解压文件夹
5. 此时应该可以从本地访问服务器，通过类似于http://IP/TestServlet/TestServlet的地址访问服务器

### 五、安装MySQL

1. 下载并安装[MySQL](https://dev.mysql.com/downloads/mysql/)
2. 根据下载的版本，下载相关[JDBC](https://mvnrepository.com/artifact/mysql/mysql-connector-java)
3. 将下载好的JAR包，一份复制到Eclipse中的Web项目下，并导入项目中；一份复制到Tomcat下的Lib文件夹
4. 根据测试项目进行连接测试，[菜鸟教程](https://www.runoob.com/java/java-mysql-connect.html)

### 六、数据传输格式制定

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

