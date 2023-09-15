package com.tastsong.crazycar.config;

import org.springframework.beans.BeansException;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ApplicationContextAware;
import org.springframework.context.annotation.Lazy;
import org.springframework.stereotype.Component;

// 通过这个类，你可以在任何地方获取到ApplicationContext对象，进而访问和操作Spring容器中的Bean
@Component
@Lazy(false)
public class ApplicationContextRegister  implements ApplicationContextAware {
    private static ApplicationContext APPLICATION_CONTEXT;
 
    @Override
    public void setApplicationContext(ApplicationContext applicationContext) throws BeansException {
        APPLICATION_CONTEXT = applicationContext;
    }
 
    public static ApplicationContext getApplicationContext() {
        return APPLICATION_CONTEXT;
    }
}
