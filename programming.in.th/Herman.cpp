#include <bits/stdc++.h>
using namespace std;

int main(){
    int r;
    double common, taxi;
    cin >> r;
    common = r*r*M_PI;
    taxi = 4*(0.5*pow(r,2));
    cout << setprecision(6) << fixed << common << "\n" << taxi << endl;
    return 0;
}
