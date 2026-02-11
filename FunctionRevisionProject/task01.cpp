// Задание 1: Добавьте прототип функции, которая принимает целочисленное 
// и вещественное значения и возвращает их произведение.

#include <iostream>
using namespace std;

float multiply(double num, double num2);

int main()
{
	cout << multiply(5, 3.5f);
	return 0;
}

float multiply(double num, double num2) {
	return num * num2;
}