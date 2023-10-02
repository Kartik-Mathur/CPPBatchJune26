#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string x) {
	stack <char> s;

	for (int i = 0; i < x.size(); ++i)
	{
		char ch = x[i];
		switch (ch) {
		case '(':
		case '{':
		case '[':
			s.push(ch);
			break;
		case '}':
			if (!s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']':
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		}
	}

	// After iterating over the given string,
	// stack  khaali hona chahiye, mtlb jitne brackets open huye
	//  utne hi brackets close bhi hone chahiye
	if (s.empty()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	// string s = "[a+b*{c+(d-e)*f}]";
	string s = "[a+b*(c+d";

	if (isBalanced(s)) {
		cout << "Balanced hai\n";
	}
	else {
		cout << "Balanced nahi hai\n";
	}

	return 0;
}
















