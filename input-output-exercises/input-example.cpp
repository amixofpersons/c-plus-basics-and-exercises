include <#iostream>
/*
Other optional methods to use:
using namespace std;

OR

using std::cout;
using std::cin;
using std::endl;
*/
int main(){
	string name = "";

	std::cout << "What is your name?" << std::endl
	std::cin >> name;

	std::cout << "Hello, " << name << "and welcome to the world!" << std::endl;
}