/*
	 * main.cpp
	 *
	 *  Created on: 14 Mar 2014
	 *      Author: Raj Shah 120695027
	 */

	//#include <stream>, stream is not a header file
	#include <iostream>

	float largestValue(double a, double b);
	float smallestValue(double a, double b); //missing semicolon, required to end the command

	int main() {
		double x=0;
		double y=0;
		std::cout << "Enter a number:";
		std::cin >> x;
		std::cout << std::endl;
		std::cout << "Enter another number:";
		std::cin >> y;
		//std::cout << function2(x,y) << " " << function1(x,y) << std::endl; //incorrect square brackets, require () for functions
		std::cout << smallestValue(x,y) << " " << largestValue(x,y) << std::endl;
} //did not close int main, bracket required to end main function

float largestValue(double a, double b) {
	if( a > b) {
		return a;
	} else {
		return b;
	}
}

float smallestValue(double a, double b) { //float, double has a larger memory allocation
	if( a < b) {
		return a;
	} else {
		return b;
	}
}
