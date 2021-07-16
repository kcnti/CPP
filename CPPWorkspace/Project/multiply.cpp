#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int num {};
    cout << "Enter a number to multiply: ";
    cin >> num;
    for (int i{0}; i <= 12; ++i){
        cout << num << " * " << i << " = " << num*i << endl;
    }
    cout << endl;
    return 0;

}