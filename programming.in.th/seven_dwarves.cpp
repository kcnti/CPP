#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    int arr[9], trarr[2];
    for(int i=1; i<10;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    for(int i=1;i<10;i++)
        for(int j=i+1;j<10;j++)
            if(sum-100 == arr[i] + arr[j]){
                trarr[1] = arr[i];
                trarr[2] = arr[j];
                }
    for(int i=1;i<9;i++)
        if(arr[i] != trarr[1] && arr[i] != trarr[2]) cout << arr[i] << endl;
    return 0;
}
