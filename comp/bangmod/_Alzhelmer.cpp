#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
	std::vector<int> ans;
	int n; std::cin >> n;
	while(n--) {
		int a;
		std::cin >> a;
		ans.push_back(a);
	}
	for (auto house : ans){
        if (std::find(ans.begin(), ans.end(), house) != ans.end())
			std::cout << house << std::endl;
    }

	return 0;
}
