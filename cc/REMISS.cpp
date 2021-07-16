#include <iostream>

int main(){
    int n; std::cin >> n;
    while(n--){
        int a,b;
        std::cin >> a >> b;
        //(a>b) ? std::cout << b << " " << a+b << std::endl : std::cout << a << " " << a+b << std::endl;
        std::cout << a << " " << a+b << std::endl;
    }
    return 0;
}
