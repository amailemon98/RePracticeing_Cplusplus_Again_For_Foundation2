#include <iostream>

void funcPrint() {
	std::cout << "�Լ��� ȣ���Ͽ����ϴ�." << '\n';
}

void paraPrint(int x) {
	std::cout << "�Ű������� ���� ���� �� : " << x << '\n';
}

void paraPrint(int x, double y) {
	std::cout << "�Ű����� X�� ���� : " << x << '\n';
	std::cout << "�Ű����� y�� ���� : " << y << '\n';
}

int main() {
	funcPrint();
	paraPrint(5);
	paraPrint(10, 3.13);
}