{ 'targets': [
    {
      'target_name': 'restful_mapper_jni',
      'type': 'static_library',
      'dependencies': [
        'yajl.gyp:yajl',
      ],
      'sources': [
        'restful_mapper/src/api.cpp',
        'restful_mapper/src/json.cpp',
        'restful_mapper/src/utf8.cpp',
      ],
      'libraries': ['libcurl.a', 'libiconv.a',],
      'ldflags': [ '-llog', '-lz', '-Wl,--build-id,--gc-sections,--exclude-libs,ALL' ],
      'cflags': [
        '-Wall',
        '-std=c++0x',
        '-Wno-switch',
        '-Wno-nonnull',
      ],
      'xcode_settings': {
        'OTHER_CFLAGS' : ['<@(_cflags)'],
      },
      'include_dirs': [
        'include',
        'libiconv/include',
        'restful_mapper/include',
      ],
    },
    {
      'target_name': 'restful_mapper_objc',
      'type': 'static_library',
      'dependencies': [
        'yajl.gyp:yajl',
      ],
      'sources': [
        'restful_mapper/src/api.cpp',
        'restful_mapper/src/json.cpp',
        'restful_mapper/src/utf8.cpp',
      ],
      'libraries': [
        'prebuilt/iOS/libiconv.2.4.0.dylib', 
        'prebuilt/iOS/libz.1.1.3.dylib',
        'prebuilt/iOS/libcurl.a', 
      ],
      'cflags': [
        '-Wall',
        '-std=c++0x',
        '-Wno-switch',
        '-Wno-nonnull',
      ],
      'xcode_settings': {
        'OTHER_CFLAGS' : ['<@(_cflags)'],
      },
      'include_dirs': [
        'include',
        'restful_mapper/include',
      ],
    }
  ]
}
