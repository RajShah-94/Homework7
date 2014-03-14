/*
	 * main.cpp
	 *
	 *  Created on: 14 Mar 2014
	 *      Author: rajru_000
	 */

	//#include <stream>
	#include <iostream>

	float function1(double a, double b);
	float function2(double a, double b); //missing semicolon

	int main() {
		double x=0;
		double y=0;
		std::cout << "Enter a number:";
		std::cin >> x;
		std::cout << std::endl;
		std::cout << "Enter another number:";
		std::cin >> y;
	std::cout << function2(x,y) << " " << function1(x,y) << std::endl; //brackets
} //did not close int main

float function1(double a, double b) {
	if( a > b) {
		return a;
	} else {
		return b;
	}
}

float function2(double a, double b) { //float
	if( a < b) {
		return a;
	} else {
		return b;
	}
}
