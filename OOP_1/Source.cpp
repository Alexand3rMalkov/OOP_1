#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>
#define PI   3.14159265358979323846
using namespace std;

double F(double x, double eps);

int main()
{
	setlocale(LC_ALL, "rus");
	int action, z;
	double a, b, eps, x;
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
				eps = 0.001, x = 0.5;
				cout << "F(" << x << ") = " << F(x, eps) << endl;
				x = PI / 3;
				cout << "F(pi/3) = " << F(x, eps) << endl;
				x = 1;
				cout << "F(" << x << ") = " << F(x, eps) << "\n";
				
				system("pause");
			break;
		case 3:
			cout << "Введите число для проверки: ";
			cin >> z;
			if ((z > -6) && (z < -2))
				cout << "Число проходит проверку.\n";
			else cout << "Число не проходит проверку.\n";
			system("pause");
			break;
		}
	}
}

double F(double x, double eps)
{
	double r = 0, prev = 0, u = cos(x), res = u;
	int n = 1, sgn = 1;
	while (r < -eps || eps < r)
	{
		prev = u;
		n++;
		sgn = -sgn;
		u = sgn * cos(n * x) / n;
		r = u - prev;
		res += u;
	}
	return res;
}
