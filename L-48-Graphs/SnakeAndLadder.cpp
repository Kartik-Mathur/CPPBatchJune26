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
	// SSSP: Single Source Shortest Path Algorithm
	int SSSP(T src, T des) {
		unordered_map<T, int> distance;
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;

		distance[src] = 0;
		parent[src] = src;
		visited[src] = true;

		queue<T> q;
		q.push(src);

		while (!q.empty()) {
			T node = q.front();
			q.pop();

			for (auto neighbour : adj[node]) {
				if (!visited[neighbour]) {
					q.push(neighbour);
					distance[neighbour] = distance[node] + 1;
					parent[neighbour] = node;
					visited[neighbour] = true;
				}
			}
		}
		T des_copy = des;
		cout << "PATH: ";
		while (des != parent[des]) {
			cout << des << "<-";
			des =  parent[des];
		}
		cout << des << endl;

		return distance[des_copy];
	}

};

int main() {

	Graph<int> g;

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u, v, false);
		}
	}

	int ans = g.SSSP(0, 36);
	cout << "Moves required for dice: " << ans << endl;

	// g.print();

	return 0;
}










