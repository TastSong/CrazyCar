package com.tastsong.crazycar.common;

import java.util.LinkedHashMap;

import org.apache.tomcat.util.file.ConfigurationSource.Resource;
import org.springframework.core.MethodParameter;
import org.springframework.http.MediaType;
import org.springframework.http.converter.HttpMessageConverter;
import org.springframework.http.server.ServerHttpRequest;
import org.springframework.http.server.ServerHttpResponse;
import org.springframework.web.bind.annotation.RestControllerAdvice;
import org.springframework.web.servlet.mvc.method.annotation.ResponseBodyAdvice;

import com.alibaba.fastjson.JSON;

@RestControllerAdvice
public class ResponseAdvice  implements ResponseBodyAdvice<Object> {
    @Override
    public boolean supports(MethodParameter returnType, Class<? extends HttpMessageConverter<?>> converterType) {
        return true;
    }
    @Override
    public Object beforeBodyWrite(Object body, MethodParameter returnType, MediaType selectedContentType, 
        Class<? extends HttpMessageConverter<?>> selectedConverterType, ServerHttpRequest request, ServerHttpResponse response)  {
        if (body instanceof String){
            return JSON.toJSONString(Result.success(ResultCode.RC200.getMessage(),body));
        } else if(body instanceof Result){
            return body;
        } else if (body instanceof LinkedHashMap) {
            return Result.failure(ResultCode.RC500);
        } else {
            return Result.failure(ResultCode.RC999);
        }
    }
}