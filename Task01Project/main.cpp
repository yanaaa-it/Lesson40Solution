
#include"util.h"
#include"logic.h"

int main() {
	int n;
	int x;

	cout << "input days and how many times does push-ups increase in one day?";
	cin >> n >> x;

	string msg = find_push_ups(n, x);

	print(msg);

	return 0;
}