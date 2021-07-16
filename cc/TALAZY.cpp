#define lli long long int
#include <iostream>

int main(){
	int n; std::cin >> n;
	while(n--){
		lli N,B,M;
		std::cin >> N >> B >> M;
		lli problem;
		lli minute = 0;
		while(N>0) {
			if(N%2==0) {
				//is even
				problem = N/2;
			} else {
				problem = (N+1)/2;
			}
			minute+=(problem*M);
			M = M*2;
			N = N-problem; // problem left
			if(N == 0)
				break;
			minute+=B;
		}
		std::cout << minute << std::endl;
	}
}

/*
	first 10/2 = 5 problems
	5 problems * solve/minutes
	+1 break time
	4 problems left
	second 4/2 = 2 problems
	2 problems * solve/minutes*2 (because he be lazy after break)
	1+ break time
*/