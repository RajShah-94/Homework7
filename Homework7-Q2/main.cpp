/*
 * main.cpp
 *
 *  Created on: 14 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>
#include <cstdlib>
#include <vector>

float average(std::vector<int> & vec){
	int size = vec.size();
	//int size = vec.size() -1 ; replace the above line for this one, if 0 is not meant to be included in the average calculation.
	float sum=0;
	float average;

	for (int i=0; i<size; i++){

		sum+= vec[i];
	}

	average = sum/size;
	return average;

}

int main(){
	std::vector<int> vec;
	int input =0;

	do  {
		std::cin >>input;
		if (std::cin.good() == true ){
			vec.push_back(input);}else {input =0; std ::cout << "Sorry Input Failed"<< std::endl;}
	} while (input != 0);

	std::cout << "The size of the vec is : "<< vec.size() << std::endl;
	std:: cout << "The average is :" <<average(vec);
}
