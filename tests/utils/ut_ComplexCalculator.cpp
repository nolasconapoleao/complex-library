#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "../../src/utils/ComplexCalculator.cpp"

using namespace complex;

SCENARIO( "Adition of complex numbers", "[ComplexCalculator]" ) {

    GIVEN( "Two complex number in rectangular coordinates z1 = 3+4i and z1 = 5+8i" ) {
        RectangularComplex z1(3,4);
        RectangularComplex z2(5,8);
        auto z3 = z1 + z2;

        WHEN( "the complex numbers are added" ) {
            THEN( "the fields return the correct values" ) {
                REQUIRE( z3.getReal() == 8 );
                REQUIRE( z3.getImaginary() == 12 );
                }
        }
    }
}