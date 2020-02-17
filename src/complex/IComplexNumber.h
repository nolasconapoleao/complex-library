#pragma once

/**
 * Class that represents a complex numbers in 2 dimensions.
 */
class IComplexNumber {
    virtual const double getAbs() = 0;
    virtual const double  getAngle() = 0;
    virtual const double  getReal() = 0;
    virtual const double  getImaginary() = 0;
};
