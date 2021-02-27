cmake_minimum_required(VERSION 3.17)

project(simple_project)

find_package(Catch2 REQUIRED)

add_subdirectory(simple_library)
add_subdirectory(simple_library_executable)