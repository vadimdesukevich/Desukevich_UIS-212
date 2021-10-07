#include<iostream>
#include"Equilateral.h"
#include"Isosceles.h"
#include"Rectangular.h"
int main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	cout << "Выбирете фигуру:\n1 - Равнобедренный\n2 - Равносторонний\n3 - Прямоугольный" << endl;
	int a;
	cin >> a;
	Isosceles ObjIsosceles(5, 7, 60);
	Equilateral ObjEquilateral(5,5,40);
	Rectangular ObjRectangular(3, 4, 90);
	switch (a)
	{
	case 1:
		cout << "Периметр равнобедренного: " << ObjIsosceles.Perimetr() << endl;
		cout << "Площадь равнобедренного: " << ObjIsosceles.Square() << endl;
		break;
	case 2:
		cout << "Периметр равностороннего: " << ObjEquilateral.Perimetr() << endl;
		cout << "Площадь равностороннего: " << ObjEquilateral.Square() << endl;
		break;
	case 3:
		cout << "Периметр прямоугольного: " << ObjRectangular.Perimetr() << endl;
		cout << "Площадь прямоугольного: " << ObjRectangular.Square() << endl;
		break;
	default:
		cout << "Фигура выбрана не правильно." << endl;
		break;
	}
}