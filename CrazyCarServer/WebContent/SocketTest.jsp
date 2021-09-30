<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
 <link rel="stylesheet" href="https://cdn.bootcss.com/bootstrap/4.0.0-beta/css/bootstrap.min.css">
  <script src="https://cdn.bootcss.com/jquery/3.2.1/jquery.min.js"></script>
  <script src="https://cdn.bootcss.com/popper.js/1.12.5/umd/popper.min.js"></script>
  <script src="https://cdn.bootcss.com/bootstrap/4.0.0-beta/js/bootstrap.min.js"></script>
<head>
<title>WebSocket的会话实现</title>
</head>
 
 
<body> <h2 style="text-align: center;">Welcome</h2>
<div style="margin-left: 7%;width: 50%;float: left;">
	<br />	<br />
 
    <input type="text" id="text" class="form-control" id="name">
 	<button onclick="send()">发送消息</button>
     <hr/>
     <button onclick="closeWebSocket()">关闭WebSocket连接</button>
     <hr/>
	<br /><hr>
	<!--userno:发送消息人的编号-->
	发送人:<div id="userno">Tast</div><br />
	接收人： <input type="text" id="usernoto"  
	class="form-control" id="name">
	</div>
	<div style="width: 40%;float: right;margin-top: 0%" id="message"></div>
	
</body>
 
 
<script type="text/javascript">
    var websocket = null;
    var userno=document.getElementById('userno').innerHTML;
    //判断当前浏览器是否支持WebSocket
    if ('WebSocket' in window) {
        websocket = new WebSocket("ws://localhost:8080/CrazyCarServer/websocket/SocketTest/"+userno);
    }
    else {
        alert('当前浏览器 Not support websocket')
    }
 
    //连接发生错误的回调方法
    websocket.onerror = function () {
        setMessageInnerHTML("WebSocket连接发生错误");
    };
 
 
    //连接成功建立的回调方法
    websocket.onopen = function () {
        setMessageInnerHTML("WebSocket连接成功");
    }
 
 
    //接收到消息的回调方法
    websocket.onmessage = function (event) {
        setMessageInnerHTML(event.data);
    }
 
 
    //连接关闭的回调方法
    websocket.onclose = function () {
        setMessageInnerHTML("WebSocket连接关闭JSP");
    }
 
 
    //监听窗口关闭事件，当窗口关闭时，主动去关闭websocket连接，防止连接还没断开就关闭窗口，server端会抛异常。
    window.onbeforeunload = function () {
        closeWebSocket();
    }
 
 
    //将消息显示在网页上
    function setMessageInnerHTML(sendMessage) {
        document.getElementById('message').innerHTML += sendMessage + '<br/>';
    }
 
 
    //关闭WebSocket连接
    function closeWebSocket() {
    	setMessageInnerHTML("关闭111WebSocket连接JSP");
        websocket.close();
    }
 
 
    //发送消息
    function send() {
        var message = document.getElementById('text').value;//要发送的消息内容
        var now=getNowFormatDate();//获取当前时间
        document.getElementById('message').innerHTML += (now+"发送人："+userno+'<br/>'+"---"+message) + '<br/>';
        document.getElementById('message').style.color="red";
        var ToSendUserno=document.getElementById('usernoto').value; //接收人编号：4567
        message=message+"|"+ToSendUserno//将要发送的信息和内容拼起来，以便于服务端知道消息要发给谁
        websocket.send(message);
    }
    //获取当前时间
    function getNowFormatDate() {
        var date = new Date();
        var seperator1 = "-";
        var seperator2 = ":";
        var month = date.getMonth() + 1;
        var strDate = date.getDate();
        if (month >= 1 && month <= 9) {
            month = "0" + month;
        }
        if (strDate >= 0 && strDate <= 9) {
            strDate = "0" + strDate;
        }
        var currentdate = date.getFullYear() + seperator1 + month + seperator1 + strDate
                + " " + date.getHours() + seperator2 + date.getMinutes()
                + seperator2 + date.getSeconds();
        return currentdate;
} 
</script>
</html>