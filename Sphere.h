#ifndef SPHERE_H
#define SPHERE_H

#include <math.h>

class Sphere{
public:
	Sphere(double r){
		radius = r;	
	}
	
private:
	double setRadius(double r) {
		radius = r;
	}
	double getSurfaceArea() {
		return 4 * 3.142 * pow(radius, 2);
	}
	double getDiameterRadius() {
		return 2 * radius;	
	}
	double getVolumeSphere() {
		return (4/3) * 3.142 * pow(radius, 3);	
	}
	
	double test() {
		
	}
};
#endif
