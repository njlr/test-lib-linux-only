prebuilt_cxx_library(
  name = 'test-lib-linux-only',
  header_namespace = 'test-lib-linux-only',
  header_only = True,
  exported_headers = subdir_glob([
    ('', '*.hpp'),
  ]),
  licenses = [
    'LICENSE',
  ],
  visibility = [
    'PUBLIC',
  ],
)

cxx_binary(
  name = 'main',
  srcs = [
    'main.cpp',
  ],
  deps = [
    ':test-lib-linux-only',
  ],
)
