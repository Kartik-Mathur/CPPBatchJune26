#include <iostream>
using namespace std;

//////////////////////////////// BLUE PRINT-CAR ////////////////////////////////
class Car {
public:
	// Data Members
	char name[100];
	int price, model, seats;

	// Default Functions: Yeh already exist krte hai, hum inhe replace krke
	// Apne functions likh skte hai, then vo use honge
	// 1. Constructor : It is used to create Objects, they don't have return type
	// 1.1-> Default Constructor
	Car() {
		cout << "Hello, I am default constructor!!\n";
	}

	// 1.2-> Parameterized Constructor
	Car(char *n, int p, int s, int m) {
		cout << "Hello, I am Parameterized constructor!!\n";

		strcpy(name, n);
		price = p;
		seats = s;
		model = m;
	}

	// 1.3-> Parameterized Constructor
	Car(char *n, int p, int s) {
		cout << "Hello, I am Parameterized constructor-2!!\n";

		strcpy(name, n);
		price = p;
		seats = s;
		model = 2025;
	}
	// 2. Copy Constructor : Ek object se doosre Object ki copy create krne ke liye
	// --> Car X = Y;
	// --> Car X(Y);
	Car(Car &Y) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, Y.name);
		price = Y.price;
		model = Y.model;
		seats = Y.seats;
	}

	// 3.
	// 4.

	// Functions
	void print() {
		cout << "Name :  " << name << endl;
		cout << "Price:  " << price << endl;
		cout << "Model:  " << model << endl;
		cout << "Seats:  " << seats << endl << endl;
	}
};
/////////////////////////////// @BLUE PRINT-CAR ////////////////////////////////


int main() {

	Car A; // Gets created using default constructor(Constructor ek function hai)

	strcpy(A.name, "BMW");
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	A.price = 100;
	A.model = 2020;
	A.seats = 4;

	Car B; // Gets created using default constructor
	strcpy(B.name, "Audi");
	B.price = 233;
	B.model = 2022;
	B.seats = 2;

	char x[] = "Lord Alto";
	Car C(x, 50, 4, 2024); // Gets created using parameterized constructor
	Car D("Lord Nano", 20, 10);
	Car E = A; // Copy Constructor ko call krega

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();


	return 0;
}
















