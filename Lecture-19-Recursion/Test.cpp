#include <iostream>
using namespace std;

bool SafeHai(int board[][100], int r, int c, int n) {
	// 1. Column mei raani nhi honi chahiye
	for (int i = 0; i < r; ++i)
	{
		if (board[i][c] == 1) {
			return false; // Agar same column mei raani hai toh, r,c mei raani nhi rakh skte
		}
	}

	// 2. upper left and upper right diagonal par raani nhi honi chahiye
	int copy_r = r, copy_c = c;

	// Upper right Diagonal
	while (r >= 0 and c < n) {
		if (board[r--][c++] == 1) {
			return false;
		}
	}

	r = copy_r; c = copy_c;
	// Check upper left diagonal
	while (r >= 0 and c >= 0) {
		if (board[r--][c--] == 1) {
			return false;
		}
	}

	// Ab boldo safe hai, rakhlo raani on r,c cell par
	return true;
}


bool nQueen(int board[][100], int r, int n)
{
	// Base case
	if (r == n) {
		// Agar saari raani place ho gai, toh base case
		// Ab user ko batado kaha kaha raani place hui hai, i.e. board ko print krdo
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				board[i][j] == 1 ? cout << "Q " : cout << "_ ";
			}
			cout << endl;
		}

		// Saari rani place ho gai, therefore return true;
		return true;// Sab ho gaya kaam toh boldo jai shree ram
	}

	// Recursive case
	for (int c = 0; c < n; ++c)
	{
		// Pehle check karo r,c safe hai queen rakhne ke liye
		if (SafeHai(board, r, c, n)) {
			// If safe hai toh rakho
			board[r][c] = 1; // Queen place krdi r,c par

			// Recursion ko bolo baaki ka tu bata de place hui ya nhi
			bool ans = nQueen(board, r + 1, n);

			// Agar baaki place ho gai, ans == true aaega is case mei
			if (ans == true) {
				return true;// Badhai ho, bann gai baat
			}

			// Agar ans false aaya, toh baat nhi bani, jo rani rakhi hai
			// Usse jaldi waha se hatao
			board[r][c] = 0; // Backtracking karna
		}
	}

	// Loop ke bahar aa gaye, mtlb kisi bhi column par raani nhi rakh paye
	return false; //Current row mei raani rakhna possible nhi hai
}


int main() {


	int board[100][100] = {0};// Har bucket par zero daalo, zero represents queen nhi h
	int n;
	cin >> n;

	nQueen(board, 0, n);

	return 0;
}
















