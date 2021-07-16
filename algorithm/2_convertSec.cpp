#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int sec, hour, min, second;
  cin >> sec;
  second = sec%60;
  min = sec/60;
  hour = min/60;
  if(min == 60){
    min = 0;
  }
  cout << hour << "hour " << min << "minute " << second << "second" << endl;
  return 0;

}
