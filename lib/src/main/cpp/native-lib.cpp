#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_jarnoharno_androidnativelib_Library_stringFromJNI(
        JNIEnv* env,
        jclass /* class */) {
    return env->NewStringUTF("Hello from C++");
}
