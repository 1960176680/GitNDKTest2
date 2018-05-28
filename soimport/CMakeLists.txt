cmake_minimum_required(VERSION 3.4.1)
add_library(
             native-lib
             SHARED
             IMPORTED )
set_target_properties(native-lib
                      PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libnative-lib.so)
find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )
