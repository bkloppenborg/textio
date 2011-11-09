cmake_minimum_required(VERSION 2.8) 
project(libtextio)

#set(CMAKE_BUILD_TYPE Release)
#set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

# Call CMake on the subdirectories
add_subdirectory(src)
