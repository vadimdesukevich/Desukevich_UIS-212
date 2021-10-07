#pragma once
#include"Triangle.h"
/**
* \brief † ласс равносторонний тругольник
*/
class Equilateral :Triangle {
public:
	/**
	* \brief † онструктор с параметрами
	*/
	Equilateral(double a, double b, unsigned int f);

	/**
	* \brief †ƒеструктор по умолчанию
	*/
	~Equilateral() = default;

	/**
	* \brief ћетод,вычисл¤ющий периметр фигуры
	* \return Њериметр фигуры
	*/
	double Perimetr()const;

	/**
	* \brief ћетод,вычисл¤ющий площадь фигуры
	* \return ѕлощадь фигуры
	*/
	double Square()const;
};