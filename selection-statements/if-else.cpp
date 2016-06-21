#include <iostream>
using namespace std; 

int main(){
	/* If else statements are pretty self explanatory. if a condition
	is met, then do the following. Else, do this by default.*/
	int n;

	cout << "Please input a number between 5 and 15.\n";
	cin >> n;

	/*if statements must always have a condition when you type them out.
	else statements don't need this extra step.

	if you want to create an if statement wit other if conditions, you'll
	use the statement else if.

	In this example, if they type in the number 10, we'll have an extra
	statement printed out. */
	if(n < 5 || n > 15){
		cout << "Nice try, that's not a number within the range I asked for.\n";
	}
	else if( n == 10){
		cout << "The number you input is " << n << endl;
		cout << "That number's the median of the range I gave you!\n";
	}
	else{
		cout << "The number you input is " << n << endl;
	}
}