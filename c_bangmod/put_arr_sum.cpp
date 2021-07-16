#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    int a,b;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
            cin >> a >> b;
            arr1[i] = a;
            arr2[i] = b;
            sum+=(a+b)*(a+b);
        }
    }
    cout << sum << endl;
    return 0;
}
