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
		response.setContentType("text/html");
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);
		
		int userId = 0;
		String token = request.getHeader("Authorization");
		if (!Util.JWT.isLegalJWT(token)){
			System.out.println("illegal JWT");
			return;
		} else{
			userId = Util.JWT.getJWTId(token);
		}

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (getJB != null && getJB.containsKey("aid")) {
			int aid = getJB.getIntValue("aid");
			if (IshasAvatar(aid, userId)) {
				SetCurAvatar(aid, userId);
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
	
	private boolean IshasAvatar(int aid, int uid){
		String sql = "select aid from avatar_index where aid = "
				+  aid + " and " + " user_id = " + uid + ";";
		return Util.JDBC.ExecuteSelectInt(sql, "aid") != -1;
	}
	
	private void SetCurAvatar(int aid, int uid) {
		String sql = "update all_user set aid = "
				+  aid + " where user_id = " + uid + ";";
		Util.JDBC.ExecuteInsert(sql);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
