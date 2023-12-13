package com.tastsong.crazycar.controller;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.dto.req.ReqBackgroundLogin;
import com.tastsong.crazycar.dto.req.ReqLogin;
import com.tastsong.crazycar.service.UserLoginRecordService;
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
import com.tastsong.crazycar.model.UserLoginRecordModel;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.LoginService;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONObject;
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
	@Autowired
	private UserLoginRecordService userLoginRecordService;

	@PostMapping(value = "/Login")
	public Object login(@Valid @RequestBody ReqLogin req) throws Exception {
		String userName = req.UserName;
		String password = req.Password;
		log.info("login : userName = " + userName + "; password  = " + password);
		UserModel userModel = userService.getUserByName(userName);
		if(userModel == null){
			return Result.failure(ResultCode.RC404);
		} else if (password.equals(userModel.getUser_password())){
			return loginService.getUserInfo(userName);
		} else{
			return Result.failure(ResultCode.RC423);
		}
	}

	@PostMapping(value = "/recodeLogin")
	public Object recodeLogin(@RequestBody UserLoginRecordModel req, @RequestHeader(Util.TOKEN) String token) throws Exception {
		int uid = Util.getUidByToken(token);
		req.setUid(uid);
		req.setLogin_time(DateUtil.currentSeconds());
		userLoginRecordService.insert(req);
		return Result.success();
	}

	@GetMapping (value = "/TestJWT")
	public Object testJWT(@RequestHeader(Util.TOKEN) String token) throws Exception{
		return Util.isLegalToken(token);
	}

	@PostMapping (value = "/Register")
	public Object register(@RequestBody JSONObject body) throws Exception{
		String userName = body.getStr("UserName");
		String password = body.getStr("Password");
		log.info("Register : UserName = " + userName + "; password  = " + password);
		if (userService.isExistsUser(userName)){
			return Result.failure(ResultCode.RC423);
		} else{
			loginService.registerUser(userName, password);
			if (userService.isExistsUser(userName)){
				return loginService.getUserInfo(userName);
			} else{
				return Result.failure(ResultCode.RC425);
			}
		}
	}

	@PostMapping(value = "/Config")
	public Object config() throws Exception{
		JSONObject data = new JSONObject();
		data.putOpt("avatars", loginService.getAvatarList());
		return data;
	}
}
