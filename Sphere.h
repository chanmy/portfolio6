#ifndef SPHERE_H
#define SPHERE_H

#include <math.h>

class Sphere{
public:
	double radius;
	
private:
	double getArea(){
		return 4.0 * 22 / 7 * pow(radius, 2);	
	}
	
	double getVolume(){
		return 4.0 / 3 * 22 / 7 * pow(radius, 3);	
	}
};
#endif
