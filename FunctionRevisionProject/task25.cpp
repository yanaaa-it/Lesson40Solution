// Задание 25: Объявите функцию `factorial`, которая "вычисляет" 
// факториал целого числа.

#include <iostream>
#include <string>
using namespace std;

long long factorial(int);

int main() {
    cout << factorial(5);
    return 0;
}
long long factorial(int n) {
    int msg=1;
    for (int i = 2; i < n; i++) {
        msg *= i;
}
    return msg;
}