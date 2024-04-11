package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.BackgroundDashboardService;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundDashboardController {
    @Autowired
    private BackgroundDashboardService dashboardService;

    @GetMapping(value = "getDashboardData")
    public Object getDashboardData() throws Exception {
        return dashboardService.getDashboardData();
    }
}
