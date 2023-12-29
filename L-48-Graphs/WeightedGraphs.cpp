#include <iostream>
#include <queue>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

#define pb push_back

template<typename T>
class Graph {
public:
	map<T, list<pair<T, int> > > adj;

	void addEdge(T u, T v, int dist, bool bidir = true) {
		adj[u].pb({v, dist});

		if (bidir) {
			adj[v].pb({u, dist});
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto x : p.second) {
				cout << "(" << x.first << ", " << x.second << ") ";
			}
			cout << endl;
		}
	}
};

int main() {
	Graph<char> g;

	g.addEdge('A', 'B', 1);
	g.addEdge('A', 'C', 3);
	g.addEdge('A', 'D', 2);
	g.addEdge('B', 'D', 5);
	g.addEdge('C', 'D', 4);

	g.print();

	return 0;
}
















