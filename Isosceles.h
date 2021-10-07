#pragma once
#include"Triangle.h"
/**
* \brief † ласс равнобедренный треугольник
*/
class Isosceles :Triangle {
public:
	/**
	* \brief † онструктор с параметрами
	*/
	Isosceles(double a, double b, unsigned int f);

	/**
	* \brief †ƒеструктор по умолчанию
	*/
	~Isosceles() = default;

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