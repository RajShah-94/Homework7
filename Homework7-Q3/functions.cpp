/*
 * functions.cpp
 *
 *  Created on: 14 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include "functions.hpp"
#include <iostream>
#include <vector>

std::ostream & operator << (std::ostream & os, const std::vector<int> & vec) {
	for(int i=0, i<int(vec.size()); i++) {
		os << vec[i] << " ";
		if((i+1)%8==0) {
			os << std::endl;
		}
	}
	return os;
}
