#include <iostream>
#include <queue>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:

	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "  : ";
			for (auto n : p.second) {
				cout << n << " ";
			}
			cout << endl;
		}
	}

	void DFSHelper(T src, unordered_map<T, bool> &visited) {
		cout << src << " ";
		visited[src] = true;

		for (auto neighbour : adj[src]) {
			if (!visited[neighbour]) {
				DFSHelper(neighbour, visited);
			}
		}
	}

	void DFS(T src) {
		unordered_map<T, bool> visited;
		DFSHelper(src, visited);
		int component = 1;

		for (auto p : adj) {
			if (!visited[p.first]) {
				DFSHelper(p.first, visited);
				component++;
			}
		}
		cout << "\nTotal components: " << component << endl;
	}

};

int main() {

	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 4);
	g.addEdge(3, 4);
	g.addEdge(2, 3);
	g.addEdge(5, 3);

	g.addEdge(15, 13);
	g.addEdge(15, 14);

	g.DFS(0);


	return 0;
}










