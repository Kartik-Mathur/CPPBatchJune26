#include <iostream>
using namespace std;

void printSubstrings(char *a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		for (int j = i; a[j] != '\0'; ++j)
		{
			for (int k = i; k <= j; ++k)
			{
				cout << a[k];
			}
			cout << endl;
		}
	}
}

int main() {

	char a[] = "abba";
	printSubstrings(a);

	return 0;
}
















