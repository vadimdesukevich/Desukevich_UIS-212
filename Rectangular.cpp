#include"Rectangular.h"
Rectangular::Rectangular(double a, double b, unsigned int f) :Triangle(a, b, f) {}
double Rectangular::Perimetr()const {
	return side1 + side2 + sqrt(pow(side1,2)+pow(side2,2));
}
double Rectangular::Square()const {
	return side1*side2/2;
}