#include <bits/stdc++.h>
using namespace std;

int main(){
  const int week=4;
  int hour[week];
  int arrSize = sizeof(hour)/sizeof(hour[0]);
  int total_hour=0, type_of_work;
  cout << "Enter hour" << endl;
  for(int i=0;i<arrSize;i++){
    cout << "Week " << i << ": ";
    cin >> hour[i];
    total_hour+=hour[i];
    }
  cin >> type_of_work;
  if(type_of_work == 0){
    cout << total_hour*20 << endl;
  }
  else if(type_of_work == 1){
    cout << total_hour*25 << endl;
  }
  else if(type_of_work == 2){
    cout << total_hour*30 << endl;
  }
  else if(type_of_work == 3){
    cout << total_hour*35 << endl;
  }
  return 0;

}
