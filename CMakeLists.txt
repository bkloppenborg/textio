cmake_minimum_required(VERSION 2.8) 
project(textio)

# get version information from git
INCLUDE("${CMAKE_SOURCE_DIR}/CMakeModules/SetVersion.cmake")

#set(CMAKE_BUILD_TYPE Release)
#set(CMAKE_BUILD_TYPE Debug)

SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib")

# CMake subdirectories
add_subdirectory(src)

# Install stage
INSTALL_FILES("${CMAKE_ROOT}/Modules" FILES "${CMAKE_SOURCE_DIR}/FindTEXTIO.cmake")

# Get the architecture
EXECUTE_PROCESS(
    COMMAND dpkg --print-architecture
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE OS_ARCHITECTURE
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

# General settings
SET(CPACK_GENERATOR "DEB")
SET(CPACK_PACKAGE_NAME "textio")
SET(CPACK_PACKAGE_VERSION 1.0.0)
SET(CPACK_PACKAGE_CONTACT "Brian Kloppenborg <bkloppenborg@gmail.com>")
SET(CPACK_PACKAGE_DESCRIPTION "Simple text input/output implementing file reading, string splitting, and tokenizing")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Simple text input/output library (https://github.com/bkloppenborg/textio)")

# Debian-specific settings
SET(CPACK_DEBIAN_PACKAGE_ARCHITECTURE ${OS_ARCHITECTURE})
SET(CPACK_DEBIAN_PACKAGE_SECTION "devel")

# Run CPack
INCLUDE(CPack)
