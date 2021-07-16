#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  int array[n];
  for (int i=0;i<n;i++){
    int a;
    cin >> a;
    array[a]++;
  }
  for(int i=0;i<n;i++){
    while(array[i]>0){
      printf("%dn",i);
      array[i]--;
    }
  }

return 0;
}
