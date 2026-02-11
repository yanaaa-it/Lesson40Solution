// Задание 14: Объявите функцию `is_digit`, которая принимает символ 
// и булевское значение и возвращает истину, если символ является цифрой.

#include <iostream>
using namespace std

bool is_digit(char ch, bool check);

int main()
{
    cout << is_digit('5', true);
    return 0;
}
bool is_digit(char ch, bool check) {
    return ch <= '9' || ch>='0';
}