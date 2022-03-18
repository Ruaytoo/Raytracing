#pragma once

#include <math.h>

class Indicatrix {
public:
    float eval(float x) {
        return 1.1 * (1 + 0.838*cos(x)*cos(x));
    }
};