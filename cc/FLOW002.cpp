#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int a,b;
  double c;
  for(int i=0; i<t;i++){
    cin >> a >> b;
    c = a%b;
    cout << c << endl;
  }
}
