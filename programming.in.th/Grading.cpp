#include <iostream>
using namespace std;

int main() {
	int bo {};
	int mid {};
	int finalex {};
	cin >> bo;
	cin >> mid;
	cin >> finalex;
	int sum{};
	sum = bo+mid+finalex;
	if (sum >=80 && sum <=100){
		cout << "A";
	} else if (sum >= 75 && sum < 80) {
		cout << "B+";
	} else if (sum >= 70 && sum < 75) {
		cout << "B";
	} else if (sum >= 65 && sum < 70) {
		cout << "C+";
	} else if (sum >= 60 && sum < 65) {
		cout << "C";
	} else if (sum >= 55 && sum < 60) {
		cout << "D+";
	} else if (sum >= 50 && sum < 55) {
		cout << "D";
	} else {
		cout << "F";
	}

}
