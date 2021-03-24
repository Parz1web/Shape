#include <iostream>
#include "Shape.h"
using namespace std;

void Square() {

}

int main()
{
	setlocale(LC_ALL, "rus");
	Shape* triangle = new Shape(2, 8, 4, 5);
	cout << "Первая сторона треугольника: " << triangle->firstSideGet() << endl;
	cout << "Вторая сторона треугольника: " << triangle->secondSideGet() << endl;
	cout << "Третья треугольника: " << triangle->thirdSideGet() << endl;
	cout << "Высота треугольника: " << triangle->heightGet() << endl;
	cout << "Площадь треугольника: " << triangle->triangleSquareGet() << endl;
	cout << "Периметр треугольника: " << triangle->trianglePerimetrGet() << endl;

	cout << "<------------------------------------->" << endl;

	Shape* circle = new Shape(8);
	cout << "Диаметр окружности: " << circle->heightGet() << endl;
	cout << "Площадь окружности: " << circle->circleSquareGet() << endl;
	cout << "Длина окружности: " << circle->circleLengthGet() << endl;
}

