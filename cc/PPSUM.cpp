#include <iostream>

int ppsum(int N, int K) {
	int sum=0;
	if(N == 0) {
		return K;
	}
	for(int i=1;i<=K;i++) {
		sum+=i;
	}
	return ppsum(N-1,sum);
}

int main() {
	int tc;std::cin >> tc;
	while(tc--) {	
		int n,k;
		std::cin >> n >> k;
		std::cout << ppsum(n,k) << std::endl;
	}
	return 0;
}