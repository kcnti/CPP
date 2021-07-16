#include <bits/stdc++.h>
using namespace std;

void derivative(int *Ainput, const int n){
	int Aoutput[n];
	for(int i=n;i>=0;i--){
		Aoutput[i] = Ainput[i] - Ainput[i-1];
		if(i==0)
			Aoutput[0] = 0;
	}
	for(auto i: Aoutput)
		cout << i << " ";
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		arr[i] = a;
	}
	derivative(arr, n);
}