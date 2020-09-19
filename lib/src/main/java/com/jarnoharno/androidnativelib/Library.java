package com.jarnoharno.androidnativelib;

public class Library {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    public static native String stringFromJNI();
}
