#include <iostream>
using namespace std;
int n = 4;

void solve(char *a, int i, int open, int close) {
	// base case
	if (i == 2 * n) {
		a[i] = '\0';
		cout << a << endl;
		return;
	}

	// recursive case
	// 1. Add '('
	if (open < n) {
		a[i] = '(';
		solve(a, i + 1, open + 1, close);
	}
	// 2. Add ')'
	if (open > close) {
		a[i] = ')';
		solve(a, i + 1, open, close + 1);
	}
}

int main() {
	char a[100];
	solve(a, 0, 0, 0);

	return 0;
}
















