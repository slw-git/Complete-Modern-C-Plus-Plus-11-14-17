#include <iostream>

void Print(const int *ptr) {
	using namespace std;
	cout << "Print [pointer]: " << * ptr << endl;
	// *ptr = 123456;
}

void Print(int &ref) {
	using namespace std;
	cout << "Print [Ref]: " << ref << endl;
	ref = 123456;
}


void UsingConst() {

	using namespace std;

	float radius = 0;
	cout << "Enter radious > ";
	cin >> radius;

	const float PI =  3.141592654f;

	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;

	cout << "Area is : " << area << endl;
	cout << "Circumference is : " << circumference << endl;

	const int CHUNK_SIZE = 512;
	const int *const ptr = &CHUNK_SIZE;

	// *ptr = 1;

	int x = 10;
	
	//ptr = &x;
	//*ptr = 1;
	
	Print(&x);
	cout << "(1) main->x" << x << endl;
}

void PrintRef(const int &ref) {
	using namespace std;
	cout << "Print [ConstRef]: " << ref << endl;
	cout << ref << endl;
}

void UsingConstRef() {
	int x = 5;
	PrintRef(1);
}

int main() {

	UsingConst();
	UsingConstRef();
	
	return 0;
}














