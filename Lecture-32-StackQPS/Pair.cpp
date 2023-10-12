#include <iostream>
using namespace std;

template<typename T, typename U>
class Pair {
public:
	T first;
	U second;
};

int main() {


	Pair<int, string> p2;
	p2.first = 10;
	p2.second = "World";
	cout << p2.first << ", " << p2.second << endl;


	pair<int, int> p;

	p.first = 10;
	p.second = 30;

	cout << p.first << ", " << p.second << endl;

	pair<int, string> p1;
	p1.first = 100;
	p1.second = "Hello";

	cout << p1.first << ", " << p1.second << endl;




	return 0;
}
















