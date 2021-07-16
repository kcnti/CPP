#include <bits/stdc++.h>
using namespace std;

int compare(const void *a, const void *b){
    return (*(int*)b-*(int*)a);
}

int main(){
  int n;
  cin >> n;
  float arr[n];
  for(int i=0;i<n;i++){
    float a;
    cin >> a;
    arr[i] = a;
  }
  qsort(arr,n,sizeof(int),compare); // array, n elements of array, size of each element, compare
  for(int i=0;i<n;i++){
    cout << arr[i] << endl;
  }
  return 0;
}
