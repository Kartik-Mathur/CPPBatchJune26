#include <iostream>
using namespace std;

int main() {

	int arr[100];
	int n;
	cout << "Enter n(max: 100): ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}
	// arr[0] = 1;
	// arr[1] = 2;
	// arr[2] = 3;
	// arr[3] = 4;
	// arr[4] = 5;
	// arr[5] = 6;

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	// cout << arr[0] << " ";
	// cout << arr[1] << " ";
	// cout << arr[2] << " ";
	// cout << arr[3] << " ";
	// cout << arr[4] << " ";
	// cout << arr[5] << " ";


	cout << endl;
	return 0;
}
















