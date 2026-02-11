// Задание 1: Добавьте прототип функции, которая принимает целочисленное 
// и вещественное значения и возвращает их произведение.

#include <iostream>
using namespace std;

int main()
{
	cout << multiply(5, 3.5f);
	return 0;
}

double multiply(double num, double num2) {
	return num * num2;
}