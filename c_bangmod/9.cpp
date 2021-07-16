#include <iostream>
#include <string>

int main(){
    std::string n; std::cin >> n;
    std::string a = ""; std::string b = "";
    for(int i=0;i<n.length();i+=2){
        a = a + n[i];
    }
    for(int i=1;i<n.length();i+=2){
        b = b + n[i];
    }
    std::cout << a << " " << b << std::endl;
}
