// Transformatios developed by Linda Pérez 8/21/20
// 

#include "Header.h"


class Hola {
public:
	template<typename T>
	void printVector(std::vector<T> v);
};


template<typename T>
void Hola::printVector(std::vector<T> v) {
	for (auto i : v)
		std::cout << i << " ";
	std::cout << "\n";
}


int main() {
	std::vector<int> v1 = { 33, 1, 49, 0 };
	std::vector<int> v2 = { 45, 0, 13 ,3 };
	Transform operation(v1);
	Hola holi;
	
	std::cout << "V1\t";
	operation.printVector(v1);
	std::cout << "V2\t"; 
	operation.printVector(v2);
	std::cout << "V1+V2\t";
	operation.add(v1, v2);
	std::cout << "V2-V1\t";
	operation.substraction(v1, v2);

	std::vector<char> vc1 = { 'a','b','x','q' };
	std::vector<char> vc2 = { 'z','j','p','a' };

}