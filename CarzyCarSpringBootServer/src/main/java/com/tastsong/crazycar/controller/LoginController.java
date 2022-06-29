package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.LoginService;

import cn.hutool.json.JSONObject;
import lombok.extern.slf4j.Slf4j;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1")
@Slf4j
public class LoginController {
	@Autowired
	private LoginService loginService;

	@PostMapping(value = "/Login")
	public Object login(@RequestBody JSONObject body) throws Exception {
		if (body != null && body.containsKey("UserName") && body.containsKey("Password")
				&& loginService.isExistsUser(body.getStr("UserName"))) {
			String userName = body.getStr("UserName")		;
			String password = body.getStr("Password");
			UserModel userModel = loginService.getUserByName(userName);
			log.info("login : userName = " + userName + "; password  = " + password);
			if (password.equals(userModel.user_password)){
				return loginService.getUserInfo(userName);
			} else{
				return Result.failure(ResultCode.RC423);
			}
		} else {
			return Result.failure(ResultCode.RC404);
		}
	}

	@GetMapping (value = "/TestJWT")
	public Object testJWT(@RequestHeader(Util.TOKEN) String token){
		log.info(Util.getUidByToken(token).toString());
		return Util.isLegalToken(token);
	}

	@PostMapping (value = "/Register")
	public Object register(@RequestBody JSONObject body) throws Exception{
		if(body != null && body.containsKey("UserName") && body.containsKey("Password")){
			String userName = body.getStr("UserName");
			String password = body.getStr("Password");
			log.info("Register : UserName = " + userName + "; password  = " + password);
			if (loginService.isExistsUser(userName)){		
				return Result.failure(ResultCode.RC423);
			} else{
				loginService.registerUser(userName, password);
				if (loginService.isExistsUser(userName)){	
					return loginService.getUserInfo(userName);
				} else{
			        return Result.failure(ResultCode.RC425);
				}
			}
		} else{
			return Result.failure(ResultCode.RC425);
		}
	}
}
