#include <bits/stdc++.h>
using namespace std;

int main(){
  const double pi = 3.142;
  int r,h;
  cin >> r >> h;
  r/=2;
  cout << (pi*pow(r,2)*h)/1000 << endl;
  return 0;
}
