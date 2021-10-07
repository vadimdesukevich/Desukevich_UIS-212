#include"Equilateral.h"
Equilateral::Equilateral(double a, double b, unsigned int f) :Triangle(a, b, f) {}
double Equilateral::Perimetr()const {
	return side1 * 3;
}
double Equilateral::Square()const {
	return pow(side1,2)*sqrt(3)/4;
}