#include <bits/stdc++.h>
using namespace std;

int recursion(int a){
  if(a==0)
    return 0;
  return a%10 + recursion(a/10);
}

int main(){
  cout << recursion(43217) << endl;
  return 0;
}
