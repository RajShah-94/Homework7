/*
 * main.cpp
 *
 *  Created on: 14 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <vector>
#include <cstdlib>

int main() {
	std::srand(12345);
	std::vector<int> vec;
	for(int i =0;i<100;++i) {
		vec.push_back(std::rand());
	}
	std::cout << vec;
}
