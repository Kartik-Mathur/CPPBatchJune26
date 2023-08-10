#include <iostream>
using namespace std;

int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}

/*int chota1 = fibo(n - 1);
int chota2 = fibo(n - 2);

int badaAns = chota1 + chota2;
return badaAns;
}
*/
int main() {

	int n;
	cin >> n;

	cout << fibo(n) << endl;


	return 0;
}
















