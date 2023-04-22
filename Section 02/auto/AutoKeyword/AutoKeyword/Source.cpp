#include <iostream>

int Sum(int x, int y) {
	return x + y;
}


int main() {

	using namespace std;

	//One of my favorite features of C++11 ;)
	auto i = 10;
	auto j = 5.5f;

	cout << "j: " << typeid(j).name() << endl;

	auto sum = i + 4.3f;
	auto result = Sum(i, j);

	static auto y = 2;
	const int x = 10;
	
	//Works with qualifiers
	const auto var = x;
	
	//Deduced to reference
	auto &var1 = x;

	//Deduced to a pointer. * is not necessary
	auto *ptr = &x;

	auto list = { 1,2,3,4,5 };
	cout << "list: " << typeid(list).name() << endl;




	return 0;
}