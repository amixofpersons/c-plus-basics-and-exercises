#include <iostream>
using namespace std; 

int main(){
	/*
	switch statements are similar to if statements as they're also
	selection statements. the syntax of course will differ as well.
	*/

	int n;
	cout << "Please input a number between 0 and 5.\n";
	cin >> n;

	/* You'll first set up a switch statement by putting the value
	you're comparing in the parenthesis. Here we have n in a switch
	statement and will check to see if any of the cases are met.*/
	switch(n){
		/*this case statement would be the equivalent to this:
			if(n == 1){
				cout statement here
			}
		*/
		case 1:
		cout << "The value of n is 1.\n";
		//you'll need a break statement at the end of each case
		break;

		case 2:
		cout << "The value of n is 2.\n";
		break;

		case 3: 
		cout << "The value of n is 3.\n";
		break;

		case 4:
		cout << "The value of n is 4.\n";
		break;

		//your default is the equivalent of your else statements
		default: 
		cout << "The value of n is greater than 4 or less than 1.\n";
	}
}