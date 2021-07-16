#include <bits/stdc++.h>
using namespace std;

int GCD(int *k,int size){
  int sum=0;
  for(int i=0;i<size;i++){
    for(int j=2;j<10;j++){
      if(k[i]%j==0)
        sum = j;
    }
  }
  return sum;
}
  
int main(){
  int n;
  cout << "Enter N = ";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    arr[i] = a;
  }
  int sizearr = sizeof(arr) / sizeof(arr[0]);
  cout << "GCD: " << GCD(arr, sizearr) << endl;
}
