#include <bits/stdc++.h>
using namespace std;

double x(double velocity, int t){
  return velocity * t;
}

double y(double velocity, int t){
  return (velocity*t)-(0.5*9.81*pow(t,2));
}

int main(){
  double vx,vy;
  int t;
  cout << "Enter V0x : ";
  cin >> vx;
  cout << "Enter V0y : ";
  cin >> vy;
  cout << "Enter t : ";
  cin >> t;
  cout << setprecision(2) << fixed;
  cout << "Sx = " << x(vx,t) << " m" << endl;
  cout << "Sy = " << y(vy,t) << " m" << endl;
  return 0;
}
