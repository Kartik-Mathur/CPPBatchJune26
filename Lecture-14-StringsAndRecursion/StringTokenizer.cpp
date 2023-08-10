#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[] = "Hello...#World??_?.@_@..#_$Learning,,,###...Strings..!";
	// When u have to fetch the words amongst random characters
	// char b[] = "aldnnaksnd.....$sdand,,";
	char *x = strtok(a, ".?#$!,");
	string ans[100];
	int n = 0;
	while (x != NULL) {
		// cout << x << endl;
		ans[n++] = x;
		x = strtok(NULL, ".?#$!,");
	}

	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << endl;
	}

	// Agar aap pehle wali string mei jaha tak dekh lia uske aage
	// se continue krna chahte ho, toh pehle array ka name
	// jaha likha tha wha NULL likhna padega
	// char *y = strtok(b, ".$,,");
	// x = strtok(NULL, ".?#$!,");
	// cout << x << endl;

	// x = strtok(NULL, ".?#$!,");
	// cout << x << endl;



	return 0;
}















