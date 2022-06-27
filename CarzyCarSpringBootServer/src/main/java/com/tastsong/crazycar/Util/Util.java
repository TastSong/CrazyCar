package com.tastsong.crazycar.Util;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;

import com.alibaba.fastjson.JSONObject;

public class Util {
    public static JSONObject getMsgData(HttpServletRequest request) throws ServletException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(request.getInputStream(),"utf-8"));
		String line = null;
		StringBuilder sb = new StringBuilder();
		while ((line = br.readLine()) != null) {
			sb.append(line);
		}
		System.out.println(sb.toString());
		return JSONObject.parseObject(sb.toString());
	}

	public static int getSum(String[] str) {
		int result = 0;
		for (int i = 0; i < str.length; i++){
			result += Integer.parseInt(str[i]) * Math.pow(10, (str.length - i -1));
		}
		return result;
	}

	public static String getRequestName = "/CrazyCarSpringBootServer";
}
