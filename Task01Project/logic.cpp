#include"util.h"
string find_push_ups(int n, int x) {
	string msg;
	int time = n;
	int sum = n;
	for (int i = 1; i <= n; i++) {
		msg += "day " + to_string(i) + ": " + to_string(time) + "\n";
		time += x;
		sum += time;
	}

	msg += "Total number of push-ups done :" + to_string(sum-time);

	return msg;
}