#include <iostream>
using namespace std;

void stringRotate(char *a, int n) {
	int len = strlen(a);

	//  Sabhi ko n position aage bhejo
	for (int i = len - 1; i >= 0; --i)
	{
		a[i + n]  = a[i];
	}

	// last ki n buckets ko shuru mei lekar aao
	int j =  len;
	for (int i = 0; i < n; ++i)
	{
		a[i] = a[j];
		j++;
	}

	// a[len] par '\0' add  krdo
	a[len] = '\0';
}

int main() {

	char a[100] = "Coding";
	int n =  19;
	n %= strlen(a);
	stringRotate(a, n);
	cout << a << endl;
	return 0;
}
















