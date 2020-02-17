SET(EXECUTABLE_NAME ut_complex)

SET(UT_SOURCES
    ut_PolarComplex.cpp
    ut_RectanglarNumber.cpp
)

ADD_EXECUTABLE(
    ${EXECUTABLE_NAME}
        ${UT_SOURCES}
)

TARGET_SOURCES(
    ${EXECUTABLE_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src/complex/PolarComplex.cpp
        ${PROJECT_SOURCE_DIR}/src/complex/RectangularComplex.cpp
)

ADD_TEST(
        ${EXECUTABLE_NAME}
        ${EXECUTABLE_NAME}
)
