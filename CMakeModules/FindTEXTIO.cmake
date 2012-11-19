# - Try to find LibXml2
# Once done this will define
#  TEXTIO_FOUND - System has textio
#  TEXTIO_INCLUDE_DIRS - The textio include directories
#  TEXTIO_LIBRARIES - The libraries needed to use textio (none)

find_path(TEXTIO_INCLUDE_DIR lib/textio.h)
find_library(TEXTIO2_LIBRARY NAMES textio)

set(TEXTIO_LIBRARIES ${TEXTIO_LIBRARY} )
set(TEXTIO_INCLUDE_DIRS ${TEXTIO_INCLUDE_DIR} )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set TEXTIO_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(TEXTIO DEFAULT_MSG
                                  TEXTIO_LIBRARY TEXTIO_INCLUDE_DIR)

mark_as_advanced(TEXTIO_INCLUDE_DIR TEXTIO_LIBRARY )
