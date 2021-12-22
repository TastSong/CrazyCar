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
 * Servlet implementation class ChangeEquip
 */
public class ChangeEquip extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ChangeEquip() {
        super();
         
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
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
		if (getJB != null && getJB.containsKey("eid")) {
			int eid = getJB.getIntValue("eid");
			if (isHasEquip(eid, uid)) {
				setCurEquip(eid, uid);
				outJB.put("code", 200);
				dataJB.put("eid", eid);
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
	
	private boolean isHasEquip(int eid, int uid){
		String sql = "select eid from equip_uid where eid = "
				+  eid + " and " + " uid = " + uid + ";";
		return Util.JDBC.executeSelectInt(sql, "eid") != -1;
	}
	
	private void setCurEquip(int eid, int uid) {
		String sql = "update all_user set eid = "
				+  eid + " where uid = " + uid + ";";
		Util.JDBC.executeInsert(sql);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		 
		doGet(request, response);
	}

}
