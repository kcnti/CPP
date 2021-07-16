/* 
 * sort and then find first position of element and then find the last position of element
 *
 */

#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int n, int x,bool index){
     int low=0,high=n-1,result = -1;
     while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
          result = mid;
          if(index) // first
            high = mid-1;
          else // last
            low = mid+1;
        }
        else if(x<arr[mid])
          high = mid-1;
        else
          low=mid+1;
     }
     return result;
}

int main(){
    int arr[] = {10,2,3,4,10,40,10,10};
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    int firstIndex = binarySearch(arr, n, x, true);
    int lastIndex = binarySearch(arr, n, x, false);
    (firstIndex == -1) ? cout << "Element is not duplicate"
                   : cout << "Element " << x << " are duplicated " << lastIndex-firstIndex+1 << " time";
    cout << endl;
    return 0; 
}
