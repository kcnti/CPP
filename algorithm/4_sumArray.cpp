#include <iostream>
using namespace std;

int main(){
  int array[20];
  int sum=0;
  for(int i=0;i<20;i++){  
    cin >> array[i];
  }
  int arrSize = sizeof(array)/sizeof(array[0]);
  for(int i=0;i< arrSize;i++){
    sum+=array[i];
  }
  cout << "sum " << sum << endl;
  return 0;


}
