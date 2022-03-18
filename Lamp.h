#pragma once

#include "Coordinates.h"

class Lamp {
private:
    Coordinates r;
    float intensity;
    int N;
public:
    Lamp (Coordinates r, float intensity, int N)
            : r(r)
    {
        this->r = r;
        this->intensity = intensity;
        this->N = N;
    }
};