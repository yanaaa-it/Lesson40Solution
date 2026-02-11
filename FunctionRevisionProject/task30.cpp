// Задание 30: Добавьте прототип функции, которая проверяет, 
// является ли символ гласной буквой.

#include <iostream>
using namespace std;

char is_vowel(char ch);

int main() {
    cout << is_vowel('a')?"yes":"no";
    return 0;
}

char is_vowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}