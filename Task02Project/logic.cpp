#include"util.h"

string get_fibo_number(int n) {
	if (n <= 0) {
		return "error";
	}
	string msg;
	long long prev = 1;
	long long curr = 0;
	long long next = 0;

	while(curr<n) {
		msg += to_string(curr) + " ";
		next = prev + curr;
		prev = curr;
		curr = next;
		
	}

	return msg;
}