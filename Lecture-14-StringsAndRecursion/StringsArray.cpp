#include <iostream>
using namespace std;

int main() {

	string s[500];
	int n = 5;

	s[0] = "Hello";
	s[1] = "Code";
	s[2] = "Coding";
	s[3] = "Bilanks";
	s[4] = "Kodar";

	// for (int i = 0; i < s[0].size(); ++i)
	// {
	// 	cout << s[0][i] << "-";
	// }
	// cout << endl;


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < s[i].size(); ++j)
		{
			cout << s[i][j] << "-";
		}
		cout << endl;
	}

	return 0;
}


