#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[3][4];
    int arr2[3][4];
    int a;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> a;
            arr1[i][j] = a;
            arr2[i][j] = a;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}
