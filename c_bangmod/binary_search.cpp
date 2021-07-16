#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int value){
  int sum=0;
  sort(arr, arr+(high+1));
  for(int i=0; i<high+1;i++)
    cout << arr[i] << " ";
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]<value) // if value in array at middle is lower than value lets mid+1
      low = mid-1;
    else if(arr[mid]>value)
      high = mid-1;
    else{
      sum++;
      low = mid+1;
      cout << sum << " ";
      }
  }
  if(sum>0) return sum;
  return -1;
}

int main(){
    int arr[] = {1,2,3,3,3,3,4,5,5,5,6,3,7,8};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int to_find = 3;
    int result = binarySearch(arr,0,arrSize-1,to_find);
    (result == -1) ? cout << "Element is not in array" :
    cout << "Element duplicates of " << to_find << " is " << result;
    cout << endl;
    return 0;
}
