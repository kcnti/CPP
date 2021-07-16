#include <iostream>

int fact(int n){
    return (n==1) ? n : n * fact(n-1);
}

int main(){
    std::cout << fact(30) << std::endl;
    return 0;
}
