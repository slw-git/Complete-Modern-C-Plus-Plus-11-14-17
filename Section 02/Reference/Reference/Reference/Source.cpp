#include <iostream>

int main() {

	using namespace std;

	// Referent
	int x = 10;
	cout << "(1) ==>" << x << " -- " << &x << endl;

	// Reference
	int &ref = x;
	cout << "(2) ==>" << x << " -- " << ref << " -- " << &x << endl;

	ref = 100;
	cout << "(3) ==>" << x << " -- " << ref << " -- " << &x << endl << endl;

	int y = 20;
	ref = y;

	cout << "(4) ==>" << y << " -- " << ref << " -- " << &x << endl << endl;

	return 0 ;
}