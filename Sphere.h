#ifndef SPHERE_H
#define SPHERE_H

#include <math.h>

class Sphere{
private:
	double radius;
	
public:
	Sphere(){}
	
	Sphere(double r){
		radius = r;	
	}
	
	double getFullArea(){
		return 4.0 * 22 / 7 * pow(radius, 2);	
	}
	
	double halfArea(){
		return 4.0 * 22 / 7 * pow(radius, 2) / 2;	
	}
	
	double quarterArea(){
		return 4.0 * 22 / 7 * pow(radius, 2) / 4;	
	}
	
	double eighthArea(){
		return 4.0 * 22 / 7 * pow(radius, 2) / 8;	
	}
	
	double getFullVolume(){
		return 4.0 / 3 * 22 / 7 * pow(radius, 3);	
	}
	
	double halfVolume(){
		return 4.0 / 3 * 22 / 7 * pow(radius, 3) / 2;	
	}
	
	double quarterVolume(){
		return 4.0 / 3 * 22 / 7 * pow(radius, 3) / 4;	
	}
	
	double eighthVolume(){
		return 4.0 / 3 * 22 / 7 * pow(radius, 3) / 8;	
	}
};
#endif
