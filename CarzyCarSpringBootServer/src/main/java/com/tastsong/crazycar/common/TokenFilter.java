package com.tastsong.crazycar.common;

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

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.core.annotation.Order;

import com.tastsong.crazycar.Util.Util;
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
        log.info("过滤器初始化");
    }

    @Override
    public void doFilter(ServletRequest servletRequest, ServletResponse servletResponse, FilterChain filterChain) throws IOException, ServletException {
        HttpServletResponse response = (HttpServletResponse) servletResponse;
        HttpServletRequest request = (HttpServletRequest) servletRequest;
        log.info("TokenFilter, URL：{}", request.getRequestURI());      
        try {
            String token = request.getHeader(Util.TOKEN);
            Integer uid = Util.getUidByToken(token);
            if(token != null && Util.isLegalToken(token) && userMapper.isExistsUserByUid(uid)){
                filterChain.doFilter(servletRequest, servletResponse);
            } else{
                log.info("非法URL：{}", request.getRequestURI());
                response.setStatus(HttpServletResponse.SC_METHOD_NOT_ALLOWED);
                PrintWriter writer = response.getWriter();
                writer.print(JSONUtil.toJsonStr(Result.failure(ResultCode.RC204)));
            }
        } catch (Exception e) {
            log.info("缺失Token，或者接口报错：{}", request.getRequestURI());
            response.setStatus(HttpServletResponse.SC_METHOD_NOT_ALLOWED);
            PrintWriter writer = response.getWriter();
            writer.print(JSONUtil.toJsonStr(Result.failure(ResultCode.RC203)));
        }
    }

    @Override
    public void destroy() {
        log.info("过滤器销毁");
    }
}
