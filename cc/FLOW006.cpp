#include <iostream>
using namespace std;

int recursive(int a){
  if(a == 0)
    return a;
  else
    return a%10 + recursive(a/10);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << recursive(n) << endl;
  }
  return 0;
}
