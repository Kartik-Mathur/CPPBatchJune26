#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int i, int j, int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		// Destination bhi solution ka part hogi
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false; // Mill gaya hai, phr bhi mei bol rha nhi milla
		// return true; // Base case se return true, kyunki destination reached
	}

	// recursive case
	// Jaha khade ho usse sol ka part maanlo
	sol[i][j] = 1;

	// 1. Right mei jaakar dekho maze solve hoti hai ya nahi hoti
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool rightSeRaastaMilla = ratInMaze(maze, i, j + 1, n, m, sol);
		if (rightSeRaastaMilla == true) {
			// Agar right se maze solve ho gai, toh return true kardo, ban gai baat
			return true;
		}
	}

	// 2. Right se nhi milla toh neeche se dekh jaakar
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool neecheSeRaastaMilla = ratInMaze(maze, i + 1, j, n, m, sol);
		if (neecheSeRaastaMilla == true) {
			return true;
		}
	}
	// Naa right se milla, naa neeche se milla
	sol[i][j] = 0; // Backtracking
	return false;
}


int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[10][10] = {0}; // Ismei answer nikalenge, and by default
	// har bucket par zero daal diya

	ratInMaze(maze, 0, 0, 4, 4, sol);


	return 0;
}
















