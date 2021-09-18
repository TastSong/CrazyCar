package com.CrazyCarServer;

import java.io.IOException;
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
		JSONObject getJB = Util.getMsgData(request);		
		PrintWriter out = response.getWriter();		
        JSONObject outJB = new JSONObject();
        JSONObject userInfoJB = new JSONObject();
        String token = null;
		if(getJB != null && getJB.containsKey("UserName") && getJB.containsKey("Password")){
			if (isExistUser(getJB.getString("UserName"))){				
		        outJB.put("code", 423);
			} else{
				registerUser(getJB.getString("UserName"), getJB.getString("Password"));
				if (isExistUser(getJB.getString("UserName"))){				
			        outJB.put("code", 200);
			        String userName = getJB.getString("UserName");
			        token = Util.JWT.createJWTById(Util.getDataByName(userName, "uid"));
			        userInfoJB.put("name", getJB.getString("UserName"));
			        userInfoJB.put("uid", Util.getDataByName(userName, "uid"));
			        userInfoJB.put("aid", Util.getDataByName(userName, "aid"));
			        userInfoJB.put("star", Util.getDataByName(userName, "star"));
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
	
	private void registerUser(String userName, String password){
		int defaultAid = 1;
		int defaultCid = 0;
		int defaultStar = 14;
		String sql = "insert into all_user ( user_name, user_password, login_time, aid, star ) values" +
                       "(\"" + userName + "\"," + "\"" + password + "\"," + System.currentTimeMillis()/1000 + "," + defaultAid + ", " + defaultStar + ");";
		Util.JDBC.executeInsert(sql);
		sql = "select uid from all_user where user_name = "
				+ "\"" + userName + "\";";
		int uid = Util.JDBC.executeSelectInt(sql, "uid"); 
		//插入默认头像
		sql = "insert into avatar_uid ( aid, uid ) values" +
                "(" + defaultAid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);
		
		//送一张地图
		sql = "insert into time_trial_user_map ( cid, uid ) values" +
                "(" + defaultCid + "," + uid +  ");";
		Util.JDBC.executeInsert(sql);
		return;
	}

	private boolean isExistUser(String userName){
		String sql = "select user_password from all_user where user_name = "
				+ "\"" + userName + "\";";
		String rs = Util.JDBC.executeSelectString(sql, "user_password");
        return rs != null;		
	}
}
