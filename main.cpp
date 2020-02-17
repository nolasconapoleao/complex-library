#include <iostream>

#include "src/complex/PolarComplex.h"
#include "src/complex/RectangularComplex.h"

int main() {
    RectangularComplex z1(1, 2);
    std::cout << z1 << std::endl;

    PolarComplex z2(25, 45);
    std::cout << z2 << std::endl;
}