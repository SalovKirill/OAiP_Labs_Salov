Салов Кирилл Андреевич
Лабораторная работа №1
Вариант №8
Задание : Перевести километры в ярды и выразить в дюймах
	* /

#include "stdafx.h"
#include <stdio.h>
#define Yards_In_Kms 1093.6133;
#define Inches_In_Yards 36;

	int main()
{
	printf("Enter length in kilometres\n");
	float kms;
	scanf_s("%f", &kms);
	float yards = kms * Yards_In_Kms;
	printf("Length in yards is %1.2f\n", yards);
	float inches = yards * Inches_In_Yards;
	printf("Length in inches is %1.2f\n", inches);
	return 0;
}