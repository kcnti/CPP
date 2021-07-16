#include <iostream>
using namespace std;

int main(){
  int sum=0;
  int n,k,t;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> t;
    if(t%k==0){
      sum++;
    }
  }
  cout << sum;
  return 0;
}
