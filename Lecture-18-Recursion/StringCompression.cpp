#include <iostream>
using namespace std;

int main() {

	// char a[] = "aaabbccd";
	string a = "aaabbccd"; // getline(cin,a);
	int j;

	for (int i = 0; i < a.size();)
	{
		char ch = a[i];
		int cnt = 1;

		j = i + 1;
		while (j < a.size() and a[j] == ch) {
			j++;
			cnt++;
		}

		cout << ch << cnt;

		i = j;
	}

	cout << endl;


	return 0;
}
















