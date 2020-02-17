#include <math.h>

#include "PolarComplex.h"


PolarComplex::PolarComplex(const double abs, const double angle) {
    m_abs = abs;
    m_angle = angle;
}

const double PolarComplex::getAbs() {
    return m_abs;
}

const double PolarComplex::getAngle() {
    return m_angle;
}

std::ostream &operator<<(std::ostream &os, const PolarComplex &pc) {
    os << pc.m_abs << " + exp(" << pc.m_angle << "i)";
    return os;
}

const double PolarComplex::getReal() {
    return m_abs * cos(m_angle);
}

const double PolarComplex::getImaginary() {
    return m_abs * sin(m_angle);
}
