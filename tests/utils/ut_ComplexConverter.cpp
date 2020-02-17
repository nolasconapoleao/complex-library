#include <catch.hpp>
#include "../../src/utils/ComplexConverter.cpp"

using namespace complex;

SCENARIO( "Conversion of complex numbers", "[ComplexConverter]" ) {

    GIVEN( "A complex number in rectangular coordinates z1 = 3+0i") {
        RectangularComplex z1(3,0);
        PolarComplex z2 = toPolar(z1);

        WHEN( "the complex number is converted to polar" ) {
            THEN( "the fields return the correct values" ) {
                REQUIRE( z2.getAbs() == 3 );
                REQUIRE( z2.getAngle() == 0 );
            }
        }
    }
}