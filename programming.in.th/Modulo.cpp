#include <iostream>
using namespace std;

int main(){
	int numbers[42] = {};
	for (int i {}; i < 10; ++i){
		int num;
		cin >> num;
		int index = num%42;
//		cout << "This is index " << index << endl;
		numbers[index] = 1; // Change value of that index to 1
//		cout << endl;
	}

	int ans {};
	for (int i {}; i < 42; ++i){
		if(numbers[i] == 1){ // check if value in that index is 1 to increase number of answer
			++ans;
		}
	}
	cout << ans << endl;
	return 0;
}
