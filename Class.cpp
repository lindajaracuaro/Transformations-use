// Transformatios developed by Linda Pérez 8/21/20
// 

#include "Header.h"

Transform::Transform(){}
Transform::Transform(std::vector<int> v) {
	res = v;
}
Transform::~Transform() {}

template<typename T>
void Transform::printVector(std::vector<T> v) {
	for (auto i : v)
		std::cout << i << " ";
	std::cout << "\n";
}

void Transform::substraction(std::vector<int> v1, std::vector<int> v2) {
	std::transform(v1.begin(), v1.end(), v2.begin(), res.begin(), [](int a, int b) { return b - a; });
	printVector(res);
}

void Transform::add(std::vector<int> v1, std::vector<int> v2) {
	std::transform(v1.begin(), v1.end(), v2.begin(), res.begin(), [](int a, int b) { return a + b; });
	printVector(res);
}


