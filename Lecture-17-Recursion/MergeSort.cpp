#include <iostream>
using namespace std;
void merge(int*a, int*b, int*c, int s,
           int e) {

	int m = (s + e) / 2;

	int i = s, j = m + 1, k = s;

	while (i <= m and j <= e) {
		if (b[i] < c[j]) {
			a[k] = b[i];
			k++;
			i++;
		}
		else {
			a[k++] = c[j++];
		}
	}

	// Agar i ke elements bach gaye unhe a ke andar add kro
	while (i <= m) {
		a[k++] = b[i++];
	}

	// Agar j ke elements bach gaye unhe a mei add karo
	while (j <= e) {
		a[k++] = c[j++];
	}
}

void mergeSort(int *a, int s, int e) {
	// base case
	if (s >= e) {
		return;
	}

	// recursive case
	int mid = (s + e) / 2;
	int b[10000], c[10000];

	// 1. Divide
	for (int i = s; i <= mid; ++i)
	{
		b[i] = a[i];
	}

	for (int i = mid + 1; i <= e; ++i)
	{
		c[i] = a[i];
	}

	// 2. Sort: Pure Assumption
	mergeSort(b, s, mid);
	mergeSort(c, mid + 1, e);

	// 3. Merge
	merge(a, b, c, s, e);
}


int main() {

	int a[] = {5, 0, 3, 4, 1, 2};
	int n = sizeof(a) / sizeof(int);

	mergeSort(a, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















