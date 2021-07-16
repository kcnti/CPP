#include <iostream>

int main(){
    int n;std::cin >> n;
    while(n--){
        int a,b,c;
        std::cin >> a >> b >> c;
        if(a+b+c == 180) std::cout << "YES";
        else std::cout << "NO";
        std::cout << std::endl;
    }
}
