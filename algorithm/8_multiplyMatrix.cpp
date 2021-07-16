#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int fmatrix[n][m];
  int smatrix[m][n];
  int finalmat[n][n];
  for(int i=0; i<n;i++){
    for(int j=0; j<m;j++){
      cout << "First matrix at pos: " << i << ", " << j << " : " ;
      cin >> fmatrix[i][j];
    }
  }
  for(int i=0; i<m;i++){
     for(int j=0; j<n;j++){
      cout << "Second matrix at pos: " << i << ", " << j << " : ";
      cin >> smatrix[i][j];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n;j++){
      finalmat[i][j] = fmatrix[i][j] * smatrix[i][j];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n;j++){
      cout << finalmat[i][j] << " ";
    }
    cout << endl;
  }

  


  return 0;
}
