#include <iostream>
#include <string>

int main() {
	std::string input = "";
	std::cin >> input;
	int cntd=0, cnts=0;
	bool ans = true;
	for(size_t i=0;i<input.length();i++) {
		// if(input[0] != '0' && input[1] != '1' || input[1] != '5' || input[1] != '6' || input[1] != '8' || input[1] != '9') {
		// 	std::cout << "Invalid : wrong prefix" << std::endl;
		// 	break;
		// }
		if(input[0]=='-' || input[1] == '-' || input[input.length()-1] == '-') {
			std::cout << "Invalid : wrong dash position" << std::endl;
			ans = false;
			break;
		}
		if(cnts > 10) {
			std::cout << "Invalid : too many digits" << std::endl;
			ans = false;
			break;
		}
		if(input[i] == '-' && input[i+1] == '-') {
			std::cout << "Invalid : two dashes together" << std::endl;
			ans = false;
			break;
		}
		if(cntd>2){
			std::cout << "Invalid : too many dashes" << std::endl;
			ans = false;
			break;
		}
		if((input[i] < '0' || input[i] > '9' || input[i] == ' ') && input[i] != '-') {
			std::cout << "Invalid : Alphabetic" << std::endl;
			ans = false;
			break;
		}
		if(input[i] == '-') {
			cntd++;
			cnts--;
			continue;
		}
		cnts++;
		if(i == input.length()-1 && cnts<8) {
			std::cout << "Invalid : too short" << std::endl;
			ans = false;
			break;
		}
	}
	if(ans)
		std::cout << "Valid" << std::endl;
}
