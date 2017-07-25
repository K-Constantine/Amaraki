{ 'targets': [
    {
      'target_name': 'iconv',
      'type': 'static_library',
      'sources': [
        'libiconv/src/iconv.c',
        'libiconv/src/iconv_no_i18n.c',
        'libiconv/extras/iconv_string.c',
        'libiconv/tools/8bit_tab_to_h.c',
        'libiconv/tools/cjk_tab_to_h.c',
        'libiconv/tools/cjk_variants.c',
      ],
      'cflags': [
        '-Wall',
      ],
      'xcode_settings': {
        'OTHER_CFLAGS' : ['<@(_cflags)'],
      },
      'include_dirs': [
        'libiconv/',
        'libiconv/srclib',
        'libiconv/include',
      ],
    },
  ]
}
