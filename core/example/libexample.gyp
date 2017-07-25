{
    "targets": [
        {
            "target_name": "libexample_jni",
            "type": "shared_library",
            "dependencies": [
              "../support-lib/support_lib.gyp:djinni_jni",
              "../../example/example.gyp:libexample_jni",      
            ],
            "ldflags": [ "-llog", "-lz", "-Wl,--build-id,--gc-sections,--exclude-libs,ALL" ],
            "sources": [
              "../support-lib/jni/djinni_main.cpp",
              "<!@(python glob.py ../generated-src/jni   '*.cpp')",
              "<!@(python glob.py ../generated-src/cpp '*.cpp')",
            ],
            "include_dirs": [
              "../deps/include",
              "../generated-src/jni",
              "../generated-src/cpp",
            ],
        },
        {
            "target_name": "libexample_objc",
            "type": 'static_library',
            "dependencies": [
              "../support-lib/support_lib.gyp:djinni_objc",
              "../../example/example.gyp:libexample_objc",     
            ],
            "direct_dependent_settings": {
            },
            "sources": [
              "<!@(python glob.py ../generated-src/objc   '*.cpp' '*.mm' '*.m')",
              "<!@(python glob.py ../generated-src/cpp '*.cpp')",
              "<!@(python glob.py src/cpp '*.cpp')",
            ],
            "include_dirs": [
              "../deps/include",
              "../generated-src/objc",
              "../generated-src/cpp",
              "src/cpp",
            ],
        },
    ],
}
