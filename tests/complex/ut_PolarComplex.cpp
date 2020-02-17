#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "../../src/complex/PolarComplex.h"

SCENARIO( "Polar Complex number constructor", "[PolarComplex]" ) {

    GIVEN( "A complex number in polar coordinates z = 3+exp(4*i)" ) {
        PolarComplex z1(3,4);

        WHEN( "the initialization parameters are checked" ) {
            THEN( "the fields return the correct values" ) {
                REQUIRE( z1.getAbs() == 3 );
                REQUIRE( z1.getAngle() == 4 );
                }
        }
    }
}