#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {

	// set<int, greater<int> > s;
	set<int> s;
	// Insertion: O(logN)
	// Deletion: O(logN)
	// Will not accept the duplicate value
	s.insert(3);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(4);

	// s.begin() --> Starting ki node ka address deta hai
	auto f = s.begin();
	while (!s.empty()) {
		cout << *f << endl;

		s.erase(f);
		f = s.begin();
	}


	return 0;
}
















