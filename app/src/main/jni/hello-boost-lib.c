#include <jni.h>
#include <atomic.h>



JNIEXPORT jstring JNICALL
Java_com_example_cran_1cg_helloboost_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "hello");
}