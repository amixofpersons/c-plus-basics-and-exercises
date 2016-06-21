#include <iostream>
using namespace std; 

int main(){
	/* Do while loops are interesting in that anything that
	occurs within the do part of the loop will continue to happen
	and until the while condition is no longer met the loop
	will keep going. 

	NOTE: THEY'RE NOT THE SAME AS WHILE LOOPS. 
	*/

	int n;

	/* First thing you want to do is establish your do portion of the
	loop. simply just type what you want to do in your loop and be sure
	to set up a condition that if met will break you out of the loop. 
	Here we'll be looping asking the user for a number until they type 5.*/
	do{
		cout << "Please type a number between 1 and 10 please!\n";
		cin >> n;
		if(n == 5){
			cout << "You typed 5! The do while loop will stop now. Bye!\n";
		}
		else{
			cout << "You typed " << n << endl;
		}
	}
	/* Here is your while statement. Until n equals 5, this 
	loop will continue going*/ 
	while(n != 5);
}