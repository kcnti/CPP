#include <bits/stdc++.h>
using namespace std;

int main(){
  int times;
  cin >> times;
  while(times--){
    int time;
    cin >> time;
    int dishes[time];
    for(int i=0;i<time;i++){
      cin >> dishes[i];
    }
    sort(dishes, dishes+time);
    reverse(dishes, dishes+time);
    int fburner=0, sburner=0;
    if(time>=2){
      fburner=dishes[0];
      sburner=dishes[1];
      for(int i=2;i<time;i++){
        if(fburner>=sburner)
          sburner+=dishes[i];
        else
          fburner+=dishes[i];
      }
      cout << max(fburner, sburner) << endl;
    }
    else
      cout << dishes[0] << endl;
  }
  return 0;

}
