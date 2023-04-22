#include <iostream>
#include <string>

int main() {
	using namespace std;

	int x = 10;

	cout << &x << "\n";
	int *ptr = &x;
	
	cout << "1: " << x << "\n";

	*ptr = 1000;

	cout << "2: " << x << "\n";

	// Address of -operator, dereference
	int *pint = nullptr;
	pint = (int*)(&x);
	cout << "3: " << x << "\n";
	cout << "4: " << pint << "\n";
	cout << "5: " << *pint << "\n";

	return 0; 
}