/*
	Hardness must > 50
	Carbon must < 0.7
	Tensile must > 5600
*/
#include <iostream>

int main() {
	int tc; std::cin >> tc;
	while(tc--) {
		float h,c,t;
		std::cin >> h >> c >> t;
		bool hb, cb, tb;
		(h >= 50) ? hb = true : hb = false;
		(c <= 0.7) ? cb = true: cb = false;
		(t >= 5600) ? tb = true: tb = false;
		if(hb && cb && tb) {
			std::cout << 10 << std::endl;
			continue;
		}
		if(hb && cb) {
			std::cout << 9 << std::endl;
			continue;
		}
		if(cb && tb) {
			std::cout << 8 << std::endl;
			continue;
		}
		if(hb && tb) {
			std::cout << 7 << std::endl;
			continue;
		}
		if(hb || cb || tb) {
			std::cout << 6 << std::endl;
			continue;
		}
		if(!hb || !cb || !tb) {
			std::cout << 5 << std::endl;
			continue;
		}
	}
}