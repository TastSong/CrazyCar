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
        carJB.put("hash", "b455b172bd4eb91a8c6b391d34053f91");
        carJB.put("crc", "3591698713");
        carJB.put("url", "avatar");
        carJB.put("size", "0.1708");
        JSONObject dataJB = new JSONObject();
        dataJB.put("avatar", carJB);
        
        JSONObject outJB = new JSONObject();
		outJB.put("code", 200);
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

}
