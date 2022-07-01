package com.tastsong.crazycar.common;

import org.springframework.beans.BeansException;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ApplicationContextAware;
import org.springframework.context.annotation.Lazy;
import org.springframework.stereotype.Component;

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
