#include <iostream>
using namespace std;

int main() {

	string s[5] = {
		"Hello",
		"Cat",
		"Hello World"
	};
	string largest = "";
	for (int i = 0; i < 3; ++i)
	{
		if (s[i].size() > largest.size()) {
			largest = s[i];
		}
	}
	cout << largest << endl;

	/*
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < s[i].size(); ++j)
			{
				cout << s[i][j] << "-";
			}
			cout << endl;
		}
	*/
	/*
		for (int i = 0; i < 3; ++i)
		{
			cout << s[i] << endl;
		}
	*/

	return 0;
}
















