/* The knows API is defined for you.
      bool knows(int a, int b); */

/*
class Solution {
public:

	bool isCeleb(int p, int n) {
		for (int i = 0; i < n; ++i)
		{
			if (i == p) {
				continue;
			}

			if (knows(p, i) || !knows(i, p)) {
				return false;
			}
		}

		return true;
	}

	int findCelebrity(int n) {

		for (int i = 0; i < n; ++i)
		{
			if (isCeleb(i, n)) {
				return i;
			}
		}

		return -1;
	}
};
*/

class Solution {
public:

	bool isCeleb(int p, int n) {
		for (int i = 0; i < n; ++i)
		{
			if (i == p) {
				continue;
			}

			if (knows(p, i) || !knows(i, p)) {
				return false;
			}
		}

		return true;
	}

	int findCelebrity(int n) {

		int person;
		int l = 0, r = n - 1;
		while (l < r) {
			if (knows(l, r) == true) {
				// this means l cannot be a celebrity
				l++;
			}
			else {
				// agar l, r ko nahi jaanta this means r cannot be a celebrity
				// because celebrity ko sab jaante hai yeh given hai
				// lekin l r ko nahi jaanta toh that means r celebrity nhi ho skta
				r--;
			}
		}
		// l and r equal ho gaya toh bas isko dekhlo celeb hai ya nhi hai
		if (isCeleb(l, n)) {
			return l;
		}

		return -1;
	}
};