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
 * Servlet implementation class Resource
 */
@WebServlet("/Resource")
public class Resource extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Resource() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=UTF-8");
		System.out.println("Resource ...");

		PrintWriter out = response.getWriter();				
        JSONObject avatarJB = new JSONObject();        
        avatarJB.put("hash", getContent("r_hash", "avatar"));
        avatarJB.put("crc", getContent("r_crc", "avatar"));
        avatarJB.put("url", getContent("r_url", "avatar"));
        avatarJB.put("size", getContent("r_size", "avatar"));
        JSONObject equipJB = new JSONObject();        
        equipJB.put("hash", getContent("r_hash", "equip"));
        equipJB.put("crc", getContent("r_crc", "equip"));
        equipJB.put("url", getContent("r_url", "equip"));
        equipJB.put("size", getContent("r_size", "equip"));
        JSONObject dataJB = new JSONObject();
        dataJB.put("avatar", avatarJB);
        dataJB.put("equip", equipJB);
        
        JSONObject outJB = new JSONObject();
		outJB.put("code", 200);
		outJB.put("data", dataJB);

		out.println(outJB.toString());	
		out.flush();
		out.close();
	}
	
	private String getContent(String key, String r_name) {
		String sql = "select * from ab_resource where r_name = " + "\"" + r_name + "\";";
		String rs = Util.JDBC.executeSelectString(sql, key);
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
