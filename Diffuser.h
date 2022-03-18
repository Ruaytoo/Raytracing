#pragma once

#include "Indicatrix.h"

const float dg = 1e-3;

class Diffuser {
public:
    float D;
    float r;
    Diffuser (Indicatrix x, float r)
    {
        float x1 = 0;
        this->r = r;

        for (float g = 0; g < M_PI; g += dg)
        {
            x1 += dg * x.eval(g) * cos(g) * sin(g);
        }

        x1 *= 1.5;
        this->D = (3 - x1) / 6;
    }

    Diffuser (float D, float r)
    {
        this->r = r;
        this->D = D;
    }

    Diffuser(const Diffuser &d) {
        r = d.r;
        D = d.D;
    }
};