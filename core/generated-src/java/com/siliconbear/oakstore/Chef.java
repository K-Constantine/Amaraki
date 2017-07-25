// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from application.djinni

package com.siliconbear.oakstore;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Chef {
    public abstract String getVersion();

    public abstract Dish grab(Menu menu);

    public abstract void addRecipe(Recipe recipe);

    public static native System getSystem();

    private static final class CppProxy extends Chef
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getVersion()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getVersion(this.nativeRef);
        }
        private native String native_getVersion(long _nativeRef);

        @Override
        public Dish grab(Menu menu)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_grab(this.nativeRef, menu);
        }
        private native Dish native_grab(long _nativeRef, Menu menu);

        @Override
        public void addRecipe(Recipe recipe)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_addRecipe(this.nativeRef, recipe);
        }
        private native void native_addRecipe(long _nativeRef, Recipe recipe);
    }
}
