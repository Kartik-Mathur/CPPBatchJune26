#include <iostream>
#include <vector>
using namespace std;
#define vvi(v,rows,cols,val) vector<vector<int> > v(rows, vector<int> (cols, val));

int main() {
	// vector<vector<int> > v(4, vector<int> (4));
	// vector<vector<int> > v(4, vector<int> (4, 5));
	int rows = 5, cols = 5, val = 51;
	vvi(v, rows, cols, val);

	// int no = 1;
	// for (int i = 0; i < 4; ++i)
	// {
	// 	for (int j = 0; j < 4; ++j)
	// 	{
	// 		v[i][j] = no++;
	// 	}
	// }

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

	/*
	vector<vector<int> > v(4);

	v[0].push_back(1);
	v[0].push_back(2);

	v[1].push_back(6);
	v[1].push_back(7);
	v[1].push_back(8);
	v[1].push_back(9);

	v[2].push_back(3);
	v[2].push_back(4);
	v[2].push_back(5);

	v[3].push_back(10);

	for (int i = 0; i < 4; ++i)
	{
		for (auto el : v[i]) {
			cout << el << " ";
		}
		cout << endl;
	}
	*/

	return 0;
}
















