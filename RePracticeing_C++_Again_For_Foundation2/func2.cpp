#include <iostream>
using std::cout; 
using std::cin;

int Add(int &a, int &b) {
	
	cout << "값을 입력하세요" << '\n';
	cin >> a;
	cin >> b;

	a += b;

	return a;
}

int Sub(int &a, int &b) {
	cout << "값을 입력하세요" << '\n';
	cin >> a;
	cin >> b;

	a -= b;

	return a;
}

int main() {
	int a, b, start;
	cout << "더하기는 1, 빼기는 2를 입력해주세요" << '\n';
	cin >> start, '\n';
	if (start == 1) {
		cout << Add(a, b);
	}else if (start == 2) {
		cout << Sub(a, b);
	}
}