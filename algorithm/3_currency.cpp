#include <bits/stdc++.h>
using namespace std;

int main(){
  const double usd = 0.033, yen = 3.43, yuan = 0.22;
  double bal;
  cin >> bal;
  cout << bal*usd << " usd " << bal*yen << " yen " << bal*yuan << " yuan " << endl;
  return 0;

}
