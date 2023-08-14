#include <iostream>
using namespace std;

int maxSumPath(int *a, int n, int *b, int m) {
	int i = 0, j = 0, suma = 0, sumb = 0;
	int ans = 0;

	while (i < n and j < m) {
		if (a[i] == b[j]) {
			if (suma > sumb) {
				ans += suma;
			}
			else {
				ans += sumb;
			}
			suma = sumb = 0;
			ans += a[i];
			i++;
			j++;
		}
		else if (a[i] < b[j]) {
			suma += a[i];
			i++;
		}
		else {
			sumb += b[j++];
		}
	}

	// This part is to handle common elements ke baad ka part saara

	// Agar j ke elements bache hai toh sumb mei add kro
	while (j < m) {
		sumb += b[j++];
	}
	// Agar i ke elements bache hai toh suma mei add kro
	while (i < n) {
		suma += a[i++];
	}

	if (suma > sumb) {
		ans += suma;
	}
	else {
		ans += sumb;
	}

	return ans;
}


int main() {
	int a[10000], b[10000];
	int n, m;
	int t;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> m;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < m; ++i)
		{
			cin >> b[i];
		}

		cout << maxSumPath(a, n, b, m) << endl;
	}



	return 0;
}
















