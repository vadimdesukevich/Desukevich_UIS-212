#pragma once
#include<cmath>
	/**
	* \brief Класс Pair
	*/
class Pair {
private:
	double first, second;
public:
	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Pair() = default;

	/**
	* \brief Конструктор с параметрами
	*/
	explicit Pair(double first, double second);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Pair() = default;

	/**
	* \brief Метод, изменяющий значение поля first
	* \param a число
	* \return Разница между датами в днях
	*/
	void setFirst(double a);

	/**
	* \brief Метод, изменяющий значение поля second
	* \param a число
	* \return Разница между датами в днях
	*/
	void setSecond(double a);

	/**
	* \brief Метод, считающий призведение полей
	* \return Произведение
	*/
	double Composition()const;
};