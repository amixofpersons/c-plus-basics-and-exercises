#include <iostream>
using namespace std;

int main(){
	/* while loops work in a similar manner to for loops 
	in the sense that until a condition is met, keep looping.

	In this example, I'll demonstrate a while loop that will continue looping
	until the condition that was met has changed. */

	//if you intend to have variables, you'll want to declare them here
	int n = 0;

	/* Above we have an int n declared equal to zero. Below I've
	set up a while loop that, until n = 3, print out the value
	of n and add the number each time at the end of the loop.

	You want to be careful with while loop conditions so you
	don't end up creating an infinite loop which will continue forever
	since the condition to break out of the loop hasn't been established.
	*/
	while(n != 3){
		cout << "The value of n is " << n << endl;
		n++;
	}

	return 0;
}