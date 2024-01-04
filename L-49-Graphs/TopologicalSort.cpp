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
	map<T, list<T > > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].pb(v);

		if (bidir) {
			adj[v].pb(u);
		}
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

	void topologicalSortHelper(T parent,
	                           unordered_map<T, bool> &visited, list<T> &ans) {
		visited[parent] = true;

		for (auto children : adj[parent]) {
			if (!visited[children]) {
				topologicalSortHelper(children, visited, ans);
			}
		}

		ans.push_front(parent);
	}

	void topologicalSort() {
		unordered_map<T, bool> visited;
		list<T> ans;
		for (auto p : adj) {
			if (!visited[p.first]) {
				topologicalSortHelper(p.first, visited, ans);
			}
		}

		for (auto el : ans) {
			cout << el << " ";
		}
		cout << endl;
	}

	// Toplogical Sorting using BFS
	void tpsBFS() {
		// calculate the indegree
		unordered_map<T, int> indegree;

		for (auto p : adj) {
			for (auto child : p.second) {
				if (indegree.count(child) == 0)
					indegree[child] = 1;
				else indegree[child]++;
			}
		}

		queue<T> q;

		for (auto p : adj) {
			if (indegree[p.first] == 0) {
				q.push(p.first);
			}
		}

		while (!q.empty()) {
			T parent = q.front();
			cout << parent << " ";

			q.pop();

			for (auto child : adj[parent]) {
				indegree[child] --;
				if (indegree[child] == 0) {
					q.push(child);
				}
			}
		}
		cout << endl;
	}

	bool isCyclicDFSHelper(T src, unordered_map<T, bool> &visited,
	                       unordered_map<T, bool> &currentPath) {
		currentPath[src] = true;
		visited[src] = true; // Visit kar lia toh theek hai
		// isko backtrack nahi kroge
		// ab baaki neighbours pr jaakar dekho
		for (auto neighbours : adj[src]) {
			if (currentPath[neighbours]) {
				return true;
			}
			else if (!visited[neighbours]) {
				bool ans = isCyclicDFSHelper(neighbours, visited, currentPath);
				if (ans == true) {
					return true;
				}
			}
		}

		// Agar kisi bhi neighbour se dobara src par nhi aaya mei currentPath common
		// karke matlb cycle nhi milli
		currentPath[src] = false;
		return false;
	}

	bool isCyclicDFS() {
		unordered_map<T, bool> visited;
		unordered_map<T, bool> currentPath;
		for (auto p : adj) {
			if (!visited[p.first]) {
				bool ans = isCyclicDFSHelper(p.first, visited, currentPath);
				if (ans) return true;

			}

		}

		return false;
	}
};

int main() {

	Graph<string> g;
	g.addEdge("Html", "JS", false);
	g.addEdge("JS", "Web", false);
	g.addEdge("Maths", "C++", false);
	g.addEdge("C++", "DSA", false);
	g.addEdge("DSA", "Web", false);
	g.addEdge("DSA", "CP", false);
	g.addEdge("Web", "Job", false);
	g.addEdge("CP", "Job", false);
	// g.addEdge("Job", "JS", false);

	// g.topologicalSort();
	g.tpsBFS();
	cout << g.isCyclicDFS() << endl;




	return 0;
}
















