#include <bits/stdc++.h>
using namespace std;

int main(){
  int w,day;
  double h,iw;
  cout << "Enter your current weight: ";
  cin >> w;
  cout << "Enter your height: ";
  cin >> h;
  iw = 24.9 * pow(h,2);
  cout << "Your ideal weight = " << setprecision(1) << fixed << iw << endl;
  day = 14*(w-iw);
  cout << "You should take " << day << " days for healthy weight loss." << endl;
  return 0;
}
