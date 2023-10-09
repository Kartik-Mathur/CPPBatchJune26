#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;

	int heights[] = {6, 3, 2, 1, 5, 4, 7, 3};
	int n = sizeof(heights) / sizeof(int);

	int ans[1000];

	for (int i = 0; i < n; ++i)
	{
		int c_h = heights[i];
		while (!s.empty() and c_h > heights[s.top()]) {
			ans[s.top()] = i;
			s.pop();
		}

		s.push(i);
	}

	while (!s.empty()) {
		ans[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;


	return 0;
}
















