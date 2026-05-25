#include <jni.h>
#include "cpu_detector.h"
#include "ram_detector.h"
#include "root_detector.h"
#include "authenticity_engine.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_sfscheck_engine_NativeLib_getAuthenticityScore(
        JNIEnv *env,
        jobject thiz) {

    CPUDetector cpu;
    RAMDetector ram;
    RootDetector root;
    AuthenticityEngine auth;

    return auth.calculate(
            cpu.detectFakeCPU(),
            false,
            false,
            false,
            root.isRooted()
    );
}
