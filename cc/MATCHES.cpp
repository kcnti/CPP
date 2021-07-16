#include <iostream>
#include <string>

int main(){
	int n; std::cin >> n;
	int matches[10] = {6,2,5,5,4,5,6,3,7,6};
	while(n--){
		int a,b,sum;
		int count=0;
		std::cin >> a >> b;
		sum = a+b;
		// std::cout << sum << std::endl;
		for(char i: std::to_string(sum)) {
			// std::cout << i << " " << matches[(int)i-48] << " "
			// << std::endl;
			count+=matches[(int)i-48];
		}
		std::cout << count << std::endl;
	}
}