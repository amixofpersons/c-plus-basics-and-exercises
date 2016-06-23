#include <iostream>
#include <string>
using namespace std; 

/* Functions in C++ have 3 parts to them first, you'll have the
	return type, which is what the function will return at the end.

	Follow that is the function name which you'll use to call it.

	Finally you have parameters which are within the parenthesis 
	after the function name.

	Depending on the program and what you intend to do with a function,
	different return types and parameters may be used. 

	It's important to make sure if your return type isn't void that
	you return a value the same as the function type declared. For 
	example, if I declare an int function I'll want to make sure I
	return an int by the end of it. */

/* if you want to return an integer in a function, you'll want to 
	use the int return type. Be sure that at the end of the function 
	to use a return statement to return your integer. It MUST be an 
	integer, you can't return a different variable */

int addition (int a, int b){
  int r;
  r=a+b;
  return r;
}

/* if you need a function but don't need to return anything your best bet
   is to use the return type void. you won't have to use a return at the
   end of the function*/

/* any variable type can also be specified as a function return type. int,
double, char, string, float, etc. it all depends on what you want to do
with the function */

void outputname(string n){
	cout << "Hello there, " << n << "! I hope you have a great day!\n";
}

//main is always an int function, you'll get an error if you state otherwise
int main (){
  int z;
  string name; 

  z = addition (10,1);
  cout << "The result is " << z;

  cout << "What is your name?\n";
  cin >> name;
  outputname(name);

  return 0;
}