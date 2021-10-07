#include"Isosceles.h"
Isosceles::Isosceles(double a, double b, unsigned int f) :Triangle(a,b,f){}
double Isosceles::Perimetr() const{
	return 2 * side1 + side2;
}
double Isosceles::Square()const {
	return side2 * sqrt(pow(side1, 2) - pow(side2, 2) / 4) / 2;
}