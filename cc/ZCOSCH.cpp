#include <iostream>

int main() {
	int r; std::cin >> r;
	if(r >= 1 && r <=50) {
		std::cout << 100 << std::endl;
	}
	if(r>50 && r<=100) {
		std::cout << 50 << std::endl;
	}
	if(r>100) std::cout << 0 << std::endl;
}