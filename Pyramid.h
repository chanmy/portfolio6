#ifndef PYRAMID_H
#define PYRAMID_H

#include <math.h>

class Pyramid{
public:
	double length;
	double width;
	double height;
	
private:	
	double getBaseArea() {
		return length * width;	
	}
	
	double getVolumePyramid() {
		return (getBaseArea() * height)/3;
	}
	
	double getSurfaceArea() {
		return getBaseArea() + getLHTriArea() + getWHTriArea();
	}
	
	double getLHTriArea() {
		return 0.5 * length * sqrt(pow(height, 2) + pow(width/2, 2));
	}
	
	double getWHTriArea() {
		return 0.5 * width * sqrt(pow(height, 2) + pow(length/2, 2));
	}
	
	double totalArea() {
		return getBaseArea + 2 * getLHTriArea() + 2 * getWHTriArea();
	}
    
};
#endif