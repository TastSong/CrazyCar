package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqLogin;
import com.tastsong.crazycar.dto.resp.RespConfig;
import com.tastsong.crazycar.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.LoginService;
import com.tastsong.crazycar.utils.Util;

import lombok.extern.slf4j.Slf4j;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1")
@Slf4j
public class LoginController {
	@Autowired
	private LoginService loginService;
	@Autowired
	private UserService userService;

	@PostMapping(value = "/Login")
	public Object login(@Valid @RequestBody ReqLogin req) throws Exception {
		String userName = req.getUserName();
		String password = req.getPassword();
		log.info("login : userName = " + userName + "; password  = " + password);
		UserModel userModel = userService.getUserByName(userName);
		if(userModel == null){
			return Result.failure(ResultCode.RC404);
		} else if (password.equals(userModel.getUser_password())){
			return loginService.getUserDetail(userModel.getUid());
		} else{
			return Result.failure(ResultCode.RC423);
		}
	}

	@GetMapping (value = "/TestJWT")
	public Object testJWT(@RequestHeader(Util.TOKEN) String token) throws Exception{
		return Util.isLegalToken(token);
	}

	@PostMapping (value = "/Register")
	public Object register(@Valid @RequestBody ReqLogin req) throws Exception{
		String userName = req.getUserName();
		String password = req.getPassword();
		log.info("Register : UserName = " + userName + "; password  = " + password);
		if (userService.isExistsUser(userName)){
			return Result.failure(ResultCode.RC423);
		} else{
			int uid = loginService.registerUser(userName, password);
			if (userService.isExistsUser(userName)){
				return loginService.getUserDetail(uid);
			} else{
				return Result.failure(ResultCode.RC425);
			}
		}
	}

	@PostMapping(value = "/Config")
	public Object config() throws Exception{
		RespConfig resp = new RespConfig();
		resp.setAvatars(loginService.getAvatarList());
		return resp;
	}
}
