#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>
#define PI   3.14159265358979323846
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int action;
	double a, b;
	while (1) {
		printf("\n�������� ��������:\n");
		printf("1) ������ 1.\n");
		printf("2) ������ 2.\n");
		printf("3) ������ 3.\n");
		scanf("%d", &action);
		switch (action) {
		case 1:
			printf("������� �������� a:\n");
			scanf("%lf", &a);
			printf("������� �������� b:\n");
			scanf("%lf", &b);
			printf("���� �������������� ���������: \n");
			printf("\n7,8*b+pow(sin, 2)*(8,5*pow(a,2)-2*a*b+4,7*b)\n");
			printf("-----------------------------------------------------\n");
			printf("sqrt((2,6+(1,3*PI-cos*(pow(b,2) - a)/18,87*b+7,85*a))\n");
			printf("\n�������� ��������������� ��������� = %lf", (7.8 * b + (pow((sin(8.5 * pow(a, 2) - 2 * a * b + 4.7 * b)), 2)) / sqrt((2.6 + (1.3 * PI - (cos(pow(b, 2) - a)) / 18.87 * b + 7.85 * a)))));
			break;
			system("pause");
		case 2:

			break;
		}
	}
}