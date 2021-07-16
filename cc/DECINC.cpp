#include <iostream>

int main(){
    int a;std::cin >> a;
    if(a%4 == 0)
        std::cout << ++a << std::endl;
    else
        std::cout << --a << std::endl;
}
