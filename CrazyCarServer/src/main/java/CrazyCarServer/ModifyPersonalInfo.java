package CrazyCarServer;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Util.Util;
import com.alibaba.fastjson.JSONObject;

/**
 * Servlet implementation class ModifyPersonalInfo
 */
public class ModifyPersonalInfo extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ModifyPersonalInfo() {
        super();
         
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		response.setContentType("text/html;charset=UTF-8");	
		System.out.println("ModifyPersonalInfo...");
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
		if (getJB != null && getJB.containsKey("password")) {
			String password = getJB.getString("password");
			modifyPassword(uid, password);
			if (isPasswordRight(uid, password)){
				outJB.put("code", 200);
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
	
	private void modifyPassword(int uid, String password) {
		String sql = "update all_user set user_password = "
				+ "\"" + password + "\"" + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);
	}
	
	private boolean isPasswordRight(int uid, String password) {
		String sql = "select user_password from all_user where uid = " + uid + ";";
		String rs = Util.JDBC.executeSelectString(sql, "user_password");
		if (rs == null) {
			return false;
		} else {
			return rs.equals(password);
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
