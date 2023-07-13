#include <iostream>
using namespace std;

int main() {

	int a[100];
	int n;
	cout << "Enter n(max:100): ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;



	return 0;
}
















