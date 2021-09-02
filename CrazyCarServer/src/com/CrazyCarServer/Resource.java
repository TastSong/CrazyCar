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
		response.setContentType("text/html");
		System.out.println("Resource ...");

		PrintWriter out = response.getWriter();				
        JSONObject carJB = new JSONObject();        
        carJB.put("hash", GetContent("r_hash", "avatar"));
        carJB.put("crc", GetContent("r_crc", "avatar"));
        carJB.put("url", GetContent("r_url", "avatar"));
        carJB.put("size", GetContent("r_size", "avatar"));
        JSONObject dataJB = new JSONObject();
        dataJB.put("avatar", carJB);
        
        JSONObject outJB = new JSONObject();
		outJB.put("code", 200);
		outJB.put("data", dataJB);

		out.println(outJB.toString());	
		out.flush();
		out.close();
	}
	
	private String GetContent(String key, String r_name) {
		String sql = "select * from ab_resource where r_name = " + "\"" + r_name + "\";";
		String rs = Util.JDBC.ExecuteSelectString(sql, key);
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
