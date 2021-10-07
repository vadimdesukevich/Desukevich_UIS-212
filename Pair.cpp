#include"Pair.h"
Pair::Pair(double first, double second) :first{ first }, second{ second }{}
void Pair::setFirst(double a) {	first = a;}
void Pair::setSecond(double a) { second = a;}
double Pair::Composition()const {
	return first * second;
}