#include <iostream>
#include <queue>
#include <unordered_map>
#include <map>
#include <vector>
#include <list>
using namespace std;

#define pb push_back

map<int, list<int> > adj;
vector<int> coursesToDo;
int n, k;
int coursesStatus[100005] = {0};
vector<int> ans;


void addEdge(int u, int v) {
	adj[u].pb(v);
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

void takeInput() {
	cin >> n >> k;
	for (int i = 0; i < k; ++i)
	{
		int x;
		cin >> x;
		coursesToDo.pb(x);
	}

	for (int u = 1; u <= n; ++u)
	{
		int m;
		cin >> m;
		if (!m) continue;

		for (int i = 0; i < m; ++i)
		{
			int v;
			cin >> v;
			adj[u].pb(v);
		}
	}
}

// Algorithm
bool bsuHelper(int course) {
	// Agar yeh course already kia hua hai,
	// toh vapis jaao isse krne ki need nahi hai dobara
	if (coursesStatus[course] == 2) return false;
	// Mark kar lete hai ki yeh course mei kar raha hoon
	coursesStatus[course] = 1;

	for (auto dependentCourse : adj[course]) {
		if (coursesStatus[dependentCourse] == 1) {
			// Agar jo dependentCourse hai, vo abhi kar rhey hai current mei
			// therefore cycle aa gai Kaand ho gaya diploma nhi kar paenge sorry
			return true;
		}
		bool cycleHai = bsuHelper(dependentCourse);
		if (cycleHai == true) {
			return true;
		}
	}
	coursesStatus[course] = 2; // Ab jaa rhey hai vapis toh current course ho chuka hai
	// koi dikkat nahi aai
	ans.pb(course);
	return false;
}

bool bsu() {
	for (auto course : coursesToDo) {
		if (coursesStatus[course] == 0) {
			bool isCyclic = bsuHelper(course);
			if (isCyclic) return true;
		}
	}

	return false;
}

int main() {

	takeInput();

	bool cycleHai = bsu();
	if (cycleHai) {
		cout << "-1\n";
	}
	else {
		cout << ans.size() << "\n";
		for (auto x : ans) {
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;
}
















