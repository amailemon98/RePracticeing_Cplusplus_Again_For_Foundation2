#include <iostream>
using std::cout; 
using std::cin;

int func1(int &_a, int &_b) {
	int a = _a;
	int b = _b;

	cin >> a;
	cin >> b;

	int c;
	c = a + b;
	cout << c << '\n';

	return 0;
}
int main() {
	int a, b;
	func1(a, b);
}