SET(EXECUTABLE_NAME ut_complexUtils)

SET(UT_SOURCES
    ut_ComplexCalculator.cpp
    ut_ComplexConverter.cpp
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
        ${PROJECT_SOURCE_DIR}/src/utils/ComplexCalculator.cpp
        ${PROJECT_SOURCE_DIR}/src/utils/ComplexConverter.cpp
)
