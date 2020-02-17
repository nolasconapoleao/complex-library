#include "../complex/RectangularComplex.h"
#include "../complex/PolarComplex.h"
#include "ComplexConverter.cpp"

namespace complex {

    inline RectangularComplex operator+(RectangularComplex rc1, RectangularComplex rc2) {
        const double real = rc1.getReal() + rc2.getReal();
        const double imaginary = rc1.getImaginary() + rc2.getImaginary();
        return RectangularComplex(real, imaginary);
    }

    inline RectangularComplex operator+(RectangularComplex rc, PolarComplex pc) {
        auto rc2 = toRectangular(pc);
        const double real = rc.getReal() + rc2.getReal();
        const double iamginary = rc.getImaginary() + rc2.getImaginary();
        return RectangularComplex(real, iamginary);
    }

    inline PolarComplex operator+(PolarComplex pc1, PolarComplex pc2) {
        auto rc1 = toRectangular(pc1);
        auto rc2 = toRectangular(pc2);
        const double real = rc1.getReal() + rc2.getReal();
        const double iamginary = rc1.getImaginary() + rc2.getImaginary();
        RectangularComplex resRec(real, iamginary);
        PolarComplex resPol = toPolar(resRec);
        return resPol;
    }

    inline PolarComplex operator+(PolarComplex pc, RectangularComplex rc) {
        auto rc2 = toRectangular(pc);
        const double real = rc.getReal() + rc2.getReal();
        const double iamginary = rc.getImaginary() + rc2.getImaginary();
        RectangularComplex resRec(real, iamginary);
        PolarComplex resPol = toPolar(resRec);
        return resPol;
    }

};
