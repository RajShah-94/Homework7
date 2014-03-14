/*
	 * main.cpp
	 *
	 *  Created on: 14 Mar 2014
	 *      Author: Raj Shah 120695027
	 */

	//#include <stream>, iostream
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
		//std::cout << function2(x,y) << " " << function1(x,y) << std::endl; //incorrect square brackets,
		std::cout << smallestValue(x,y) << " " << largestValue(x,y) << std::endl;
} //did not close int main,

float largestValue(double a, double b) {
	if( a > b) {
		return a;
	} else {
		return b;
	}
}

float smallestValue(double a, double b) { //float, as defined before and to fix the memory it needs
	if( a < b) {
		return a;
	} else {
		return b;
	}
}
