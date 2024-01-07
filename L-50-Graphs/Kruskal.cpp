#include <iostream>
#include <vector>
using namespace std;

class DSU {
	vector<int> parent, rank;
public:
	DSU(int v) {
		parent.resize(v + 1);
		rank.resize(v + 1);

		for (int i = 1; i <= v; ++i)
		{
			make_set(i);
			rank[i] = 0;
		}
	}

	void make_set(int u) {
		parent[u] = u;
	}

	int find_set(int u) { // To return the leader of the u
		if (u == parent[u]) return u;
		return parent[u] = find_set(parent[u]);
	}

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


vector < pair<int, pair<int, int > > > arr;

// Input:
// 6
// 1 2 1
// 3 4 4
// 2 4 3
// 1 3 2
// 1 4 6
// 2 3 1

int main() {

	int n;
	cout << "Enter number of edges: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		arr.push_back({w, {x, y}});
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; ++i)
	{
		int w = arr[i].first;
		int u = arr[i].second.first;
		int v = arr[i].second.second;
		cout << u << "-->" << v << ", wt: " << w << endl;
	}


	DSU d(5);
	int ans = 0;
	vector<pair<int, int> > a;
	for (int i = 0; i < arr.size(); ++i)
	{
		int w = arr[i].first;
		int u = arr[i].second.first;
		int v = arr[i].second.second;

		int leader_u = d.find_set(u);
		int leader_v = d.find_set(v);

		if (leader_v != leader_u) {
			ans += w;
			d.union_set(leader_u, leader_v);
			a.push_back({u, v});
		}
	}

	cout << "MST weight: " << ans << endl;
	for (int i = 0; i < a.size(); ++i)
	{
		cout << "Edge : " << i << "  : " << a[i].first << " --> " << a[i].second << endl;
	}

	return 0;
}
















