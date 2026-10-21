#ifndef CHROME_GREEN_SRC_VERSION_H_
#define CHROME_GREEN_SRC_VERSION_H_

#define RELEASE_VER_MAIN 2
#define RELEASE_VER_SUB 1
#define RELEASE_VER_FIX 0
// FORK: the build identifies itself as "<version>-fix" and releases are tagged
// "<version>-fix". Upstream's numbers are reused as-is (the branch merges
// upstream), so "2.1.0-fix" -> "2.1.1-fix" compares purely on the numbers,
// while the suffix keeps a fix install distinguishable from stock 2.1.0 in the
// UI, the zip name and the release tag.
#define RELEASE_VER_PRE_SUFFIX "-fix"

#define TOSTRING2(arg) #arg
#define TOSTRING(arg) TOSTRING2(arg)

#define RELEASE_VER_STR                         \
  TOSTRING(RELEASE_VER_MAIN)                    \
  "." TOSTRING(RELEASE_VER_SUB)                 \
  "." TOSTRING(RELEASE_VER_FIX)                 \
  RELEASE_VER_PRE_SUFFIX

#endif  // CHROME_GREEN_SRC_VERSION_H_
