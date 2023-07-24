#include <iostream>
#include <vector>
using namespace std;

int rainWater(vector<int> &height) {
	int n = height.size();

	vector<int> leftMax(n), rightMax(n);
	// Calculating the leftMax buildings for every given building
	// 0th index wali ke leftMei mitti hai
	leftMax[0] = 0;
	int leftKiSabseBadiBuilding = height[0];

	for (int i = 1; i < n; ++i)
	{
		leftMax[i] = leftKiSabseBadiBuilding;
		leftKiSabseBadiBuilding = max(leftKiSabseBadiBuilding, height[i]);
	}

	rightMax[n - 1] = 0;
	int rightKiSabseBadiBuilding = height[n - 1];
	for (int i = n - 2; i >= 0; --i)
	{
		rightMax[i] = rightKiSabseBadiBuilding;
		rightKiSabseBadiBuilding = max(rightKiSabseBadiBuilding, height[i]);
	}

	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		int kitnaPaaniRuka = min(leftMax[i], rightMax[i]) - height[i];
		if (kitnaPaaniRuka > 0)
		{
			ans += kitnaPaaniRuka;
		}
	}

	return ans;
}


int rainWater(vector<int> &heights) {
	int n = heights.size();
	int leftMax = 0, rightMax = 0;
	int l = 0, r = n - 1;
	int ans = 0;
	while (l < r) {
		if (heights[l] < heights[r]) {
			if (leftMax > heights[l]) {
				ans += leftMax - heights[l];
			}
			leftMax = max(leftMax, heights[l]);
			l++;
		}
		else {
			if (rightMax > heights[r]) {
				ans += rightMax - heights[r];
			}
			rightMax = max(rightMax, heights[r]);
			r--;
		}
	}
	return ans;
}


int main() {

	vector<int> v = {4, 2, 0, 3, 2, 5};
	cout << rainWater(v) << endl;





	return 0;
}
















