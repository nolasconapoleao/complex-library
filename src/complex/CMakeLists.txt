file(GLOB SOURCE_FILES *.cpp)
file(GLOB HEADER_FILES *.h)

add_library(
    lib-complex
    STATIC
        ${SOURCE_FILES}
        ${HEADER_FILES}
)