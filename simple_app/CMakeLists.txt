cmake_minimum_required( VERSION 3.12 )

project(SimpleApp)

SET(
    CMAKE_ARCHIVE_OUTPUT_DIRECTORY
    ${PROJECT_SOURCE_DIR}/lib 
    CACHE PATH "Directory where all the .lib files are dumped."
    FORCE
)

SET(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${PROJECT_SOURCE_DIR}/bin 
    CACHE PATH "Directory where .exe and .dll files are dumped." 
    FORCE
)

add_subdirectory( external )

add_subdirectory( library_static )
add_subdirectory( library_dynamic )
add_subdirectory( library_header_only)

add_subdirectory( app )
