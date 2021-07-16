#include <iostream>

int main(){
    int rs[6] = {1,2,5,10,50,100};
    int n; std::cin >> n;
    while(n--){
        int sum=0;
        int a; std::cin >> a;
        for(int i=5;i>=0;i--){
            if(a/rs[i] != 0){
                sum = sum + a/rs[i];
                a = a - rs[i]*(a/rs[i]);
            }
        }
        std::cout << sum << std::endl;
    }
    return 0;
}
