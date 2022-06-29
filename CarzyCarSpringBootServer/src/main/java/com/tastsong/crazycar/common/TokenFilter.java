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

import org.springframework.core.annotation.Order;

import lombok.extern.slf4j.Slf4j;

@Slf4j
@Order(1)
@WebFilter(filterName = "tokenFilter", urlPatterns = {"/Avatar/*"})
public class TokenFilter implements Filter{
    @Override
    public void init(FilterConfig filterConfig) throws ServletException {
        log.info("过滤器初始化");
    }

    @Override
    public void doFilter(ServletRequest servletRequest, ServletResponse servletResponse, FilterChain filterChain) throws IOException, ServletException {
        log.info("请求处理");
        HttpServletResponse response = (HttpServletResponse) servletResponse;
        HttpServletRequest request = (HttpServletRequest) servletRequest;
        log.info("MyFilter, URL：{}", request.getRequestURI());
        if (request.getRequestURI().contains("login")) {
            filterChain.doFilter(servletRequest, servletResponse);
        } else {
            log.info("非法URL：{}", request.getRequestURI());
            response.setStatus(HttpServletResponse.SC_METHOD_NOT_ALLOWED);
            PrintWriter writer = response.getWriter();
            writer.print("no access");
        }
    }

    @Override
    public void destroy() {
        log.info("过滤器销毁");
    }
}
