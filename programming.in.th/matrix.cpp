// matrix with 2 dimension
#include <iostream>
using namespace std;

int main(){
	int d1, d2;
	cin >> d1 >> d2;
	int dimension[d1][d2];
	int dimension2[d1][d2];
	for(int i = 0;i < d1; i++)
	{
		for(int j = 0;j < d2; j++)
		{
			cin >> dimension[i][j];
		}
	}
	for(int i = 0;i < d1; i++)
	{
		for(int j = 0;j < d2; j++)
		{
			cin >> dimension2[i][j];
		}
	}
//	cout << "Printing: " << dimension[1][1] << endl;
// 	cout << "Result after addition: " << endl;
	for(int i = 0; i < d1; i++)
	{
		for(int j = 0; j< d2; j++)
		{
			cout << dimension[i][j] + dimension2[i][j] << " ";
		}
		cout << endl;
	}
}



// void bruh(){
// 	int d1, d2, elem;
// 	int member_elm;
// 	cin >> d1 >> d2;
// 	elem = d1*d2;
// 	vector <int> mem;
// 	vector <int> mem2;
// 	for(int i = 0; i < elem; i++){
// 		cin >> member_elm;
// 		mem.push_back(member_elm);
// 	}
// 	for(int i = 0; i < elem; i++){
// 		cin >> member_elm;
// 		mem2.push_back(member_elm);
// 	}
// 	// cout << "Printing d1: " << endl;
// 	// for(auto v: mem)
// 	// 	cout << v << " "; //18

// 	for(int i = 0; i < elem; i++){
// 		cout << mem.at(i) + mem2.at(i) << " ";
// 		if(i%2 != 0){
// 			cout << endl;
// 		}
// 	}
// }
