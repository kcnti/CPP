#include <bits/stdc++.h>
using namespace std;

int first(int n){
  while(n>=10){
    n/=10;
    }
  return n;
}

int second(int n){
  return n%10;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    int sum=0;
    cin >> n;
    sum = first(n) + second(n);
    cout << sum << endl;
  }
  return 0;
}
