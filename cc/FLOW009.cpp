#include <iostream>
#include <iomanip>

int main() {
	int tc;std::cin >> tc;
	while(tc--) {
		double q,p,ans;
		std::cin >> q >> p;
		ans = p*q;
		if(q >= 1000) {
			ans = ans - (ans/100)*10;
		}
		std::cout << ans << std::endl;
	}
}