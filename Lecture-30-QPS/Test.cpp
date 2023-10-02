#include <iostream>
using namespace std;

void solve(string in, string out, bool isFirstDigit = true) {
	// base case
	if (out.size() > in.size()) {
		return;
	}

	if (isFirstDigit == false) {
		if (stoi(out) <= stoi(in)) {
			cout << out << " ";
		}
	}

	// recursive case
	int start = isFirstDigit ? 1 : 0;
	for (int no = start; no <= 9; ++no)
	{
		char ch = no + '0';
		out.push_back(ch);
		solve(in, out, false);
		out.pop_back();
	}
}

int main() {

	string in, out = "";
	cin >> in;
	cout << '0' << " ";
	solve(in, out);

	cout << endl;

	return 0;
}
















