package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.MatchService;

import org.springframework.web.bind.annotation.PostMapping;


@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Match")
public class MatchController {
    @Autowired
    private MatchService matchService;

    @PostMapping(value="/Map")
    public Object getMapDetail() {
        return matchService.getMatchMapDetail();
    }
    
}
