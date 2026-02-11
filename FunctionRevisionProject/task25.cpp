// Задание 25: Объявите функцию `factorial`, которая "вычисляет" 
// факториал целого числа.

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << factorial(5);
    return 0;
}
string factorial(int) {
    string msg;
    for (int i = 1; i < 5; i++) {
        msg += to_string(i) + " ";
}
    return msg;
}