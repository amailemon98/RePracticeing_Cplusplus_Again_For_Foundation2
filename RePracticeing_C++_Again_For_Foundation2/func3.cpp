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
	int para1, para2;
	double para3;
	funcPrint();
	std::cin >> para1;
	std::cin >> para2 >> para3;
	paraPrint(para1);
	paraPrint(para2, para3);
}