#pragma once

#include "Coordinates.h"
#include <vector>
#include <math.h>

class Rotation_Matrix {
public:
	float a11, a12, a13;
	float a21, a22, a23;
	float a31, a32, a33;

	Rotation_Matrix(Coordinates o, float d)
	{
		a11 = (o.x*o.x - o.y*o.y - o.z*o.z) * sin(d/2)*sin(d/2) + cos(d/2)*cos(d/2);
		a12 = 2 * sin(d/2) * (o.x*o.y*sin(d/2) - o.z*cos(d/2));
		a13 = 2 * sin(d/2) * (o.x*o.z*sin(d/2) + o.y*cos(d/2));

		a21 = 2 * sin(d/2) * (o.x*o.y*sin(d/2) + o.z*cos(d/2));
		a22 = (o.y*o.y - o.x*o.x - o.z*o.z) * sin(d/2)*sin(d/2) + cos(d/2)*cos(d/2);
		a23 = 2 * sin(d/2) * (o.y*o.z*sin(d/2) - o.x*cos(d/2));

		a31 = 2 * sin(d/2) * (o.x*o.z*sin(d/2) - o.y*cos(d/2));
		a32 = 2 * sin(d/2) * (o.y*o.z*sin(d/2) + o.x*cos(d/2));
		a33 = (o.z*o.z - o.x*o.x - o.y*o.y) * sin(d/2)*sin(d/2) + cos(d/2)*cos(d/2);
	}


	Coordinates mul(const Coordinates x)
	{
		Coordinates n(0,0,0);
		n.x = a11*x.x + a12*x.y + a13*x.z;
		n.y = a21*x.x + a22*x.y + a23*x.z;
		n.z = a13*x.x + a32*x.y + a33*x.z;
		return n;
	}
};
