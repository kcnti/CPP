#include <bits/stdc++.h>
using namespace std;

int factorial(int a){
//    if(a==1) return a;
//    return a * factorial(a-1);
      return a!=1 ? a*factorial(a-1) : a;
}
int main(){
    int a;
    cin >> a;
    cout << factorial(a) << endl;
    return 0;
}
