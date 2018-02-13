/*
Author: Patrick Kelly
Date Created: 13/02/18
*/

#include "Circle.h"
#include "TestCircle.h"

int main(int argc, char **argv, const Circle &c) {
	TestDefaultConstructor();
	TestSetter();
	TestTwoArgConstructor();
	TestCopyConstructor();
	TestFunctionPointers(argc, argv);
	TestDestructor();
	TestCircleEquation(c);
	TestNotDefined();
}