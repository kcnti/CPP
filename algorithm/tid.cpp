#include<iostream>
using namespace std;

int main(){
	char arr[]={'N','W','S','E'};
	char a;
	int t=0;
	int n;
	cin>>n;
	if(n>=0 and n<=1000000){
	
		for(int m=0;m<n;m++){
			cin >> a;
			if(a=='A'){
			}else if(a=='B'){
			t=t-1;
			}else if(a=='C'){
			t=t+1;
			}else if(a=='D'){
				t=t+2;
			}
		}
		if(t>=4 or t<=-4){
			t=t%4;
		}
		if(t<0){
			t=4+t;
		}
	cout<<arr[t];
}
}

