#include <iostream>
#include <vector>

int main() {
	int n; std::cin >> n;
	int a,b;
	while(n--) {
		int gcd=1, lcm=1;
		std::cin >> a >> b;
		std::vector<int> vec;
		int first=0;
		for(int i=2;i<=a && i<=b;i++) {
			while(a%i==0 && b%i==0) {
				vec.push_back(i);
				a/=i;
				b/=i;
			}		
		}
		vec.push_back(a);
		vec.push_back(b);
		for(size_t i=0;i<vec.size();i++) {
			// std::cout << lcm << "*" << vec[i] << std::endl;
			lcm*=vec[i];
		}
		for(size_t i=0;i<vec.size()-2;i++) {
			// std::cout << gcd << "*" << vec[i] << std::endl;
			gcd*=vec[i];
		}
		std::cout << "Answer: \n" << gcd << " " << lcm << std::endl;
	}
}