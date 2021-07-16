#include <iostream>
#include <cctype> 
#include <cstring>
#include <string>
using namespace std;

int main(){
	string new_char;
	getline(cin, new_char);
	bool upper = false, lower = false;
	for (char c: new_char){
		if(isupper(c)){
			upper = true;
		} else if (islower(c)){
			lower = true;
		}
	}
	if (upper && lower) {
		cout << "Mix" << endl;
	} else if (upper) {
		cout << "All Capital Letter" << endl;
	} else {
		cout << "All Small Letter" << endl;
	}
}
