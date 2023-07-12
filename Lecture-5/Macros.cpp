#include <iostream>
using namespace std;
/*
Macros are also constants only
Macros are created using #define MACRO_NAME VALUE
*/
#define BolBhai cout<<
#define KaandHoGaya return 0;
#define ShuruKarCodeBhai int main() {
#define PI 3.14+1
// Macros are never evaluated, jo hai jaisa hai vaise jaakar copy paste
// ho jaega neeche jaha use kia
/*
ShuruKarCodeBhai
BolBhai "Hello World\n";


KaandHoGaya
}
*/
int main() {
	// PI = 4.14; Not Allowed

	cout << 2 * PI * 1 << endl; // 2 * 3.14 + 1 * 1 -> 6.28 + 1 -> 7.28


}










