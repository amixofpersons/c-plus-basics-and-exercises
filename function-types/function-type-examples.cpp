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

//
int addition (int a, int b){
  int r;
  r=a+b;
  return r;
}

void outputname(string n){
	cout << "Hello there, " << n << "! I hope you have a great day!\n";
}

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