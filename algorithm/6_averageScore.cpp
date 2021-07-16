#include <bits/stdc++.h>
using namespace std;

int main(){
  int arrScore[20];
  int arrSize = sizeof(arrScore) / sizeof(arrScore[0]);
//  cout << arrSize;
  int sum=0;
  for(int i=0; i<arrSize;i++)
    cin >> arrScore[i];
  for(int i=0; i<arrSize;i++)
    sum+=arrScore[i];
  sum/=20;
  if(sum>=80 && sum<=100)
    cout << 'A' << endl;
  else if(sum>=75 && sum<80)
    cout << "B+" << endl;
  else if(sum>=70 && sum<75)
    cout << 'B' << endl;
  else if(sum>=65 && sum<70)
    cout << "C+" << endl;
  else if(sum>=60 && sum<65)
    cout << 'C' << endl;
  else if(sum>=55 && sum<60)
    cout << "D+" << endl;
  else if(sum>=50 && sum<55)
    cout << 'D' << endl;
  else
    cout << 'F' << endl;
  return 0;
}
