#pragma once

#include <ostream>

#include "IComplexNumber.h"

/**
 * Class that represents a complex numbers in 2 dimensions using polar coordinates (z = abs + exp(i*angle)).
 */
class PolarComplex : public IComplexNumber {
public:
    /**
     * @brief Constructor for Complex number in Polar form.
     * @param abs modulus of complex number
     * @param angle phase of complex number
     */
    PolarComplex(const double abs, const double angle);

    ///@copydoc IComplexNumber::getAbs
    const double getAbs() override;
    ///@copydoc IComplexNumber::getAngle
    const double getAngle() override;

    /**
     * @brief Insertor operator for console printing.
     * @param[out] os output stream
     * @param pc complex number in polar form
     * @return output stream
     */
    friend std::ostream& operator<<(std::ostream& os, const PolarComplex& pc);

    ///@copydoc IComplexNumber::getReal
    const double getReal() override;
    ///@copydoc IComplexNumber::getImaginary
    const double getImaginary() override;

private:
    double m_abs;
    double m_angle;
};
