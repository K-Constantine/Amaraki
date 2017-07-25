{
    "targets": [
        {
            "target_name": "libtest_jni",
            "type": "shared_library",
            "dependencies": [
              "../core/deps/yajl.gyp:yajl",
              "../core/support-lib/support_lib.gyp:djinni_jni",
	          ],
	           "sources": [
			"<!@(python ../core/example/glob.py ../core/generated-src/jni   '*.cpp')",
              "<!@(python ../core/example/glob.py ../core/generated-src/cpp '*.cpp')",
		            "<!@(python ../core/example/glob.py src/cpp '*.cpp')",
            ],
            "include_dirs": [
	             "../core/deps/include",
              "../core/generated-src/jni",
              "../core/generated-src/cpp",
	            "src",
            ],
        },
        {
            "target_name": "libtest_objc",
            "type": 'static_library',
            "dependencies": [
              "../core/deps/yajl.gyp:yajl",
              "../core/support-lib/support_lib.gyp:djinni_objc",
            ],
            "direct_dependent_settings": {
            },
            "sources": [
              "<!@(python ../core/example/glob.py ../core/generated-src/objc   '*.cpp' '*.mm' '*.m')",
              "<!@(python ../core/example/glob.py ../core/generated-src/cpp '*.cpp')",
		          "<!@(python ../core/example/glob.py src '*.cpp')",
            ],
            "include_dirs": [
	            "../core/deps/include",
              "../core/generated-src/objc",
              "../core/generated-src/cpp",
              "src",
            ],
        },
    ],
}

