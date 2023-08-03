#include <iostream>
#include <cstring>
using namespace std;

void copyString(char*b, char*a) {
	int  len =  strlen(a);

	for (int i = 0; i <= len; ++i)
	{
		b[i] = a[i];
	}
}

int main() {
	char a[100] = "HelloWorld";
	char b[100];

	// copyString(b, a);
	strcpy(b, a);
	cout << a << endl;
	cout << b << endl;


	return 0;
}
















