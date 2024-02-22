// Vezba03b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double x, y, R, x2, y2, R2, D;
	printf("Unesi x:\n");
	scanf("%lf", &x);
	printf("Unesi y:\n");
	scanf("%lf", &y);
	if (x > 0)
		if (y > 0)
			printf("I kvadrant\n");
		else
			printf("IV kvadrant\n");
	else
		if (y > 0)
			printf("II kvadrant\n");
		else
			printf("III kvadrant\n");
	R = sqrt(x * x + y * y); 
	printf("R = %lf\n", R); 
	// unos koordinata druge tacke
	printf("Unesi x2:\n");
	scanf("%lf", &x2);
	printf("Unesi y2:\n");
	scanf("%lf", &y2);
	R2 = sqrt(x2 * x2 + y2 * y2);
	printf("R2 = %lf\n", R2);
	D = sqrt((x - x2) * (x - x2) + 
		(y - y2) * (y - y2));
	printf("D = %lf\n", D);
	return 0;



}
