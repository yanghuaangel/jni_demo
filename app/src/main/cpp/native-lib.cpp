#include <jni.h>
#include <string>
#include "LogUtils.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_jni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    env->GetVersion();
    LOGD("hello world");
    const int size = 1024*1024;
    void *temp;
    temp = malloc(size);
    if (temp == nullptr) {
        LOGD("malloc fail");
    }
    return env->NewStringUTF(hello.c_str());
}
