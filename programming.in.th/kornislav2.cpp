#include <iostream>
#include <algorithm>

int main(){
    int square[4];
    int temp;
    for(int i=0;i<4;i++){
        int a; std::cin >> a;
        square[i] = a;
    }
    if(square[0] > square[2]) std::swap(square[0], square[2]);
    int base = square[0] * square[1];
    for(int i=1;i<4;i++){
        temp = square[i];
        std::swap(square[1], temp);
        if(temp > square[3]){
            std::swap(temp, square[3]);
        }
        if(square[0] * temp > base){
            base = square[0] * temp;
        }
    }
    std::cout << base << std::endl;
}
