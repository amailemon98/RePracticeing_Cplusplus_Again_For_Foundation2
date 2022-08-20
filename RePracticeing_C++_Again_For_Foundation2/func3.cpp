#include <iostream>

void funcPrint() {
	std::cout << "전달할 값을 입력해주세요." << '\n';
}

void paraPrint(int &x) {
	std::cout << "단일 매개변수 함수에 전달할 값 : " << '\n';
	std::cin >> x;
	std::cout << "매개변수에 전달 받은 값 : " << x << '\n';
}

void paraPrint(int &x, double &y) {
	std::cout << "이중 매개변수 함수에 전달할 값 : " << '\n';
	std::cin >> x >> y;
	std::cout << "매개변수 X의 값은 : " << x << '\n';
	std::cout << "매개변수 y의 값은 : " << y << '\n';
}

int main() {
	int para1, para2;
	double para3;
	funcPrint();
	paraPrint(para1);
	paraPrint(para2, para3);
}
