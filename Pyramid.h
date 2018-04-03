#ifndef PYRAMID_H
#define PYRAMID_H

#include <cmath.h>
using namespace std;

class Pyramid{
public:
	double length;
	double width;
	double height;
	
private:
	
	double getBaseArea() {
		return length * width;	
	}
	
	double getTriAreaLengthHeight() {
		return length * (sqrt(pow(width/2, 2) + pow(height, 2));
	}
				 
	double getTriAreaWidthHeight() {
		return width * (sqrt(pow(length/2, 2) + pow(height, 2));
	}	

	double getVolumePyramid() {
		return (getBaseArea() * height)/3;
	}
	
	double getSurfaceArea() {
		return getBaseArea() + getTriAreaLengthHeight() + getTriAreaWidthHeight();
	}
};
#endif
