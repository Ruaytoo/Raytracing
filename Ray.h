#pragma once
#include "Coordinates.h"
#include "Rotation.h"
#include <math.h>

const int c = 299792458;

class Ray {
public:
    Coordinates n;
    Coordinates r;
    int k;
    float len;
    Ray (Coordinates r_0, Coordinates n_0)
            : r(r_0), n(n_0)
    {
        if (n.x == n.y == n.z == 0) throw std::invalid_argument( "n cannot be 0");
        this->len = 0;
        k = 0;
    }

    void Next_step(const int& h) {
        r = (h * c * n) + r;
        float a = 0.5l
        n = Rotation_Matrix(Rotation_Matrix(n, 2*M_PI*a), )
        k++;
    }

};