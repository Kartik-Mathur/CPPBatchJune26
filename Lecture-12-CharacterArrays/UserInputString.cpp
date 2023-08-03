#include <iostream>
using namespace std;

void inputString(char *a, char delimiter =  '\n') {
	int i = 0;
	char ch = cin.get();
	while (ch != delimiter) {
		a[i] = ch;

		i++;
		ch = cin.get();
	}

	a[i] = '\0';
}

int main() {

	char a[100];
	inputString(a);
	cout <<  a << endl;

	return 0;
}
















