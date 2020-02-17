#include "../complex/PolarComplex.h"
#include "../complex/RectangularComplex.h"

namespace complex {
    inline PolarComplex toPolar(RectangularComplex rc) {
        return PolarComplex(rc.getAbs(), rc.getAngle());
    }

    inline RectangularComplex toRectangular(PolarComplex pc) {
        return RectangularComplex(pc.getReal(), pc.getImaginary());
    }
};
