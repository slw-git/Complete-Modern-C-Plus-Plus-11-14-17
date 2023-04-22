#include <iostream>

int main() {

	using namespace std;

	int arr[] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << endl;

	for (const auto & x : arr) {
		
		std::cout << x << " ";
	}
	std::cout << endl;

	for (auto x : { 1,2,3 }) {
		std::cout << x;
	}
	std::cout << endl;

	// Pointerfun with rangers
	std::cout << "Pointerfun with rangers" << endl;
	int* beg = std::begin(arr);
	int* end = std::end(arr);
	while (beg != end) {
		std::cout << *beg << " ";
		beg++;
	}
	std::cout << endl;

	std::cout << "Pointerfun with rangers, round 2" << endl;
	auto &&range = arr;
	auto beg2 = std::begin(arr);
	auto end2 = std::end(arr);
	for (; beg2 != end2; beg2++) {
		auto v = *beg2;
		std::cout << v << " ";

	}

	return 0;
}