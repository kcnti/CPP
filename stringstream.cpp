#include <sstream>
#include <string>
#include <iostream>

int main() {
	int integer;
	std::string input="";
	std::cout << "Enter an integer: ";
	std::cin >> input;
	std::istringstream ss (input);
	if(ss >> integer)
		std::cout << "Yes it is integer" << std::endl;
	else
		std::cout << "Nah it isn't" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout << integer << std::endl;
}
