#include <iostream>
#include <string>

int main(){
    int n; std::cin >> n;
    while(n--){
        int sum=0;
        std::string a; std::cin >> a;
        for(int i=0;i<a.length();i++){
            if(a[i] == '4') sum++;
        }
        std::cout << sum << std::endl;
    }
    return 0;
}
