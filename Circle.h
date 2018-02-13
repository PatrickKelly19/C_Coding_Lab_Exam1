/*
Author: Patrick Kelly
Date Created: 13/02/18
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#define VERBOSE 1 // Used for debugging purposes

#include <iostream>

class Circle {

private:
	double cpoint;
	double rad;

public:
	Circle();
	Circle(double, double);
	Circle(const Circle &c);
	~Circle();

	void SetCPoint(double val);
	void SetRad(double val);

	double GetCPoint() const;
	double GetRad() const;

	double GetAreaOfCircle(const Circle &c); // Get the area of the circle (PI*Radius*Radius)

	friend std::ostream &operator<< // Overloading
		(std::ostream &, Circle &c);
}; 
#endif // !CIRCLE_H