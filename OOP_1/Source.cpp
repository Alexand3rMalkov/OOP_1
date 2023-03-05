#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>
#define PI   3.14159265358979323846
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int action, z;
	double a, b;
	while (1) {
		cout << "\nВыберите действие:\n"
			"1) Задача 1.\n"
			"2) Задача 2.\n"
			"3) Задача 4.\n" << endl;
		cin >> action;
		switch (action) {
		case 1:
			cout << "Введите значение a:\n";
			cin >> a;
			cout << "Введите значение b:\n";
			cin >> b;
			cout << "Дано алгебраическое выражение: \n"
			"\n7,8*b+pow(sin, 2)*(8,5*pow(a,2)-2*a*b+4,7*b)\n"
			"-----------------------------------------------------\n"
			"sqrt((2,6+(1,3*PI-cos*(pow(b,2) - a)/18,87*b+7,85*a))\n" << endl;
			printf("\nЗначение алгебраического выражения = %lf", (7.8 * b + (pow((sin(8.5 * pow(a, 2) - 2 * a * b + 4.7 * b)), 2)) / sqrt((2.6 + (1.3 * PI - (cos(pow(b, 2) - a)) / 18.87 * b + 7.85 * a)))));
			break;
			system("pause");
		case 2:
			break;
		case 3:
			cout << "Введите число для проверки: ";
			cin >> z;
			if ((z > -6) && (z < -2))
				cout << "Число проходит проверку.\n";
			else cout << "Число не проходит проверку.";
			system("pause");
			break;
		}
	}
}
