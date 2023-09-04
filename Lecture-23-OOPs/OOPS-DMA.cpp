#include <iostream>
using namespace std;

//////////////////////////////// BLUE PRINT-CAR ////////////////////////////////
class Car {
private:

	int price;

public:
	// Data Members
	char *name;
	int model, seats;

	Car() {
		cout << "Hello, I am default constructor!!\n";
		// Yaha par name ko NULL krdo, kyunki name mei garbage nhi rehne de skte
		name = NULL;
	}

	Car(char *n, int p, int s, int m) {
		cout << "Hello, I am Parameterized constructor!!\n";
		// Kyunki name ek pointer hai, usse memory allocate krni padegi
		// before we can copy n inside it
		// n = "BMW"
		// Step 1: name = new char[strlen(n) + 1];
		// name -> [_ _ _ _]

		// Step 2: strcpy(name, n);
		// name -> [B M W NULL]
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		seats = s;
		model = m;
	}

	Car(Car &Y) {
		cout << "Inside Copy Constructor\n";
		name = new char[strlen(Y.name) + 1];
		strcpy(name, Y.name);
		price = Y.price;
		model = Y.model;
		seats = Y.seats;
	}

	void operator=(Car Y) {
		cout << "Inside Copy Assignment\n";
		if (name != NULL) {
			delete []name;
		}
		name = new char[strlen(Y.name) + 1];
		strcpy(name, Y.name);
		price = Y.price;
		model = Y.model;
		seats = Y.seats;
	}

	void setName(char *n) {
		if (name != NULL) {
			delete []name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	~Car() {
		cout << "Deleting " << name << endl;
	}

	void setPrice(int p) {
		if (p > 100 and p < 150) {
			price = p;
		}
		else {
			price = 120;
		}
	}

	int getPrice() {
		return price;
	}

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

	// strcpy(A.name, "BMW");
	A.setName("BMW");
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	// A.price = -1000;
	A.setPrice(-1000);
	A.model = 2020;
	A.seats = 4;

	Car B; // Gets created using default constructor
	// strcpy(B.name, "Audi");
	B.setName("Audi");
	// B.price = 233;
	B.setPrice(233);
	B.model = 2022;
	B.seats = 2;

	char x[] = "Lord Alto";
	Car C(x, 50, 4, 2024); // Gets created using parameterized constructor
	Car D("Lord Nano", 20, 10, 2020);
	Car E = A; // Copy Constructor ko call krega


	// Copy Assignment Operator Function!
	// Agar ek bane huye object ko update krna hai doosre object ki property se
	// Then we use Copy Assignment Operator(=)
	// B = A; // This will call copy assignment operator
	cout << A.getPrice() << endl;

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();


	return 0;
}
















