//
// Created by Administrator on 2018-05-25.
//
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
jstring Java_com_zhouwenguang_hz_gitndktest_MainActivity_sayHello(JNIEnv* env,jobject obj){
    char *as="I like jni";
    return (*env)->NewStringUTF(env,as);
}

jintArray Java_com_zhouwenguang_hz_gitndktest_MainActivity_add(JNIEnv* env,jobject obj){
    char *as="I like jni";
    int array[]={6,2,4,1,3,5};
//    jsize       (*GetArrayLength)(JNIEnv*, jarray);
//    jintArray     (*NewIntArray)(JNIEnv*, jsize);
    jsize a=(*env)->GetArrayLength(env,array);
    return (*env)->NewIntArray(env,a);
}