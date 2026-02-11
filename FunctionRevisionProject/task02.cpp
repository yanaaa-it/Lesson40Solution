// Задание 2: Объявите функцию `sum_large`, которая принимает небольшое 
// и большое целые числа и возвращает их сумму.

#include <iostream>
using namespace std;

long sum_large(int num, long long num2);

int main()
{
    cout << sum_large(100, 10000000000LL);
    return 0;
}
long sum_large(int num, long long num2) {
    return num + num2;
}