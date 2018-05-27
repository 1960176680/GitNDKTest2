#cmake_minimum_required(VERSION 3.4.1)
#add_library(native-lib2 SHARED IMPORTED)
#set_target_properties(native-lib2 PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libnative-lib2.so)
#find_library(log-lib log )
#target_link_libraries(native-lib2 ${log-lib})


cmake_minimum_required(VERSION 3.4.1)
find_package(native-lib2)

add_library(
             native-lib2
             SHARED
             IMPORTED )
set_target_properties(native-lib2
                      PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libnative-lib2.so)
find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )
