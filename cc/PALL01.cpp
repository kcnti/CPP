#include <iostream>
#include <string>

int main(){
    int n; std::cin >> n;
    while(n-- && n != -1){
        std::string num;
        std::cin >> num;
        int temp=1, temp2=1, res=0;
        int mid = num.length()/2;
        if(mid%2==0){
            temp2++;
        }
        for(int i=1;i<num.length();i++){
            if(num[mid+i] == num[mid-i]){
                res++; temp++; temp2++;
            }
        }
        if(num.length() == 2){
            if(num[0] == num[1]){
                std::cout << "wins" << std::endl;
                continue;
            }
        }
        if(res >= mid){
            std::cout << "wins" <<std::endl;
        }
        else{
            std::cout << "loses" << std::endl;
        }
    }
}
