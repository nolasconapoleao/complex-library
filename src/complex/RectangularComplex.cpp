#include "math.h"

#include "RectangularComplex.h"

RectangularComplex::RectangularComplex(const double real, const double imaginary) {
    m_real = real;
    m_imaginary = imaginary;
}

const double RectangularComplex::getReal() {
    return m_real;
}

const double RectangularComplex::getImaginary() {
    return m_imaginary;
}

std::ostream &operator<<(std::ostream &os, const RectangularComplex &rc) {
    os << rc.m_real << " + " << rc.m_imaginary << "i";
    return os;
}

const double RectangularComplex::getAbs() {
    return sqrt(pow(m_real,2)+pow(m_imaginary,2));
}

const double RectangularComplex::getAngle() {
    return atan2(m_imaginary, m_real);
}
