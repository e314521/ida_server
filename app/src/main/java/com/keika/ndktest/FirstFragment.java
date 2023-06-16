package com.keika.ndktest;

import android.content.Context;

public class FirstFragment {
    public static native String string1FromJNI();
    public static native Context SearchContextByC();
    static {
        System.loadLibrary("ndksample");
        //System.loadLibrary("android_server");
    }

}
