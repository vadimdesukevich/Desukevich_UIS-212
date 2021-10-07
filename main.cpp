#include"Rational.h"
ostream& operator <<(ostream& out,const Rational& Other) {
	out << Other.num << "/" << Other.den;
	return out;
}
int main() {
	setlocale(LC_ALL, "Russian");
	Rational Fraction(1,2);
	Rational Fraction2(1,3);
	cout << Fraction.Add(Fraction2) << endl;
	cout << Fraction.Sub(Fraction2) << endl;
	cout << Fraction.Mul(Fraction2) << endl;
	cout << Fraction.Div(Fraction2) << endl;
	if (Fraction > Fraction2)
		cout << "ѕерва¤ дробь больше" << endl;
	else if (Fraction < Fraction2)
		cout << "¬тора¤ дробь больше" << endl;
	else
		cout << "ƒроби равны" << endl;
}