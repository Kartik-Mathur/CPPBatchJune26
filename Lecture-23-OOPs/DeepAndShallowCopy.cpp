#include <iostream>
using namespace std;

//////////////////////////////// BLUE PRINT-CAR ////////////////////////////////
class Car {
private:

	int price;

public:
	// STATIC DATA MEMBERS: They belong to class not to an Object
	static int count;
	// Data Members
	char *name;
	int model, seats;
	// Constant Data Members -> We can only initialize constant buckets
	// assign nahi kr skte values ko
	const int tyres;

	Car(): tyres(4) {
		name = NULL;
		count++;
	}

	Car(char *n, int p, int s, int m): tyres(4), price(p), model(m), seats(s) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// price = p;
		// seats = s;
		// model = m;
		count++;
	}

	Car(Car &Y): tyres(4) {
		name = new char[strlen(Y.name) + 1];
		strcpy(name, Y.name);
		price = Y.price;
		model = Y.model;
		seats = Y.seats;
		count++;
	}

	void operator=(Car Y) {
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
		// cout << "Deleting " << name << endl;
		count--;
	}

	void setPrice(int p) {
		if (p > 100 and p < 500) {
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
		cout << "Tyres:  " << tyres << endl;
		cout << "Seats:  " << seats << endl << endl;
	}

	// OPERATOR OVERLOADING
	bool operator>(Car &Y) {
		if (price > Y.price) {
			return true;
		}
		else {
			return false;
		}
	}
};
/////////////////////////////// @BLUE PRINT-CAR ////////////////////////////////


int Car::count = 0; // Static variables are initialised in this manner


int main() {

	Car A;

	A.setName("BMW");
	A.setPrice(400);
	A.model = 2020;
	A.seats = 4;

	Car B;
	B.setName("Audi");
	B.setPrice(233);
	B.model = 2022;
	B.seats = 2;
	cout << "Total Number of Cars: " << Car::count << endl;
	cout << "Total Number of Cars: " << A.count << endl;

	Car C = A;
	Car D = A;

	D.name[0] = 'T';

	// OPERATOR OVERLOADING
	// KISI BHI OPERATOR KA KAAM KYA HONA CHAHIYE
	// Yeh hum define kar skte hai
	if (A > B) { // A ne '>' operator ko call kia hai, aur B argument mei jaega
		cout << "A is costly\n";
	}
	else {
		cout << "B is costly\n";
	}

	A.print();
	B.print();
	C.print();
	D.print();

	cout << "Total Number of Cars: " << A.count << endl;


	return 0;
}
















