#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159265358979323846

void t1() {
	float g;
	float agl;
	float res;
	printf("Введите угол в градусах ");
	scanf_s("%f", &g);

	agl = g * PI / 180;
	//printf("Угол в радианах: %.6f\n", agl);

	res = sin(agl);
	printf("Синус угла: %.6f", res);
}

double ca(double x)
{
	return log(x);
}

double cb(double x)
{
	double t = -6;
	return sqrt(pow(x, 2.) + pow(t, 2.));
}

double cy(double x)
{
	double a = ca(x);
	double b = cb(x);
	return pow(fabs(a - b * x), 1 / 5.);
}

void t2()
{
	double x, y;
	printf("x = ");
	scanf_s("%lg", &x);

	y = cy(x);
	printf("y = %.4f", y);
}

void t3()
{
	double x;
	printf("x = ");
	scanf_s("%lg", &x);

	int a = ca(x);
	int b = cb(x);
	int c = cy(x);
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	
	printf("Только одно число из А и В чётное (1 - да, 0 - нет) ");
	int ta = (a % 2 == 0) + (b % 2 == 0) == 1;
	printf("%d\n", ta);

	printf("Каждое из чисел A,B,C кратно трём (1 - да, 0 - нет) ");
	int tb = (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0);
	printf("%d\n", tb);
}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	//t1();

	//2 задание (4 вариант)
	//t2();

	//3 задание
	t3();
}