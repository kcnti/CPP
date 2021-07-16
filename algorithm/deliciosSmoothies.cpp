#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
int main(){
	int m, n;
	std::cin >> m >> n;
	std::vector<int> cups(m, 0); // 0 0 0 0
	std::vector<int>::iterator it;
	int sum = 0;
	for(auto i = 0; i != m; i++) std::cin >> cups[m - i - 1]; // 4-0-1 4-1-1 4-2-1 4-3-1
	while (n){
		it = std::max_element(cups.begin(), cups.end());

		if(n %  3 != 0){
			sum += *it;
		}
		else {
			sum += floor(*it/2); //*it = *it - 1;
		}
		*it = *it - 1;
		//for(auto &x: cups) std::cout << x << ' ';
		//std::cout << '\n';
		--n;
	}
	std::cout << sum << '\n';
}
