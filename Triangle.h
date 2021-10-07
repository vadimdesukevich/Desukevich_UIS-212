#pragma once
#include<cmath>
/**
* \brief † ласс треугольник
*/
class Triangle {
protected:
	double side1, side2;
	unsigned int angle;
public:
	/**
	* \brief ¬иртуальный метод,вычисл¤ющий периметр фигуры
	*/
	virtual double Perimetr()const = 0;
	/**
	* \brief ¬иртуальный метод,вычисл¤ющий площадь фигуры
	*/
	virtual double Square()const = 0;

	/**
	* \brief ¬иртуальный  деструктор
	*/
	virtual ~Triangle()=0;
	/**
	* \brief  онструктор с параметрами
	*/
	explicit Triangle(double a, double b, unsigned int f);
};
