#include <bits/stdc++.h>

int main() {
	int n;std::cin >> n;
	while(n--) {
		int x,y;
		std::cin >> x >> y;
		int ans=1;
		int sum = x+y+1;
		for(int i=2;i<sum;i++) {
			if(sum%i==0) {
				ans++;
			}
			if(sum%2!=0 && sum%3!=0
		}
		std::cout << ans << std::endl;
	}
}
