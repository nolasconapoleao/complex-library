#pragma once

/**
 * Class that represents a complex numbers in 2 dimensions.
 */
class IComplexNumber {
  /**
   * @brief Obtain modulus of the complex number.
   * @return modulus of complex number
   */
  virtual const double getAbs() = 0;

  /**
   * @brief Obtain phase of the complex number.
   * @return modulus of phase number
   */
  virtual const double getAngle() = 0;

  /**
   * @brief Obtain real part of complex number.
   * @return real part of complex number
   */
  virtual const double getReal() = 0;

  /**
   * @brief Obtain imaginary part of complex number.
   * @return imaginary part of complex number
   */
  virtual const double getImaginary() = 0;
};
