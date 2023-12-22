#include <iostream>
#include <unordered_map> // STL : Standard Template Library
using namespace std;

int main() {

	unordered_map<string, int > h;

	h.insert({"Mango", 100});
	h.insert({"Apple", 120});
	h.insert({"Kiwi", 20});
	h.insert({"Banana", 50});

	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}


	return 0;
}

