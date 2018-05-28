//
// Created by Administrator on 2018-05-25.
//
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
jstring Java_com_baidu_so_JniUtil_sayHello(JNIEnv* env,jobject obj){
    char *as="I like jni";
    return (*env)->NewStringUTF(env,as);
}
