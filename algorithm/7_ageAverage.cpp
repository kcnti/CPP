#include <bits/stdc++.h>
using namespace std;

int main(){
  int ageArr[20];
  int sizeArray = sizeof(ageArr) / sizeof(ageArr[0]);
  int age=0;
  for(int i=0; i<sizeArray;i++){
    cin >> ageArr[i];
    age+=ageArr[i];
    }
  age/=sizeArray;
  if(age<15)
    cout << "Kid" << endl;
  else if(age>=15 && age<20)
    cout << "Teen" << endl;
  else if(age>=20 && age<=40)
    cout << "Adult" << endl;
  else if(age>40 && age<=60)
    cout << "Middle age" << endl;
  else
    cout << "Old" << endl;
  return 0;

}
