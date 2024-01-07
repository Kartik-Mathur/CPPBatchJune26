#include <iostream>
#include <queue>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

#define pb push_back

map<int, list<int> > adj;

void addEdge(int u, int v) {
	adj[u].pb(v);
	adj[v].pb(u);
}

void print() {
	for (auto p : adj) {
		cout << p.first << " : ";
		for (auto x : p.second) {
			cout << x << " ";
		}
		cout << endl;
	}
}

int color[10000] = {0};

bool isBipartiteHelper(int src, int parent, int c) {
	color[src] = c;
	for (auto child : adj[src]) {
		if (color[child] == 0) {
			bool chotaAns = isBipartiteHelper(child, src, 3 - c);
			if (!chotaAns) return chotaAns;
		}
		else if (child != parent and color[child] == c)
			return false;
	}

	return true;
}

bool isBipartite() {
	for (auto p : adj) {
		if (color[p.first] == 0) {
			bool ans = isBipartiteHelper(p.first, p.first, 1);
			if (ans == false) return false;
		}
	}

	return true;
}


int main() {

	addEdge(1, 2);
	addEdge(4, 2);
	addEdge(4, 5);
	addEdge(3, 5);
	addEdge(3, 1);

	print();

	return 0;
}
