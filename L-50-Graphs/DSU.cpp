#include <iostream>
#include <vector>
using namespace std;

class DSU {
	vector<int> parent, size, rank;
public:
	DSU(int v) {
		parent.resize(v + 1);
		size.resize(v + 1);
		// Initially sab apne superParent ya leader ya representative khud hote hai
		for (int i = 1; i <= v; ++i)
		{
			make_set(i);
			size[i] = 1;
			rank[i] = 0;
		}
	}

	void make_set(int u) {
		parent[u] = u;
	}

	int find_set(int u) { // To return the leader of the u
		// base case
		if (u == parent[u]) return u;
		// recursive
		return parent[u] = find_set(parent[u]);
	}

	// void union_set(int u, int v) {
	// 	int leader_u = find_set(u);
	// 	int leader_v = find_set(v);

	// 	if (leader_v == leader_u) return;

	// 	if (size[u] < size[v])
	// 		swap(u, v);

	// 	parent[leader_v] = leader_u;
	// 	size[leader_u] += size[leader_v];
	// }

	void union_set(int u, int v) {
		int leader_u = find_set(u);
		int leader_v = find_set(v);

		if (leader_v == leader_u) return;

		if (rank[u] < rank[v])
			swap(u, v);

		parent[leader_v] = leader_u;
		if (rank[leader_u] == rank[leader_v])
			rank[leader_u]++;
	}
};

int main() {

	DSU d(5);

	d.union_set(1, 2);
	d.union_set(3, 4);
	d.union_set(1, 3);

	cout << d.find_set(5) << endl;


	return 0;
}