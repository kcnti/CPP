#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> all;
        all.push_back(nums1);
        all.push_back(nums2);
        for(auto i: all)
            cout << i << " ";
        return all;
}

int main(){
  cout << findMedianSortedArrays({1,2}, {3,4}) << endl;
  return 0;
}
