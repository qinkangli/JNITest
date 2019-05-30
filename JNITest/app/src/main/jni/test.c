#include "com_qinkl_JNITest.h"

JNIEXPORT jstring JNICALL Java_com_qinkl_JNITest_jniGet(JNIEnv *env,jobject thiz){
    printf("invoke get in c++\n");
    return (*env)->NewStringUTF(env,"Hello from JNI!");
}

JNIEXPORT void JNICALL Java_com_qinkl_JNITest_jniSet(JNIEnv *env,jobject thiz,jstring string){
    printf("invoke set in c++\n");
    char* str = (char*)(*env)->GetStringUTFChars(env,string,NULL);
    printf("%s\n",str);
    (*env)->ReleaseStringUTFChars(env,string,str);
}

