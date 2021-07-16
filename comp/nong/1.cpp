#include <iostream>

int main(){
    int a;
    char status = 'T';
    std::cin >> a;
    if(a == 0 || a==1){
        status = 'F';
    } else{
        for(int i=2;i<a/2;i++){
            if(i%2==0) // if that number mod 2 and equal to 0
                status = 'F';
        }
    }
    std::cout << status << std::endl;
    return 0;
}
