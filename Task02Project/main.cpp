
#include"util.h"
#include"logic.h"

int main() {
	int number;

	cout << "input number?";
	cin >> number;

	string msg = get_fibo_number(number);

	print(msg);

	return 0;
}
