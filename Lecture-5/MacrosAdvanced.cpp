#include <iostream>
using namespace std;

#define FOR(n) for (int i = 0; i < n; ++i) \
{ \
	cout << i << " "; \
}\
cout << endl;

#define PrintKar(n) for (int i = 1; i <=n; ++i) { cout << i << " "; } cout << endl;

/*
#define FOR(n) for (int i = 0; i < n; ++i) { cout << i << " "; } cout << endl;
*/

int main() {

	FOR(20);
	PrintKar(20);

	return 0;
}
















