/*
Author: Patrick Kelly
Date Created: 13/02/18
*/

#include <iostream>
#include "Circle.h"
#include "TestCircle.h"
#include <math.h>
#define PI 3.147 // This is used in the equation to get the area of the circle

// Default Constructor
Circle::Circle() {
#if VERBOSE
	std::cout << "Executing Circle Default Constructor" << std::endl;
#endif
	cpoint = 4;
	rad = 4;
} 

// 2-Argument Constructor
Circle::Circle(double c, double r) {
#if VERBOSE
	std::cout << "Executing Circle 2-Argument Constructor" << std::endl;
#endif

	cpoint = c;
	rad = r;
}

// Copy Constructor
Circle::Circle(const Circle &c) {
#if VERBOSE
	std::cout << "Executing Circle Copy Constructor" << std::endl;
#endif
	cpoint = c.GetCPoint();
	rad = c.GetRad();
}

// Destructor
Circle::~Circle() {
#if VERBOSE
	std::cout << "Executing Circle Destructor" << std::endl;
#endif
}

// Accessor or Mutator Methods
void Circle::SetCPoint(double val) {
	cpoint = val;
}

void Circle::SetRad(double val) {
	rad = val;
}

double Circle::GetCPoint() const {
	return cpoint;
}

double Circle::GetRad() const {
	return rad;
}

double Circle::GetAreaOfCircle(const Circle & c)
{
	double out = PI * rad * rad; // Equation to get the area of the circle.
	return out;
}

std::ostream& operator<<(std::ostream &output, Circle &c) {
	output << "(" << c.GetCPoint() << "," << c.GetRad() << ")" << std::endl;
	return output;
}