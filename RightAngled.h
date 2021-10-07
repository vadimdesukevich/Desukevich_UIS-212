#pragma once
#include"Pair.h"
#include<iostream>
#include<exception>
using namespace std;
	/**
	* \brief  ласс RightAngled, наледованный от Pair
	*/
class RightAngled : public Pair {
private:
	double cathet1, cathet2;
public:
	/**
	* \brief  онструктор по умолчанию
	*/
	explicit RightAngled() = default;

	/**
	* \brief  онструктор с параметрами
	*/
	explicit RightAngled(double cathet1, double cathet2);

	/**
	* \brief ƒеструктор по умолчанию
	*/
	~RightAngled() = default;

	/**
	* \brief ћетод, вычисл¤ющий длину гипотенузы
	* \return гипотенуза гипотенуза
	*/
	double Hypotenuse()const;

	/**
	* \brief ћетод, вычисл¤ющий площадь треугольника
	* \return ѕлощадь треугольника
	*/
	double Square()const;
};