#include <iostream>
using namespace std;

int main() {

	int lar = INT_MIN, i, no, chota = INT_MAX, sum = 0;
	int n;
	cin >> n;
	i = 1;
	while (i <= n) {
		cin >> no;

		// Agar current number mere lar se bada hai, toh naya lar mill gaya
		// lar = no
		if (no > lar) {
			lar	 = no;
		}

		// Agar current number mere chota se less hai, toh naya chota mill gaya
		// chota = no
		if (no < chota) {
			chota = no;
		}

		// Aur jo bhi no aa rha hai usse sum mei add krte chalo saath saath
		sum = sum + no;


		i = i + 1;
	}

	cout << "Largest: " << lar << endl;
	cout << "Smallest: " << chota << endl;
	cout << "Average: " << sum / (n * 1.0) << endl;

	return 0;
}
















