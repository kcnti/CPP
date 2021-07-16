#include <iostream>

int main() {
	int a,b;
	std::cin >> a >> b;
	(a>b) ? std::cout << a-b << std::endl : std::cout << a+b << std::endl;
}