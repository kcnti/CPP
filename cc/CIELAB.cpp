#include <iostream>

int main(){
    int a,b,sum;
    std::cin >> a >> b;
    sum = a-b;
    for(int i=1000;i>0;i/=10){
        if(sum/i != 0 && sum >= i*2){
            std::cout << sum-i << std::endl;
            break;
        }
    }
}
