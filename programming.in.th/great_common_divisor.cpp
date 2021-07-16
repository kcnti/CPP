#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	for(int i=1000; i > 0;i--){
		if(i != 0){
			if(a%i == 0 && b%i == 0){
				cout << i << endl;
				return 0;
			}
    }
  }
}

