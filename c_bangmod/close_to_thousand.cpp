#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,i,k1,i1;
    const int t = 1000;
    cin >> k >> i;
    k1 = abs(t-k);
    i1 = abs(t-i);
    if(k1==i1)
        cout << '=' << endl;
    else if(k1<i1 || k==t)
        cout << k << endl;
    else
        cout << i << endl;
    return 0;

}
