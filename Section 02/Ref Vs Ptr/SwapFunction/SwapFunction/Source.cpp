#include <iostream>
/*
Difficult to use and prone to errors
Also needs a null check
*/

//void Swap(int x, int y) {
//
//	std::cout << "Swap o" << std::endl;
//
//	int temp = x;
//	x = y;
//	y = temp;
//}

void Swap(int *x, int *y) {
	
	std::cout << "Swap ** Pointers **" << std::endl;
	
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Easy to use and no null check required
void Swap(int &x, int &y) {

	std::cout << "Swap ** References **" << std::endl;
	
	int temp = x;
	x = y;
	y = temp;
}

int main() {

	using namespace std;

	int a = 5, b = 10;
	cout << "(Initial values) a:" << a << " b:" << b << std::endl;

	Swap(a, b);
	cout << "(Swap 1) a:" << a << " b:" << b << std::endl;

	Swap(&a, &b);
	cout << "(Swap 2) a:" << a << " b:" << b << std::endl;

	return 0;
}