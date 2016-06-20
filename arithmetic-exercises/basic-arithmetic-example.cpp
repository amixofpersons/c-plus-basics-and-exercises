#include <iostream>
#include <cmath>

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
	cout << sum '/n';
	difference = 4-3;
	cout << difference '/n';
	product = 2*4;
	cout << product '/n';
	quotient = 3/1;
	cout << quotient '/n';

	//some math requires you to include the math library in C++
	//this library is called "cmath"
	squared = pow(2, 3);
	cout << squared '/n';

	/*
	it's important to know what each number is whether it's an integer,
	float or a double. you can easily get different results if you
	use an int instead of a double. we'll be using the squareroot as an example
	*/

	squareroot = sqrt(66);
	cout << squareroot '/n';
	dsquareroot = sqrt(66);
	cout << dsquareroot '/n';

	return 0;
}