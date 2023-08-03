#include <iostream>
using namespace std;

void append(char* b, char* a) {
	int i = 0;
	int j = strlen(b);
	int len = strlen(a);
	while (i <= len) {
		b[j] = a[i];

		j++;
		i++;
	}
}

int main() {

	char a[100] = "Hello", b[100] = "World";

	// append(a, b);
	strcat(a, b);
	cout << a << endl;

	return 0;
}
















