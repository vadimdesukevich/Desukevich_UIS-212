#include"RightAngled.h"
RightAngled::RightAngled(double cathet1, double cathet2) :Pair(cathet1, cathet2) {
	if (cathet1 > 0 && cathet2 > 0) {
		this->cathet1 = cathet1;
		this->cathet2 = cathet2;
	}
	else
		throw invalid_argument{ "Катеты введены неверно" };
}

double RightAngled::Hypotenuse()const {
	return sqrt(pow(cathet1, 2) + pow(cathet2, 2));
}
double RightAngled:: Square()const {
	return cathet1 * cathet2 / 2;
}