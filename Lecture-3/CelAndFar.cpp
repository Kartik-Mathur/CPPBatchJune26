#include <iostream>
using namespace std;

int main() {

	int init, fval, step, cel;

	cin >> init >> fval >> step;

	int far = init; // Initialisation
	while (far <= fval) {

		// cel = (5 / 9.0) * (far - 32);
		cel = 5 * (far - 32) / 9;

		cout << far << " " << cel << endl;

		far = far + step; // Updation
	}



	return 0;
}
















