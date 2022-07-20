package com.tastsong.crazycar.common;

import org.springframework.context.annotation.Configuration;
import org.springframework.web.servlet.config.annotation.CorsRegistry;
import org.springframework.web.servlet.config.annotation.WebMvcConfigurer;

@Configuration
public class CorsConfig implements WebMvcConfigurer {

    /**
    * 开启跨域
    */
   @Override
   public void addCorsMappings(CorsRegistry registry) {
       // 设置允许跨域的路由
       registry.addMapping("/**")
               // 设置允许跨域请求的域名
               .allowedOriginPatterns("*")
               // 是否允许证书（cookies）
               .allowCredentials(true)
               // 设置允许的方法
               .allowedMethods("*")
               // 跨域允许时间
               .maxAge(3600);
   }

} 