CMAKE_MINIMUM_REQUIRED(VERSION 3.15)
PROJECT(complex-library)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

ENABLE_TESTING()
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(tests)

# Application executable
SET(APPLICATION_NAME Application)
ADD_EXECUTABLE(
    ${APPLICATION_NAME}
        main.cpp
)

TARGET_LINK_LIBRARIES(${APPLICATION_NAME}
    PUBLIC
        lib-complex
)
