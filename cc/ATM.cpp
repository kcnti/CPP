#include <bits/stdc++.h>
using namespace std;

int main(){
  int wd;
  double bal;
  cin >> wd >> bal;
  if(wd%5 != 0 || wd+0.50 > bal){
    printf("%.2f\n",bal);
    }
  else
    printf("%.2f\n", bal-(wd+0.50));
  return 0;
}
