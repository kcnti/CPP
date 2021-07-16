#include <iostream>

int main() {
	int tc;std::cin >> tc;
	while(tc--) {
		int n; std::cin >> n;
		int alice[n], bob[n];
		int highest = 0, k;
		int sa=0,sb=0;
		for(int i=0;i<n;i++) {
			std::cin >> k;
			alice[i] = k;
			sa+=alice[i];
			if(alice[i] > highest)
				highest = alice[i];
		}
		// std::cout << highest << std::endl;
		sa-=highest;
		highest=0;
		for(int i=0;i<n;i++) {
			std::cin >> k;
			bob[i] = k;
			sb+=bob[i];
			if(bob[i] > highest)
				highest = bob[i];
		}
		sb-=highest;
		if(sa == sb)
			std::cout << "Draw" << std::endl;
		if(sa < sb)
			std::cout << "Alice" << std::endl;
		if(sb < sa)
			std::cout << "Bob" << std::endl;
	}
}