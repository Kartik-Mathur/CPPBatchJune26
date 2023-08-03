#include <iostream>
using namespace std;
int c1, c2, c3, c4;
int no_rick, no_cab;
int rides_rick[10000], rides_cab[10000];

int solve() {
	// Rickshaw ka kaam
	int cost_rickshaw = 0;

	for (int i = 0; i < no_rick; ++i)
	{
		// ith rickshaw ke pass 2 options hai
		// 1. Single ride ke paise dedo, rides_rick[i]*c1
		int op1 = rides_rick[i] * c1;
		// 2. Iss rick ko hire krlo monthly basis par --> c2
		int op2 = c2;

		cost_rickshaw += min(op1, op2);
	}

	// Ya phr mei DTC ke pass ki tarah, rick ka bhi pass banwa loon, aish karo kisi bhi rick par-->c3
	cost_rickshaw = min(cost_rickshaw, c3);

	int cost_cab = 0;
	// Cab ka kaam
	for (int i = 0; i < no_cab; ++i)
	{
		// ith rickshaw ke pass 2 options hai
		// 1. Single ride ke paise dedo, rides_cab[i]*c1
		int op1 = rides_cab[i] * c1;
		// 2. Iss cab ko hire krlo monthly basis par --> c2
		int op2 = c2;

		cost_cab += min(op1, op2);
	}

	// Ya phr mei DTC ke pass ki tarah, rick ka bhi pass banwa loon, aish karo kisi bhi rick par-->c3
	cost_cab = min(cost_cab, c3);

	int total_cost = cost_rickshaw + cost_cab;

	// Ya phr badshah akbar bann jaao--> c4 dedo, ab kahi bhi baitho
	total_cost = min(total_cost, c4);
	return total_cost;
}



int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> c1 >> c2 >> c3 >> c4;

		cin >> no_rick >> no_cab;


		for (int i = 0; i < no_rick; ++i)
		{
			cin >> rides_rick[i];
		}

		for (int i = 0; i < no_cab; ++i)
		{
			cin >> rides_cab[i];
		}

		cout << solve() << endl;
	}




	return 0;
}
















