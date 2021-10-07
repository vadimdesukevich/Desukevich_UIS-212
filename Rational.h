#pragma once
#include<iostream>
using namespace std;
	/**
	* \brief Класс рациональная дробь
	*/
class Rational {
private:
	int  num, den;
	/**
	* \brief Функция сокращения дроби
	*/
	void Reduce();
public:
	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Rational() = default;

	/**
	* \brief Конструктор с праметрами
	*/
	explicit Rational(int a, int b);
	/**
	* \brief Сложение дробей
	* \param Other Дробь
	* \return Полученная дробь
	*/
	Rational Add(const Rational& Other)const;

	/**
	* \brief Вычитание дробей
	* \param Other Дробь
	* \return Полученная дробь
	*/
	Rational Sub(const Rational& Other)const;

	/**
	* \brief Умножение дробей
	* \param Other Дробь
	* \return Полученная дробь
	*/
	Rational Mul(const Rational& Other)const;

	/**
	* \brief Деление дробей
	* \param Other Дробь
	* \return Полученная дробь
	*/
	Rational Div(const Rational& Other)const;

	/**
	* \brief Перегрузка оператора >
	* \param Other Дробь
	*/
	bool operator > (const Rational& Other)const;

	/**
	* \brief Перегрузка оператора <
	* \param Other Дробь
	*/
	bool operator < (const Rational& Other)const;

	/**
	* \brief Перегрузка оператора ==
	* \param Other Дробь
	*/
	bool operator == (const Rational& Other)const;

	/**
	* \brief Перегрузка оператора <<
	* \param Other Дробь
	*/
	friend ostream& operator << (ostream& out,const Rational& Other);
};