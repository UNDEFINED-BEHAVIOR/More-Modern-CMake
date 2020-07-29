CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

PROJECT(MinimalApp)


SET(
    CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${PROJECT_SOURCE_DIR}/bin 
    CACHE PATH "Directory where .exe and .dll files are dumped." 
    FORCE
)

ADD_SUBDIRECTORY(app)