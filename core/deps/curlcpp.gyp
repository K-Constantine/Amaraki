{ 'targets': [
    {
      'target_name': 'curlcpp_jni',
      'type': 'static_library',
      'dependencies': [],
      'sources': [
        'curlcpp/src/cookie.cpp',
        'curlcpp/src/cookie_date.cpp',
        'curlcpp/src/cookie_datetime.cpp',
        'curlcpp/src/cookie_time.cpp',
        'curlcpp/src/curl_cookie.cpp',
        'curlcpp/src/curl_easy.cpp',
        'curlcpp/src/curl_exception.cpp',
        'curlcpp/src/curl_form.cpp',
        'curlcpp/src/curl_global.cpp',
        'curlcpp/src/curl_header.cpp',
        'curlcpp/src/curl_info.cpp',
        'curlcpp/src/curl_multi.cpp',
        'curlcpp/src/curl_share.cpp',
      ],
      'libraries': ['libcurl.a',],
      'ldflags': [ '-llog', '-lz', '-Wl,--build-id,--gc-sections,--exclude-libs,ALL' ],
      'cflags': [
        '-Wall',
        '-std=c++0x',
        '-Wno-switch',
        '-Wno-nonnull',
        '-Wno-ignored-qualifiers',
        '-Wno-reorder',
      ],
      'xcode_settings': {
        'OTHER_CFLAGS' : ['<@(_cflags)'],
      },
      'include_dirs': [
        'include',
        'curlcpp/include',
      ],
    },
    {
      'target_name': 'curlcpp_objc',
      'type': 'static_library',
      'dependencies': [ ],
      'sources': [
        'curlcpp/src/cookie.cpp',
        'curlcpp/src/cookie_date.cpp',
        'curlcpp/src/cookie_datetime.cpp',
        'curlcpp/src/cookie_time.cpp',
        'curlcpp/src/curl_cookie.cpp',
        'curlcpp/src/curl_easy.cpp',
        'curlcpp/src/curl_exception.cpp',
        'curlcpp/src/curl_form.cpp',
        'curlcpp/src/curl_global.cpp',
        'curlcpp/src/curl_header.cpp',
        'curlcpp/src/curl_info.cpp',
        'curlcpp/src/curl_multi.cpp',
        'curlcpp/src/curl_share.cpp',
      ],
      'libraries': [
        'prebuilt/iOS/libz.1.1.3.dylib',
        'prebuilt/iOS/libcurl.a', 
      ],
      'cflags': [
        '-Wall',
        '-std=c++0x',
        '-Wno-switch',
        '-Wno-nonnull',
        '-Wno-ignored-qualifiers',
        '-Wno-reorder',
      ],
      'xcode_settings': {
        'OTHER_CFLAGS' : ['<@(_cflags)'],
      },
      'include_dirs': [
        'include',
        'curlcpp/include',
      ],
    }
  ]
}
