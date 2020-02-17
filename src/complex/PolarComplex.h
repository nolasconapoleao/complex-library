#pragma once

#include <ostream>

#include "IComplexNumber.h"

/**
 * Class that represents a complex numbers in 2 dimensions using polar coordinates (z = abs + exp(i*angle)).
 */
class PolarComplex : public IComplexNumber {
public:
    PolarComplex(const double abs, const double angle);

    const double getAbs() override;
    const double getAngle() override;

    friend std::ostream& operator<<(std::ostream& os, const PolarComplex& pc);

    const double getReal() override;
    const double getImaginary() override;

private:
    double m_abs;
    double m_angle;
};
