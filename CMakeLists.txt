cmake_minimum_required(VERSION 2.8) 
project(textio)

#set(CMAKE_BUILD_TYPE Release)
#set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

# Call CMake on the subdirectories
add_subdirectory(src)
