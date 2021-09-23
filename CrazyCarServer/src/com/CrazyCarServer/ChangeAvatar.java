package com.CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.Util.Util;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class ChangeAvatar
 */
@WebServlet("/ChangeAvatar")
public class ChangeAvatar extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ChangeAvatar() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		
		int uid = 0;
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} else{
			uid = Util.JWT.getJWTId(token);
		}
		
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (getJB != null && getJB.containsKey("aid")) {
			int aid = getJB.getIntValue("aid");
			if (isHasAvatar(aid, uid)) {
				setCurAvatar(aid, uid);
				outJB.put("code", 200);
				dataJB.put("aid", aid);
			} else {
				outJB.put("code", 423);
			}
		} else {
			outJB.put("code", 404);
		}			

		outJB.put("data", dataJB);

		out.println(outJB.toString());
		out.flush();
		out.close();			
	}
	
	private boolean isHasAvatar(int aid, int uid){
		String sql = "select aid from avatar_uid where aid = "
				+  aid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "aid") != -1;
	}
	
	private void setCurAvatar(int aid, int uid) {
		String sql = "update all_user set aid = "
				+  aid + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
