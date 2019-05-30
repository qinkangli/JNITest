package com.qinkl;

public class JNITest{
    static{
        System.loadLibrary("jni-test");
    }

    public static void main(String args[]){
        JNITest jniTest = new JNITest();
        System.out.println(jniTest.jniGet());
        jniTest.jniSet("hello world");
    }

    public native String jniGet();
    public native void jniSet(String str);

}
