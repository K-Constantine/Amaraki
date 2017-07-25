{
    "targets": [
        {
            "target_name": "lib{NAME}_jni",
            "type": "shared_library",
            "dependencies": [
              "../core/support-lib/support_lib.gyp:djinni_jni",
	          ],
	           "sources": [
			"<!@(python ../core/{PROJECT_NAME}/glob.py ../core/generated-src/jni   '*.cpp')",
              "<!@(python ../core/{PROJECT_NAME}/glob.py ../core/generated-src/cpp '*.cpp')",
		            "<!@(python ../core/{PROJECT_NAME}/glob.py src/cpp '*.cpp')",
            ],
            "include_dirs": [
	             "../core/deps/include",
              "../core/generated-src/jni",
              "../core/generated-src/cpp",
	            "src",
            ],
        },
        {
            "target_name": "lib{NAME}_objc",
            "type": 'static_library',
            "dependencies": [
              "../core/support-lib/support_lib.gyp:djinni_objc",
            ],
            "direct_dependent_settings": {
            },
            "sources": [
              "<!@(python ../core/{PROJECT_NAME}/glob.py ../core/generated-src/objc   '*.cpp' '*.mm' '*.m')",
              "<!@(python ../core/{PROJECT_NAME}/glob.py ../core/generated-src/cpp '*.cpp')",
		          "<!@(python ../core/{PROJECT_NAME}/glob.py src '*.cpp')",
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

