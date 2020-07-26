PROJECT(App)

# Freely available calculator app.
ADD_EXECUTABLE(${PROJECT_NAME})

TARGET_SOURCES(
    ${PROJECT_NAME}
    PRIVATE
    "src/main.cpp"
)

TARGET_LINK_LIBRARIES(
    ${PROJECT_NAME}
    PRIVATE
    Boost::boost
    StaticLibSample
    DynamicLibSample
    HeaderOnlyLibSample
)

TARGET_COMPILE_DEFINITIONS(
    ${PROJECT_NAME}
    PRIVATE
    BOOST_UUID_RANDOM_PROVIDER_FORCE_WINCRYPT=1
)
