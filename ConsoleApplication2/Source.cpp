﻿#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>
using namespace std;
int N=1;
void main()
{
	setlocale (LC_ALL, "Rus");
	cout << "Введите значение N: ";
	cin >> N;
		//Лабораторная работа от 25.11.2017
		// 1. Найти значение функции y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7 при данном значении x
	if (N == 1)
	{
		double x, y;
		cout << "Введите значение x: ";
		cin >> x;
		y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
		cout << "Результат " << y << endl;
		system("PAUSE");
	}
		else if (N == 2)
		//2.	Найти значение функции y = 4*pow((x-3),6) − 7*pow((x−3),3) + 2 при данном значении x.
	{
		double x, y;
		cout << "Введите значение x: ";
		cin >> x;
		y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
		cout << "Результат " << y << endl;
		system("PAUSE");
	}
		else if (N == 3)
	{
		//3.Дано число A.Вычислить A8, используя вспомогательную переменную и три операции умножения.
		//	Для этого последовательно находить A2, A4, A8.Вывести все найденные степени числа A.
		int a, у;
		cout << "Введите значение a ";
		cin >> a;
		у = a * a;
		cout << у << endl;
		у = a * a * a * a;
		cout << у << endl;
		у = у * у;
		cout << у << endl;
		system("PAUSE");
	}
		else if (N == 4)
		//3.4.	Дано число A. Вычислить A15, используя две вспомогательные переменные и 
		//пять операций умножения. Для этого последовательно находить A2, A3, A5, A10, A15. 
		//Вывести все найденные степени числа A.
	{
		double A, x, y;
		cout << "Введите значение А: ";
		cin >> A;
		x = A*A;
		cout << x << endl;
		x = A*A*A;
		cout << x << endl;
		x = A*A*A*A*A;
		cout << x << endl;
		y = x*x;
		cout << y << endl;
		y = x*x*x;
		system("PAUSE");
	}
		else if (N == 5)
		//5.	Дано значение температуры T в градусах Фаренгейта.Определить значение этой 
		//же температуры в градусах Цельсия.Температура по Цельсию TC и температура по 
		//Фаренгейту TF связаны следующим соотношением : TC = (TF − 32)·5 / 9.
	{
		double TC, TF;
		cout << "Введите значение температуры в грaдусах Фаренгейта" << endl;
		cin >> TF;
		TC = (TF - 32) * 5 / 9;
		cout << "Значение температуры в градусах Цельсия - " << TC << endl;
		system("PAUSE");
		}
}