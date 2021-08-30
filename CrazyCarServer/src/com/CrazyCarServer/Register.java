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
 * Servlet implementation class Register
 */
@WebServlet("/Register")
public class Register extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Register() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html");
		BufferedReader br = new BufferedReader(new InputStreamReader(request.getInputStream(),"utf-8"));
		String line = null;
		StringBuilder sb = new StringBuilder();
		while ((line = br.readLine()) != null) {
			sb.append(line);
		}
		System.out.println(sb.toString());
		JSONObject getJB = JSONObject.parseObject(sb.toString());
		
		PrintWriter out = response.getWriter();		
		//JSONArray jsonArray = new JSONArray();
        JSONObject outJB = new JSONObject();
        JSONObject userInfoJB = new JSONObject();
        String token = null;
		if(!sb.toString().isEmpty() && getJB.containsKey("UserName") && getJB.containsKey("Password")){
			//System.out.println(json.getString("UserName"));
			if (IsExistUser(getJB.getString("UserName"))){				
		        outJB.put("code", 423);
			} else{
				RegisterUser(getJB.getString("UserName"), getJB.getString("Password"));
				if (IsExistUser(getJB.getString("UserName"))){				
			        outJB.put("code", 200);
			        String userName = getJB.getString("UserName");
			        token = Util.JWT.createJWTById(Util.GetIdByName(userName, "user_id"));
			        userInfoJB.put("name", getJB.getString("UserName"));
			        userInfoJB.put("uid", Util.GetIdByName(userName, "user_id"));
			        userInfoJB.put("aid", Util.GetIdByName(userName, "aid"));
				} else{
			        outJB.put("code", 425);
				}
			}
		} else{
			outJB.put("code", 425);
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

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}
	
	private void RegisterUser(String userName, String password){
		int defaultAid = 1;
		String sql = "insert into all_user ( user_name, user_password, login_time, aid ) values" +
                       "(\"" + userName + "\"," + "\"" + password + "\"," + System.currentTimeMillis()/1000 + "," + defaultAid +  ");";
		Util.JDBC.ExecuteInsert(sql);
		sql = "select user_id from all_user where user_name = "
				+ "\"" + userName + "\";";
		int uid = Util.JDBC.ExecuteSelectInt(sql, "user_id"); 
		//≤Â»Îƒ¨»œÕ∑œÒ
		sql = "insert into avatar_index ( aid, user_id ) values" +
                "(" + defaultAid + "," + uid +  ");";
		Util.JDBC.ExecuteInsert(sql);
		return;
	}

	private boolean IsExistUser(String userName){
		String sql = "select user_password from all_user where user_name = "
				+ "\"" + userName + "\";";
		String rs = Util.JDBC.ExecuteSelectString(sql, "user_password");
        return rs != null;		
	}
}
