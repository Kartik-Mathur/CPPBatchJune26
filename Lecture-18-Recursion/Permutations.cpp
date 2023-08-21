#include <iostream>
using namespace std;

void permutations(char *a, int i) {
	// base case
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}

	// recursive case
	for (int j = i; a[j] != '\0' ; ++j)
	{
		swap(a[j], a[i]); // Recursion ki call se pehle swap
		permutations(a, i + 1);
		// Recursion ki call ke baad undo kardo, jo kia tha
		swap(a[i], a[j]); // Backtracking
	}
}

int main() {

	char a[] = "abc";

	permutations(a, 0);


	return 0;
}
















