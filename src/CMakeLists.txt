 # 
 # Copyright (c) 2012 Brian Kloppenborg
 #
 # The authors request, but do not require, that you acknowledge the
 # use of this software in any publications.  See 
 # https://github.com/bkloppenborg/liboi/wiki
 # for example citations
 #
 # This file is part of the OpenCL Interferometry Library (LIBOI).
 # 
 # LIBOI is free software: you can redistribute it and/or modify
 # it under the terms of the GNU Lesser General Public License 
 # as published by the Free Software Foundation, either version 3 
 # of the License, or (at your option) any later version.
 # 
 # LIBOI is distributed in the hope that it will be useful,
 # but WITHOUT ANY WARRANTY; without even the implied warranty of
 # MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 # GNU Lesser General Public License for more details.
 # 
 # You should have received a copy of the GNU Lesser General Public 
 # License along with LIBOI.  If not, see <http://www.gnu.org/licenses/>.
 #

cmake_minimum_required(VERSION 2.8)
project(textio)

add_library(textio SHARED ReadTextFile)
add_library(textio_static STATIC ReadTextFile)

install(TARGETS textio DESTINATION lib)
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/textio.hpp" DESTINATION include)

# Automatic packaging
SET(CPACK_GENERATOR "DEB")
SET(CPACK_PACKAGE_NAME "textio")
SET(CPACK_PACKAGE_VERSION 1.0.0)
SET(CPACK_PACKAGE_CONTACT "Brian Kloppenborg <bkloppenborg@gmail.com>")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Simple text input/output library (https://github.com/bkloppenborg/textio)")

INCLUDE(CPack)
