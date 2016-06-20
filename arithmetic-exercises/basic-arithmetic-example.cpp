#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/*
		This file will contain the basics when it comes to writing 
		math in C++. It'll cover everything from addition to some more 
		advanced equations
	*/
	int sum;
	int difference;
	int product;
	int quotient;
	int squared;
	int squareroot;
	double dsquareroot;

	sum = 4+5;
	std::cout << "The sum is "<< sum << '\n';
	difference = 4-3;
	std::cout << "The difference is " << difference << '\n';
	product = 2*4;
	std::cout << "The product is " << product << '\n';
	quotient = 3/1;
	std::cout << "The quotient is " << quotient << '\n';

	//some math requires you to include the math library in C++
	//this library is called "cmath"
	squared = pow(2, 3);
	std::cout << "The answer to 2^3 is " << squared << '\n';

	/*
	it's important to know what each number is whether it's an integer,
	float or a double. you can easily get different results if you
	use an int instead of a double. we'll be using the squareroot as an example
	*/

	squareroot = sqrt(66);
	std::cout << "The square root of 66 as an int is " << squareroot << '\n';
	dsquareroot = sqrt(66);
	std::cout << "The square root of 66 as a double is " << dsquareroot << '\n';

	return 0;
}