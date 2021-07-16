#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=3;
//  cin >> n;
  int arr[n] = {0,1,2};
 // for(int i=0;i<n;i++){
 //    int a;
 //    cin >> a;
 //    arr[i] = a;
 // }
  int max = arr[0];
  int min = arr[0];
  for(int i=0;i<n;i++){
    if(max < arr[i])
      max = arr[i];
  }
  for(int i=0;i<n;i++){
    if(min > arr[i])
      min = arr[i];
  }
  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
}
