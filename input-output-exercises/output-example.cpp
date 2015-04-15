#include <iostream>
/* 
In C++ there are multiple ways to output to the command line!
the simplest way to do so is to type std::cout

If you don't like typing, you have the option to import std methods like so:
using namespace std;
OR 
using std::cout;

This way you don't have to type std:: in front of your statements.
Be forewarned that depending on what you use can seriously affect your code!
*/

int main(){
	/* 
	if you typed using namespace or using std before, this line would look like this:
	cout >> "This is the standard form of output in C++!";
	*/
	std::cout << "This is the standard form of output in C++!" << std::endl;
    std::cout << "STD just stands for standard, while cout is c output. You need the two arrows beforehand as well." << std::endl;
    std::cout << "The method std::endl simple starts the output statement on a new line. It looks nicer that way." << std::endl;

    std::cout << "You " << "can " << "also " << "chain " << "words!" << std::endl;
    std::cout << "Including variables is also possible! For example, 2+2 = " << 2+2 << "." << std::endl;

    std::cout << "The possibilities are endless!" << std::endl;
}