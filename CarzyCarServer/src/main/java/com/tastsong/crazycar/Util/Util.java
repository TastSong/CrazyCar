package com.tastsong.crazycar.Util;

import java.util.HashMap;
import java.util.Map;

import cn.hutool.core.date.DateField;
import cn.hutool.core.date.DateTime;
import cn.hutool.jwt.JWTPayload;
import cn.hutool.jwt.JWTUtil;

public class Util {
	public static int getSum(String[] str) {
		int result = 0;
		for (int i = 0; i < str.length; i++){
			result += Integer.parseInt(str[i]) * Math.pow(10, (str.length - i -1));
		}
		return result;
	}

	public static String getRequestName = "/CrazyCarSpringBootServer";

	public static final String  TOKEN  = "authorization";

	private static final String JWT_KEY = "oeRaQQ7Wo24sDqKSX3IM9ASGmdGPmkTd9jo1QTy4b7P9Ze5";
	public static String createToken(Integer uid){
		DateTime now = DateTime.now();
		DateTime newTime = now.offsetNew(DateField.HOUR, 14);

		Map<String,Object> payload = new HashMap<>();
		//签发时间
		payload.put(JWTPayload.ISSUED_AT, now);
		//过期时间
		payload.put(JWTPayload.EXPIRES_AT, newTime);
		//生效时间
		payload.put(JWTPayload.NOT_BEFORE, now);
		//载荷
		payload.put("uid", uid);

		return JWTUtil.createToken(payload, JWT_KEY.getBytes());
	}

	public static boolean isLegalToken(String token){
		cn.hutool.jwt.JWT jwt = JWTUtil.parseToken(token);

		boolean verifyKey = jwt.setKey(JWT_KEY.getBytes()).verify();

		boolean verifyTime = jwt.validate(0);
		return verifyKey && verifyTime;
	}

	public static Integer getUidByToken(String token){
		cn.hutool.jwt.JWT jwt = JWTUtil.parseToken(token);
		return (Integer) jwt.getPayload("uid");
	}

	public static class MsgType {
		public int CreatePlayer = 0,
		PlayerState = 1,
		DelPlayer = 2,
		MatchRoomCreate = 3,
		MatchRoomJoin = 4,
		MatchRoomStatus = 5,
		MatchRoomExit = 6,
		MatchRoomStart = 7;
	}

	public static MsgType msgType = new MsgType();
}
