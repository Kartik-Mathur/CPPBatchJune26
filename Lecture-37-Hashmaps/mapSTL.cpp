#include <iostream>
#include <unordered_map> // Works in O(1) Average time
#include <map> // ordered_map: Works in O(logN) time: Uses red black tree inside
// in ordered_map we are going to get the data sorted according to key
using namespace std;

int main() {

	// unordered_map<key, value> h;
	// unordered_map<string, int> h;
	map<string, int> h;

	// in hashmap we can insert a pair into it
	pair<string, int> p = {"Pineapple", 50};
	h.insert(p);
	h.insert({"Guava", 150});
	h.insert(make_pair("Orange", 150));
	h.insert(make_pair("Dragon Fruit", 150));
	h.insert(make_pair("Aam", 150));

	h["Mango"] = 100;
	// unordered_map<string, int> :: iterator x;
	// To print the unordered_map bucket by bucket
	// for (int i = 0; i < h.bucket_count(); ++i)
	// {
	// 	cout << i << "-->";
	// 	for (auto x = h.begin(i) ; x != h.end(i) ; x++) {
	// 		// cout << "(" << (*x).first << ", " << (*x).second << ") ";
	// 		cout << "(" << x->first << ", " << x->second << ") ";
	// 	}
	// 	cout << endl;
	// }


	// Inorder to just see all the key and value pairs inside the
	// unordered_map h: foreach loop
	// for (pair<string, int> p : h) {
	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}




	return 0;
}
















