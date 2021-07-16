#include <iostream>

int main(){
    int square[4];
    for(int i=0;i<4;i++){
        int a; std::cin >> a;
        square[i] = a;
    }
    int base = square[0] * square[1];
    for(int i=0;i<4;i++){
        if(i+1 > 4)
            continue;
        if(square[i] < square[i+1])
            i++;
        for(int j=i+1;j<4;j++){
            if(j+1 > 4) continue;
            if(square[j] < square[j+1])
                j++;
            if(square[i] * square[j] > base){
                base = square[i]*square[j];
            }
        }
    }
    std::cout << base << std::endl;
}
