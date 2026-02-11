// Задание 7: Добавьте прототип функции, которая принимает большой 
// и маленький целочисленные значения и возвращает их разность.

#include <iostream>
using namespace std;

int main()
{
    cout << subtract(10000000000LL, 100);
    return 0;
}

long subtract(long long num, int num2) 
{
    return num-num2;
}
