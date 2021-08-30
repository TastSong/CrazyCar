package com.CrazyCarServer;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class Login
 */
@WebServlet("/Login")
public class Login extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Login() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html");
		System.out.println("Login ...");
		BufferedReader br = new BufferedReader(new InputStreamReader(request.getInputStream(),"utf-8"));
		String line = null;
		StringBuilder sb = new StringBuilder();
		while ((line = br.readLine()) != null) {
			sb.append(line);
		}
		System.out.println(sb.toString());
		JSONObject getJB = JSONObject.parseObject(sb.toString());
		
		//System.out.println("开始回复消息.");
		PrintWriter out = response.getWriter();		
        JSONObject outJB = new JSONObject();
        JSONObject userInfoJB = new JSONObject();
        String token = null;
		if(!sb.toString().isEmpty() && getJB.containsKey("UserName") && getJB.containsKey("Password") && 
				IsExistUser(getJB.getString("UserName"))){
			String userName = getJB.getString("UserName");
			if (IsPasswordRight(getJB.getString("UserName"), getJB.getString("Password"))){
		        outJB.put("code", 200);
		        token = Util.JWT.createJWTById(Util.GetIdByName(userName, "user_id"));
		        userInfoJB.put("name", getJB.getString("UserName"));
		        userInfoJB.put("uid", Util.GetIdByName(userName, "user_id"));
		        userInfoJB.put("aid", Util.GetIdByName(userName, "aid"));
			} else{
		        outJB.put("code", 423);
			}
		} else{
			outJB.put("code", 404);
		}
		JSONObject jb = new JSONObject();
		jb.put("user_info", userInfoJB);
		JSONObject dataJB = new JSONObject();
		dataJB.put("user_info", userInfoJB);
		dataJB.put("token", token);

		outJB.put("data", dataJB);
		
		out.println(outJB.toString());	
		out.flush();
		out.close();
	}
	
	private boolean IsPasswordRight(String userName, String password){
		String sql = "select user_password from all_user where user_name = "
				+ "\"" + userName + "\";";
		String rs = Util.JDBC.ExecuteSelectString(sql, "user_password");
		if (rs == null){
			return false;
		} else{
	        return rs.equals(password);	
		}	
	}
	
	private boolean IsExistUser(String userName){
		String sql = "select user_password from all_user where user_name = "
				+ "\"" + userName + "\";";
		String rs = Util.JDBC.ExecuteSelectString(sql, "user_password");
        return rs != null;		
	}
	

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
