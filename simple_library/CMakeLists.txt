add_library(simple_lib src/lib.cpp)

target_include_directories(simple_lib PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

add_subdirectory(test)