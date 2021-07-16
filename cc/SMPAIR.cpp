#include <iostream>
#include <vector>

int main() {
	int tc;std::cin >> tc;
	while(tc--) {
		int N; std::cin >> N;
		std::vector<int> arr;
		for(int i=0;i<N;i++) {
			int a;
			std::cin >> a;
			arr.push_back(a);
		}
		int smallest = arr[0] + arr[1];
		for(int i=0;i<arr.size();i++) {
			for(int j=i+1;j<arr.size();j++) {
				if(arr[i]+arr[j] < smallest) {
					smallest = arr[i] + arr[j];
					// std::cout << ans << " ";
				}
			}	
		}
		std::cout << smallest << std::endl;
	}
}