#include <iostream>

int main(){
	int n;std::cin >> n;
	while(n--) {
		char a; std::cin >> a;
		switch(a) {
			case 'B':
			case 'b':
				std::cout << "BattleShip" << std::endl;
				break;
			case 'C':
			case 'c':
				std::cout << "Cruiser" << std::endl;
				break;
			case 'D':
			case 'd':
				std::cout << "Destroyer" << std::endl;
				break;
			case 'F':
			case 'f':
				std::cout << "Frigate" << std::endl;
				break;
			default:
				std::cout << "BABA" << std::endl;
				break;
		}
	}
}