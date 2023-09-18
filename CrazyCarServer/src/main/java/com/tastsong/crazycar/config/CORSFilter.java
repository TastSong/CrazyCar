package com.tastsong.crazycar.config;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebFilter;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.core.annotation.Order;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONUtil;
import lombok.extern.slf4j.Slf4j;

@Slf4j
@Order(1)
@WebFilter(filterName = "CORSFilter", urlPatterns = {"/v2/*"})
public class CORSFilter implements Filter{
    @Override
    public void init(FilterConfig filterConfig) throws ServletException {
        log.info("Init CORSFilter");
    }

    @Override
    public void doFilter(ServletRequest servletRequest, ServletResponse servletResponse, FilterChain filterChain) throws IOException, ServletException {
        HttpServletResponse response = (HttpServletResponse) servletResponse;
        HttpServletRequest request = (HttpServletRequest) servletRequest;
        log.info("CORSFilter, URL：{}", request.getRequestURI());      
        try {
            HttpServletResponse httpResponse = (HttpServletResponse) response;
            httpResponse.setHeader("Access-Control-Allow-Origin", "*");
            httpResponse.setHeader("Access-Control-Allow-Methods", "PUT, POST, GET, OPTIONS, DELETE");
            httpResponse.setHeader("Access-Control-Allow-Headers", "content-type, authorization");
            httpResponse.setHeader("Access-Control-Allow-Credentials", "true");
            httpResponse.setHeader("Access-Control-Max-Age", "3600");
            String token = request.getHeader(Util.TOKEN);
            if(token != null){
                filterChain.doFilter(servletRequest, servletResponse);
            } else{
                log.info("missing Token ：{}", request.getRequestURI());
                return;
            }
        } catch (Exception e) {
            log.info("missing Token，or interface error：{}", request.getRequestURI());
            response.setStatus(HttpServletResponse.SC_METHOD_NOT_ALLOWED);
            PrintWriter writer = response.getWriter();
            writer.print(JSONUtil.toJsonStr(Result.failure(ResultCode.RC203)));
        }
    }

    @Override
    public void destroy() {
        log.info("Des CORSFilter");
    }
}
