#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double first;
	double second;
	double result;
	cin >> first >> second;
	result = pow(first, 2) + pow(second, 2);
	cout << fixed << setprecision(6);
	cout << sqrt(result);
}
