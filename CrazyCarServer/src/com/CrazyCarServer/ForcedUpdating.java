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
 * Servlet implementation class ForcedUpdating
 */
@WebServlet("/ForcedUpdating")
public class ForcedUpdating extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public ForcedUpdating() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (getJB != null && getJB.containsKey("platform") && getJB.containsKey("version")) {
			String version = getJB.getString("version");
			String platform = getJB.getString("platform");
			outJB.put("code", 200);
			dataJB.put("is_forced_updating", isForcedUpdating(version, platform));
			dataJB.put("url", getURL(platform));				
		} else {
			outJB.put("code", 404);
		}		
		outJB.put("data", dataJB);
		out.println(outJB.toString());
		out.flush();
		out.close();
	}
	
	private boolean isForcedUpdating(String version, String platform) {
		String sql = "select version from forced_updating where platform = " + "\"" + platform + "\";";
		String rs = Util.JDBC.executeSelectString(sql, "version");
		String[] latestVersionStr = rs.split("\\.");
		String[] curVersionStr = version.split("\\.");
		int latestVersion = Util.getSum(latestVersionStr);
		int curVersion = Util.getSum(curVersionStr);
		sql = "select rule from forced_updating where platform = " + "\"" + platform + "\";";
		int rule = Util.JDBC.executeSelectInt(sql, "rule");
		return (latestVersion - curVersion) >  rule || (latestVersion - curVersion) < 0;
	}
	
	private String getURL(String platform) {
		String sql = "select url from forced_updating where platform = " + "\"" + platform + "\";";
		String rs = Util.JDBC.executeSelectString(sql, "url");
		return rs;
	}
	

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
