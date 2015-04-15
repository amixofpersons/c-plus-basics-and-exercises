#include <iostream>
/*
Other optional methods to use:
using namespace std;

OR

using std::cout;
using std::cin;
using std::endl;
*/
int main(){
	//Here I'm using a string variable called name.
	//Strings are especially interesting in C++ as we'll learn later.
	std::string name;

	std::cout << "What is your name?" << std::endl;
	//This line prompts for a user to input information. Here we'll be storing that info in our new variable
	std::cin >> name;

	std::cout << "Hello, " << name << " and welcome to the world!" << std::endl;
	//That's all there is to input!
}