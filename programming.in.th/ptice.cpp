#include <iostream>
#include <string>

int main() {
	int score=0, As=0, Bs=0, Gs=0;
	std::string A = "ABCABCA";
	std::string B = "BABCBAB";
	std::string G = "CCAABBA";
	std::string Ad = "Adrian";
	std::string Br = "Bruno";
	std::string Go = "Goran";
	int n ;std::cin >> n;
	char input[n];
	int _case=0;
	std::cin >> input;
	for(int i=0;i<n;i++) {
		if(i == 7) {
			_case=0;
		}
		if(input[_case] == A[i])
			As++;
		if(input[_case] == B[i])
			Bs++;
		if(input[_case] == G[i])
			Gs++;
		_case++;
	}
	std::cout << As << " " << Bs << " " << Gs << std::endl;
	if(As == Bs && As == Gs && Bs == Gs) {
		std::cout << As << std::endl;
		std::cout << "Adrian" << std::endl;
		std::cout << "Bruno" << std::endl;
		std::cout << "Goran" << std::endl;
	}
	if(As == Gs) {
		std::cout << As << std::endl;
		std::cout << Ad << std::endl;
		std::cout << Go << std::endl;
	}
	if(Bs == A
	if(As > Bs && As > Gs) {
		std::cout << As << std::endl;
		std::cout << "Adrian" << std::endl;
	}
	if(Bs > As && Bs > Gs){
		std::cout << Bs << std::endl;
		std::cout << "Bruno" << std::endl;
	}
	if(Gs > As && Gs > Bs) {
		std::cout << Gs << std::endl;
		std::cout << "Goran" << std::endl;
	}
}

