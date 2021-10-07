#include"Rational.h"
Rational::Rational(int num, int den) :num{ num }, den{ den }{Reduce();}
void Rational::Reduce() {
    int j=0, less;
    while (j != 1){                                         
        less = den;
        for (j = less; j > 0; j--) {                   
            if (num % j == 0 && den % j == 0) {
                num /= j;
                den /= j;
                break;                              
            }
        }
    } 
}
Rational Rational::Add(const Rational& Other)const {
    if (this->den == Other.den)
        return Rational(this->num + Other.num, den);
    else
        return Rational(num * Other.den + den * Other.num, den * Other.den);
}
Rational Rational:: Sub(const Rational& Other)const {
    if (this->den == Other.den)
        return Rational(this->num - Other.num, den);
    else
        return Rational(num * Other.den - den * Other.num, den * Other.den);
}
Rational Rational::Mul(const Rational& Other)const {
    return Rational(num * Other.num, den * Other.den);
}

Rational Rational::Div(const Rational& Other)const {
    return Rational(num * Other.den, den * Other.num);
}
bool Rational:: operator  > (const Rational& Other)const {
    return double(num) / den > double(Other.num) / Other.den;
}
bool Rational:: operator < (const Rational& Other)const {
    return double(num) / den < double(Other.num) / Other.den;
}
bool Rational:: operator == (const Rational& Other)const {
    return double(num) / den == double(Other.num) / Other.den;
}
