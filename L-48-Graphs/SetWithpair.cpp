#include <iostream>
#include <set>
using namespace std;

int main() {
	// Pair ke first argument ke according sort krega
	set<pair<int, char> > s;

	s.insert({3, 'C'});
	s.insert({3, 'C'});
	s.insert({3, 'C'});
	s.insert({2, 'A'});
	s.insert({1, 'D'});
	s.insert({4, 'B'});

	// Set mei updation is not possible
	// To update value in set
	// 1. Delete the pair {3,'C'}
	// 2. Then insert the pair again {4,'C'}
	// Is tarah se update kr skte hai bas

	// {3,'C'} ko dhoondtha hoon
	auto x = s.find({3, 'C'});
	if (x != s.end()) {
		// That means pair mill gaya
		// Delete krte hai pehle
		s.erase(x);
	}
	// Agar mill gaya tha {3,'C'} toh erase kr diya
	// Agar nahi milla toh erase nhi hua hoga

	// Insert toh krdo
	s.insert({4, 'C'});

	auto f = s.begin();
	while (!s.empty()) {
		cout << (*f).first << ", " << (*f).second << endl;

		s.erase(f);
		f = s.begin();
	}

	return 0;
}
















