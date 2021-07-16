#include <iostream>
#include <cmath>
using namespace std;

int fsqrt(int n){
  return sqrt(n);
}
int main(){
  int t;
  cin >> t;
  while(t--){
    int a;
    cin >> a;
    cout << fsqrt(a) << endl;
  }
  return 0;
}
