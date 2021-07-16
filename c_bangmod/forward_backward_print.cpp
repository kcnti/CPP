/*
#test case 1
5
7 9 8 5 4
1

#test case 2
5
7 9 8 5 4
-1

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> res(int *arr, int size, int num){
  vector<int> ans;
  for(int i=0;i<size;i++){
    arr[i]+=num;
    ans.push_back(arr[i]);
  }
  if(num < 0) reverse(ans.begin(), ans.end());
  return ans;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    arr[i] = a;
  }
  int how;
  cin >> how;
  vector<int> ans = res(arr, n, how);
  for(int i=0; i<n;i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
