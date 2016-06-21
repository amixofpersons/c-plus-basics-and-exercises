#include <iostream>
using namespace std;

int main(){
	/* for loops are structured to continue looping
	until a condition is met. for example, we can loop
	through until we reach a given point*/
	int n;

	/* Above we declare our int, n, and create a for loop
	centering around the variable. this is relatively common
	to do and is what you'll be using for loops for. 

	Until a condition is met, keep doing this.

	You want to be careful with for loop conditions so you
	don't end up creating an infinite loop which will continue forever
	since the condition to break out of the loop hasn't been established.
	*/

	for(n = 0; n < 10; n++){
		/*here for each time we go through this loop, we'll
		cout the value for n until n is not less than 10 anymore.

		The final value n should be is nine.
		*/
		cout << "The value for n now is " << n << endl;
	}
	return 0;
}