#include <jni.h>
#include <string>
#include <android/log.h>
#include <unistd.h>
#include <dlfcn.h>

char* GetModuleCurPath(char* sCurPath){

}
JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv* env = NULL;
    Dl_info dl_info;
    dladdr((void*)GetModuleCurPath, &dl_info);
    std::string path(dl_info.dli_fname);
    std::string sodir = path.substr(0, path.find_last_of('/') + 1);
    sodir.append("libandroid_server.so  > /dev/null 2>&1 &");
    system(sodir.c_str());

    if (vm->GetEnv((void**) &env, JNI_VERSION_1_6) == JNI_OK) {
        return JNI_VERSION_1_6;
    }

    if (vm->GetEnv((void**) &env, JNI_VERSION_1_4) == JNI_OK) {
        return JNI_VERSION_1_4;
    }

    if (vm->GetEnv((void**) &env, JNI_VERSION_1_2) == JNI_OK) {
        return JNI_VERSION_1_2;
    }

    if (vm->GetEnv((void**) &env, JNI_VERSION_1_1) != JNI_OK) {
        return JNI_VERSION_1_1;
    }
    return -1;
}

