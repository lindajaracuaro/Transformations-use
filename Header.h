// Transformatios developed by Linda Pérez 8/21/20
// Transform is one of the C++ gems less known in this project you'll see a few examples of how to use this powerfull tool 

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Transform {
	std::vector<int> res;
public:
	Transform();
	Transform(std::vector<int> v);
	~Transform();
	template<typename T>
	void printVector(std::vector<T> v);
	void substraction(std::vector<int> v1, std::vector<int> v2);
	void add(std::vector<int> v1, std::vector<int> v2);

};
