//
// Created by Administrator on 2018-05-25.
//
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
jstring Java_com_example_jnidemo_MainActivity_sayHello(JNIEnv* env,jobject obj){
    char *as="I like jni";
    return (*env)->NewStringUTF(env,as);
}

jintArray Java_com_example_jnidemo_MainActivity_add(JNIEnv* env,jobject obj){
    char *as="I like jni";
    int a=3;
    int b=6;
    int c;
    c=a+b;

//    jsize       (*GetArrayLength)(JNIEnv*, jarray);
//    jintArray     (*NewIntArray)(JNIEnv*, jsize);

    return (*env)->NewIntArray(env,a);
}