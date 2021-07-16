#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int rotate(int arr[], int low, int high){
  int r = arr[high];
  int i = low-1;
  for(int j=low;j<=high-1;j++){
    if(arr[j] <= r){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1], &arr[high]);
  return (i+1);
}

void quickSort(int arr[], int low, int high){
  if(low < high){
    int rotated = rotate(arr,low,high);
    quickSort(arr,low,rotated-1);
    quickSort(arr,rotated+1,high);
  }
}

int main(){
  int arr[] = {10,7,8,9,1,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  quickSort(arr,0,n-1);
  for(int i=0; i<n;i++){
      cout << arr[i] << endl;
  }
  return 0;
}
