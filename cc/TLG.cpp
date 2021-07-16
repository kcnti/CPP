#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  int low=0,high=0,p1=0,p2=0;
  for(int i=0; i<t;i++){
    int n1,n2;
    cin >> n1 >> n2;
    p1+=n1;
    p2+=n2;
    if(p1>p2){
      if(abs(p1-p2)>high){
        high=abs(p1-p2);
        low=1;
      }
    }
    else{
      if(abs(p2-p1)>high){
        high = abs(p2-p1);
        low=2;
      }
    }
    /*
    arr[i] = abs(p1-p2);
    if(arr[i] > high)
      high = arr[i];
    if(arr[i] < low)
      low = arr[i];
      */
  }
  cout << low << " " << high << endl;
  return 0;
}
