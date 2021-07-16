#include <iostream>
#include <vector>
using namespace std;

int main() {
	int time {};
	int data {};
	vector <int> vdata {};
	cin >> time;
	for (int i {1}; i <= time; ++i){
		cin >> data;
		vdata.push_back(data);
	}
	int smalld {};
	smalld = vdata.at(0);
	for (auto vd: vdata){
		if (vd < smalld){
			smalld = vd;
		}
	}
	int larged {};
	larged = vdata.at(0);
	for (auto vd: vdata){
		if (vd > larged){
			larged = vd;
		}
	}
	cout << smalld << endl;
	cout << larged << endl;

}
