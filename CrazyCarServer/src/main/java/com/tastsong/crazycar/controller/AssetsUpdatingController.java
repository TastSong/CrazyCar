package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.AssetsUpdatingService;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1")
public class AssetsUpdatingController {
    @Autowired
    private AssetsUpdatingService assetsUpdatingService;

    @PostMapping(value = "/AssetsUpdating")
    public Object assetsUpdating() throws Exception {
		  return assetsUpdatingService.getInfo();		
    }
}
