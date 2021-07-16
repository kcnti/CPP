#include <iostream>
#include <unordered_set>

int main() {
	std::unordered_set<int> ans;
	int n; std::cin >> n;
	int a;
	while(n--) {
		std::cin >> a;
		ans.insert(a);
	}
	for (auto it = ans.begin(); it != ans.end();)
        std::cout << --it << std::endl;
}
