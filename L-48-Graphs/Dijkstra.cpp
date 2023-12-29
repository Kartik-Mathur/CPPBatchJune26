#include <iostream>
#include <queue>
#include <set>
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
	// SSSP in weighted Graphs is Dijkstra's Algorithm
	int SSSP(char src, char des) {
		unordered_map<char, char> parent;
		unordered_map<char, int> dist;

		// Set the distance of all nodes equals to INT_MAX
		for (auto p : adj) {
			dist[p.first] = INT_MAX;
		}

		// Distance src from itself is zero
		dist[src] = 0;
		parent[src] = src;
		set < pair<int, char> > s;
		// Src ko daaldo zero distance ke saath
		s.insert({dist[src], src});

		while (!s.empty()) {
			auto f = s.begin();
			auto p = (*f).second;
			auto pD = (*f).first;
			s.erase(f);

			for (auto n : adj[p]) {
				if (dist[n.first] > pD + n.second) {
					int eD = n.second;
					auto x = s.find({dist[n.first], n.first});
					if (x != s.end()) s.erase(x);

					dist[n.first] = pD + eD;
					parent[n.first] = p;
					s.insert({dist[n.first], n.first});
				}
			}
		}

		int ans = dist[des];

		cout << "PATH: ";
		while (des != parent[des]) {
			cout << des << "<-";
			des =  parent[des];
		}
		cout << des << endl;

		return ans;
	}
};

int main() {
	Graph<char> g;

	g.addEdge('A', 'B', 1);
	g.addEdge('A', 'C', 4);
	g.addEdge('B', 'C', 2);
	g.addEdge('A', 'D', 8);
	g.addEdge('C', 'D', 3);

	g.print();

	cout << "Distance : " << g.SSSP('A', 'D') << endl;

	return 0;
}
















