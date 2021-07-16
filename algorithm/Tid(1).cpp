#include <iostream>

inline int modulo(int a, int b) {
    const int result = a % b;
    return result >= 0 ? result : result + b;
}

int main(){
    const char* direction = "NESW";
    unsigned int n;
    char input;
    short d = 0;
    
    std::cin >> n;
    while(n-- != 0){
        std::cin >> input;
        short temp = input - 'A';
        d = modulo((d + (temp < 2 ? temp : temp == 2 ? -1 : 2)), 4);
    }
    std::cout << direction[d] << std::endl;
}
