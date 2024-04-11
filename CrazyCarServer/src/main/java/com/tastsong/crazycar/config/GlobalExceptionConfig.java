package com.tastsong.crazycar.config;


import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import org.springframework.http.HttpStatus;
import org.springframework.validation.BindException;
import org.springframework.validation.FieldError;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.ResponseStatus;
import org.springframework.web.bind.annotation.RestControllerAdvice;

import java.util.List;

@RestControllerAdvice
public class GlobalExceptionConfig {

    @ExceptionHandler(BindException.class)
    @ResponseStatus(HttpStatus.BAD_REQUEST)
    public Object handleValidationException(BindException ex) {
        // 从异常中获取所有验证错误
        List<FieldError> fieldErrors = ex.getBindingResult().getFieldErrors();

        // 处理验证错误，这里简单示例，你可以根据需要定制错误信息
        List<String> errorMessages = fieldErrors.stream()
                .map(error -> error.getField() + ": " + error.getDefaultMessage())
                .toList();

        // 返回自定义的错误信息
        return Result.failure(ResultCode.RC400, errorMessages.toString());
    }
}
