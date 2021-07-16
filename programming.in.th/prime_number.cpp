#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPrime(int num){
	if(num%2 == 1){
		if(num%5 != 0)
			return true;
	}
	else{
		return false;
	}
}

int main(){
	isPrime(75);
	return 0;
}