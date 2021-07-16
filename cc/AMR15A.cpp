#include <iostream>

int main(){
    int n; std::cin >> n;
    int rd=0,nrd=0;
    while(n--){
        int a; std::cin >> a;
        if(a%2 == 0)
            rd++;
        else nrd++;
    }
    if(rd>nrd)
        std::cout << "READY FOR BATTLE" << std::endl;
    if(rd<=nrd)
        std::cout << "NOT READY" << std::endl;
}
