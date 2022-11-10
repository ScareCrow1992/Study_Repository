#include<iostream>

using namespace std;

int N;
int cache[42][2] = { 0, };

void Fib(int index, int* one, int* zero) {
	if (cache[index][1] != 0) {
		*zero += cache[index][0];
		*one += cache[index][1];
		return;
	}
	else if (index == 0) {
		(*zero)++;
		return;
	}
	else if (index == 1) {
		(*one)++;
		return;
	}
	else {
		Fib(index - 1, one, zero);
		Fib(index - 2, one, zero);

		cache[index][0] = *zero;
		cache[index][1] = *one;

		return;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(null);
	cout.tie(null);

	cin >> N;

	for (int tc = 0; tc < N; tc++) {
		int val;
		cin >> val;
		int one = 0, zero = 0;
		Fib(val, &one, &zero);

		cout << zero << " " << one << endl;
	}

	return 0;
}