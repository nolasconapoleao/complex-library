#pragma once

#include <ostream>

#include "IComplexNumber.h"

/**
 * Class that represents a complex numbers in 2 dimensions (z = real + imaginary*i).
 */
class RectangularComplex : public IComplexNumber {
public:
    RectangularComplex(const double real, const double imaginary);

    const double getReal() override;
    const double getImaginary() override;

    friend std::ostream& operator<<(std::ostream& os, const RectangularComplex& rc);

    const double getAbs() override;
    const double getAngle() override;

private:
    double m_imaginary;
    double m_real;
};