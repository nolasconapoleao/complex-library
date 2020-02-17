#include <catch.hpp>
#include "../../src/complex/RectangularComplex.h"

SCENARIO( "Rectangular Complex number constructor", "[RectangularComplex]" ) {

    GIVEN( "A rectangular number in polar coordinates z = 3+4i" ) {
        RectangularComplex z1(3,4);

        WHEN( "the initialization parameters are checked" ) {
            THEN( "the fields return the correct values" ) {
                REQUIRE( z1.getReal() == 3 );
                REQUIRE( z1.getImaginary() == 4 );
            }
        }
    }
}