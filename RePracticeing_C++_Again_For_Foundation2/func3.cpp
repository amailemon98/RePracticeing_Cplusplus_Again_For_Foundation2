#include <iostream>

void funcPrint() {
	std::cout << "������ ���� �Է����ּ���." << '\n';
}

void paraPrint(int &x) {
	std::cout << "���� �Ű����� �Լ��� ������ �� : " << '\n';
	std::cin >> x;
	std::cout << "�Ű������� ���� ���� �� : " << x << '\n';
}

void paraPrint(int &x, double &y) {
	std::cout << "���� �Ű����� �Լ��� ������ �� : " << '\n';
	std::cin >> x >> y;
	std::cout << "�Ű����� X�� ���� : " << x << '\n';
	std::cout << "�Ű����� y�� ���� : " << y << '\n';
}

int main() {
	int para1, para2;
	double para3;
	funcPrint();
	paraPrint(para1);
	paraPrint(para2, para3);
}
