#include <iostream>
using namespace std;
int main() {
    long long int n, c;
    cin >> n;
    int row = 1;
    long long int a = 0;
    long long int b = 1;
    int i = 1;



    if (row == 1) {
        cout << a << "\t" ;

        row = row + 1;
        cout << endl;
    }
    if (row == 2) {
        if (i == 1) {
            cout << b << "\t";
            i = i + 1;
        }
    }
    if (row >= 2) {
        if (i > 1) {
            while (row <= n) {
                while (i <= row) {
                    c = a + b;
                    cout << c << "\t" ;
                    i = i + 1;
                    a = b;
                    b = c;
                }

                row = row + 1;
                cout << endl;
                i = 1;
            }
        }
    }

    return 0;
}



