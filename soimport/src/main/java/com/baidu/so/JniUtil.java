package com.baidu.so;

public class JniUtil {
    static {
        System.loadLibrary("native-lib");
    }
    public static native String sayHello();
}
