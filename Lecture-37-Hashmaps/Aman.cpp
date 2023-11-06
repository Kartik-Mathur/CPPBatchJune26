#include <iostream>
#include<stack>
using namespace std;

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) {
	stack<int>s;
	int ans[1000005];
	for (int i = 0; i <= n; i++) {
		int ch = arr[i];
		while (!s.empty() and ch > arr[s.top()]) {
			ans[s.top()] = i;
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		ans[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n; i++) {
		if (ans[i] == -1) {
			cout << -1 << " ";
		} else {
			cout << arr[ans[i]] << " ";
		}
	}
}

// The Main Function
int main()
{
	int n;
	cin >> n;
	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	arr[n] = a[0];
	nextGreater(arr, n);

	return 0;
}

