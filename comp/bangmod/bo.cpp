#include <vector>
#include <iostream>

std::vector<int> fibonacci_member(int n){ // output member of fibonacci
	std::vector<int> ans;
    int init = 0, sec = 1, next = 0;
    next = init + sec;
    //cout << init << " " << sec << " ";
    while(next<=n){
        //cout << next << " ";
        init=sec;
        sec=next;
		ans.push_back(next);
        next=init+sec;
    }
	ans.push_back(next);
    return ans;
}
int main() {
	int up=0,left=0,down=0,right=0;
	std::vector<int> vec (4,0);
	int n; std::cin >> n;
	std::vector<int> res = fibonacci_member(n);
	for(size_t i=0;i<res.size();i++) {
		
	}
}
