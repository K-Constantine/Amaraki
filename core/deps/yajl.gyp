{ 'targets': [
    {
      'target_name': 'yajl',
      'type': 'static_library',
      'sources': [
        'yajl/src/yajl.c',
        'yajl/src/yajl_lex.c',
        'yajl/src/yajl_parser.c',
        'yajl/src/yajl_buf.c',
        'yajl/src/yajl_encode.c',
        'yajl/src/yajl_gen.c',
        'yajl/src/yajl_alloc.c',
        'yajl/src/yajl_tree.c',
        'yajl/src/yajl_version.c',
      ],
      'cflags': [
        '-Wall',
        '-fvisibility=hidden',
        '-std=c99',
        '-pedantic',
        '-Wpointer-arith',
        '-Wno-format-y2k',
        '-Wstrict-prototypes',
        '-Wmissing-declarations',
        '-Wnested-externs',
        '-Wextra',
        '-Wundef',
        '-Wwrite-strings',
        '-Wold-style-definition', 
        '-Wredundant-decls',
        '-Wno-unused-parameter',
        '-Wno-sign-compare',
        '-Wmissing-prototypes',
      ],
      'xcode_settings': {
        'OTHER_CFLAGS' : ['<@(_cflags)'],
      },
      'include_dirs': [
        'include',
      ],
    },
  ]
}
