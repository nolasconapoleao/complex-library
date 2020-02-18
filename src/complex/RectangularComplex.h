#pragma once

#include <ostream>

#include "IComplexNumber.h"

/**
 * Class that represents a complex numbers in 2 dimensions (z = real +
 * imaginary*i).
 */
class RectangularComplex : public IComplexNumber {
public:
  RectangularComplex(const double real, const double imaginary);

  ///@copydoc IComplexNumber::getReal
  const double getReal() override;
  ///@copydoc IComplexNumber::getImaginary
  const double getImaginary() override;

  /**
   * @brief Insertor operator for console printing.
   * @param[out] os output stream
   * @param rc complex number in rectangular form
   * @return output stream
   */
  friend std::ostream &operator<<(std::ostream &os,
                                  const RectangularComplex &rc);

  ///@copydoc IComplexNumber::getAbs
  const double getAbs() override;
  ///@copydoc IComplexNumber::getAngle
  const double getAngle() override;

private:
  double m_imaginary;
  double m_real;
};