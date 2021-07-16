#include <iostream>

int main() {
	int tc; std::cin >> tc;
	while(tc--) {
		int n,k;
		int ans=0;
		std::cin >> n >> k;
		for(int i=0;i<n;i++) {
			int a;
			std::cin >> a;
			a = a+k;
			if(a%7==0) {
				ans++;
			}
		}
		std::cout << ans << std::endl;
	}
}