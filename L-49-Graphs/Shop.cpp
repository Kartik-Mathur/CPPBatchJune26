#include <iostream>
#include <queue>
#include <climits>
using namespace std;
#define int long long

char a[26][26];
int x[] = { -1, 0, +1, 0};
int y[] = {0, +1, 0, -1};
int cols, rows;
int Time[26][26];
/*
bool isValid(int i, int j, bool visited[][26]) {
	return (i >= 0 and j >= 0 and i < rows and j < cols and a[i][j] != 'X'
	        and visited[i][j] == false);
}

int shop(int i, int j, int di, int dj, bool visited[][26]) {
	// base case
	if (i == di and j == dj) {
		return 0;
	}

	// recursive case
	// Toh jis bhi cell par mei khada hoon
	// wha visit toh kar hi lia hai
	visited[i][j] = true;
	int ans = INT_MAX;

	for (int k = 0; k < 4; ++k)
	{
		int ni = i + x[k];
		int nj = j + y[k];

		if (isValid(ni, nj, visited)) {
			int chotaSamay = shop(ni, nj, di, dj, visited);
			if (chotaSamay != INT_MAX)
				ans = min(ans, (a[i][j] - '0') + chotaSamay);
		}

	}
	// visited[i][j] = false; // Backtracking
	return ans;
}
*/
/*
bool isValid(int i, int j) {
	return (i >= 0 and j >= 0 and i < rows and j < cols and a[i][j] != 'X');
}


int shop(int i, int j, int di, int dj) {

	queue<pair<int, int> > q;
	q.push({i, j});
	Time[i][j] = 0;

	while (!q.empty()) {
		auto p = q.front();
		q.pop();

		int ci = p.first;
		int cj = p.second;

		for (int k = 0; k < 4; ++k)
		{
			int ni = ci + x[k];
			int nj = cj + y[k];
			if (isValid(ni, nj) and Time[ni][nj] > Time[ci][cj] + (a[ni][nj] - '0')) {
				Time[ni][nj] = Time[ci][cj] + (a[ni][nj] - '0');
				q.push({ni, nj});
			}
		}
	}
	return Time[di][dj];
}

*/

bool isValid(int i, int j) {
	return (i >= 0 and j >= 0 and i < rows and j < cols and a[i][j] != 'X');
}

int shop(int i, int j, int di, int dj, int Time[][26]) {
	// base case
	if (i == di and j == dj) {
		return 0;
	}

	// recursive case
	// Toh jis bhi cell par mei khada hoon
	// wha visit toh kar hi lia hai
	visited[i][j] = true;

	for (int k = 0; k < 4; ++k)
	{
		int ni = i + x[k];
		int nj = j + y[k];

		if (isValid(ni, nj)
		        and Time[ni][nj] > Time[ci][cj] + (a[ni][nj] - '0')) {
			int chotaSamay = shop(ni, nj, di, dj, visited);
			if (chotaSamay != INT_MAX)
				ans = min(ans, (a[i][j] - '0') + chotaSamay);
		}

	}
	// visited[i][j] = false; // Backtracking
	return ans;
}

void solve() {
	cin >> cols >> rows;
	while (cols and rows) {
		int si, sj, di, dj;

		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				cin >> a[i][j];
				Time[i][j] = INT_MAX;

				if (a[i][j] == 'S') {
					si = i;
					sj = j;
					a[i][j] = '0';
				}

				if (a[i][j] == 'D') {
					di = i;
					dj = j;
					a[i][j] = '0';
				}
			}
		}

		cout << shop(si, sj, di, dj) << endl;
		cin >> cols >> rows;
	}

	/*
	cin >> cols >> rows;

	while (cols > 0 and row > 0) {


		cin >> cols >> rows;
	}
	*/
}

int32_t main() {

	solve();



	return 0;
}
















