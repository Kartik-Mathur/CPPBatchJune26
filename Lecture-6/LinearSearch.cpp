#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int key = 1, i;

	for (i = 0; i < 5; ++i)
	{
		if (a[i] == key) {
			cout << "Key Found at index: " << i << endl;
			break;
		}
	}

	if (i == 5) {
		cout << "Key Not Found\n";
	}

	return 0;
}
















