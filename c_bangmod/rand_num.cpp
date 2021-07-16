#include <bits/stdc++.h>
using namespace std;

string func(int n){
  string res = "";
  int arr[n];
  for(int i=0;i<n;i++){
    int random = (rand()%(1000+1));
    arr[i] = random;
  }
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<n;j++){
      if(arr[i] == arr[j]){
        sum++;
      }
    }
    string arrs = to_string(arr[i]);
    string _sum = to_string(sum);
    res = res + "(" + arrs + " = " + _sum + ")";
  }
  return res;
}

int main(){
  cout << func(1000) << endl;
}
