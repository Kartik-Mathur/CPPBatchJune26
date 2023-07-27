#include <iostream>
#include <cstring> // for strlen
using namespace std;

bool isPalindrome(char *a) {
	int i = 0;
	int j = strlen(a) - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}

		i++;
		j--;
	}

	return true;
}

int main() {
	char a[1000];
	cin.getline(a, 100);

	cout << isPalindrome(a) << endl;

	return 0;
}
















