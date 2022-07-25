package com.tastsong.crazycar.config;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;

import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebFilter;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.core.annotation.Order;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.mapper.UserMapper;

import cn.hutool.json.JSONUtil;
import lombok.extern.slf4j.Slf4j;

@Slf4j
@Order(1)
@WebFilter(filterName = "tokenFilter", urlPatterns = {"/v2/*"})
public class TokenFilter implements Filter{
    @Autowired
    private UserMapper userMapper;

    @Override
    public void init(FilterConfig filterConfig) throws ServletException {
        log.info("Init Filter");
    }

    @Override
    public void doFilter(ServletRequest servletRequest, ServletResponse servletResponse, FilterChain filterChain) throws IOException, ServletException {
        HttpServletResponse response = (HttpServletResponse) servletResponse;
        HttpServletRequest request = (HttpServletRequest) servletRequest;
        log.info("TokenFilter, URL：{}", request.getRequestURI());      
        try {
            // ------解决跨域问题 正式发布时需要注释一下代码------
            Enumeration<String> headerNames = request.getHeaderNames();
            while(headerNames.hasMoreElements()) {
                String nextElement = headerNames.nextElement();
                String headerContent = request.getHeader(nextElement);
                log.info(nextElement + ":" + headerContent);
                if(headerContent.startsWith("localhost")){
                    log.info("skip filter : ", request.getRequestURI());
                    filterChain.doFilter(servletRequest, servletResponse);
                    return;
                }
            }
            // -------------

            String token = request.getHeader(Util.TOKEN);
            if(token != null && Util.isLegalToken(token) && userMapper.isExistsUserByUid(Util.getUidByToken(token))){
                filterChain.doFilter(servletRequest, servletResponse);
            } else{
                log.info("illegality URL：{}", request.getRequestURI());
                response.setStatus(HttpServletResponse.SC_METHOD_NOT_ALLOWED);
                PrintWriter writer = response.getWriter();
                writer.print(JSONUtil.toJsonStr(Result.failure(ResultCode.RC204)));
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
        log.info("Des Filter");
    }
}
