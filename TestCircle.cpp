/*
Author: Patrick Kelly
Date Created: 13/02/18
*/

#include "Circle.h"
#include "TestCircle.h"
#include <iostream>
#include <cstdlib>

int TestDefaultConstructor() {
	Circle c1(2,2);

	std::cout << "Testing Default Constructor" << std::endl;

	std::cout << "Getting Centre Point" << std::endl;
	std::cout << c1.GetCPoint() << std::endl;

	std::cout << "Getting Radius" << std::endl;
	std::cout << c1.GetRad() << std::endl;

	std::cout << "Overloading C1" << std::endl;
	std::cout << c1 << std::endl;

	return 0;
}

int TestSetter() {
	Circle c1;

	c1.SetCPoint(6);
	c1.SetRad(-8);

	std::cout << "Testing Setter" << std::endl;

	std::cout << "Getting Centre Point" << std::endl;
	std::cout << c1.GetCPoint() << std::endl;

	std::cout << "Getting Radius" << std::endl;
	std::cout << c1.GetRad() << std::endl;

	std::cout << "Overloading C1" << std::endl;
	std::cout << c1 << std::endl;

	return 0;
}

int TestTwoArgConstructor() {
	Circle c1(5, 2);

	std::cout << "Testing Two Argument Constructor" << std::endl;

	std::cout << "Getting Centre Point" << std::endl;
	std::cout << c1.GetCPoint() << std::endl;

	std::cout << "Getting Radius" << std::endl;
	std::cout << c1.GetRad() << std::endl;

	std::cout << "Overloading C1" << std::endl;
	std::cout << c1 << std::endl;

	return 0;
}

int TestCopyConstructor() {
	Circle c1;
	Circle c2(c1);

	std::cout << "Testing Copy Constructor" << std::endl;

	std::cout << "Getting Centre Point" << std::endl;
	std::cout << c2.GetCPoint() << std::endl;

	std::cout << "Getting Radius" << std::endl;
	std::cout << c2.GetRad() << std::endl;

	std::cout << "Overloading C2" << std::endl;
	std::cout << c2 << std::endl;

	return 0;
}

int TestDestructor() {
	std::cout << "Testing Destructor" << std::endl;

	return 0;
}

double TestCircleEquation(const Circle &c) {
	Circle c1;
	std::cout << "Testing Get Area Of Circle: " << c1.GetAreaOfCircle(c) << std::endl;

	return 0;
}

int TestFunctionPointers(int argc, char**argv) {
	int(*TestFuncs[])() = { TestDefaultConstructor, TestSetter, TestCopyConstructor, TestDestructor, TestTwoArgConstructor };
	const int nTest = sizeof(TestFuncs) / sizeof(void*);

	for (int i = 0; i < argc; i++) 
	{
		// int conversion
		int test = atoi(*(argv + i));

		// Check index range
		if (test >= 0 && test < nTest)
		{
			(*TestFuncs[test])();
		}
		else
		{
			TestNotDefined();
		}
	}
	return 0;
}

void TestNotDefined() {
	std::cout << "Test Not Defined! Make sure it is within the index range" << std::endl;
}