#include <iostream>
using std::cout; 
using std::cin;

int Add(int &a, int &b) {
	
	cout << "���� �Է��ϼ���" << '\n';
	cin >> a;
	cin >> b;

	a += b;

	return a;
}

int Sub(int &a, int &b) {
	cout << "���� �Է��ϼ���" << '\n';
	cin >> a;
	cin >> b;

	a -= b;

	return a;
}

int main() {
	int a, b, start;
	cout << "���ϱ�� 1, ����� 2�� �Է����ּ���" << '\n';
	cin >> start, '\n';
	if (start == 1) {
		cout << Add(a, b);
	}else if (start == 2) {
		cout << Sub(a, b);
	}
}