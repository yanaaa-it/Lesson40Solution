// Задание 14: Объявите функцию `is_digit`, которая принимает символ 
// и булевское значение и возвращает истину, если символ является цифрой.

#include <iostream>
using namespace std;

int main()
{
    cout << is_digit('5', true);
    return 0;
}
bool is_digit(char ch, bool bo) {
    return ch < '0' || ch>'0';
}