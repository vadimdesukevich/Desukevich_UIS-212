#pragma once
#include"Triangle.h"
/**
* \brief † ласс пр¤моуголььный треугольник
*/
class Rectangular :Triangle {
public:
	/**
	* \brief † онструктор с параметрами
	*/
	Rectangular(double a, double b, unsigned int f);

	/**
	* \brief †ƒеструктор по умолчанию
	*/
	~Rectangular() = default;

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