#include<iostream>
using namespace std;
int main() {

	char ch = 'A';
	int acode;

	while (ch <= 'Z') {
		acode = ch;

		cout << ch << " " << acode << endl;
		ch = ch + 1;
	}

	return 0;
}