#include <iostream>

void funcPrint() {
	std::cout << "함수를 호출하였습니다." << '\n';
}

void paraPrint(int x) {
	std::cout << "매개변수에 전달 받은 값 : " << x << '\n';
}

void paraPrint(int x, double y) {
	std::cout << "매개변수 X의 값은 : " << x << '\n';
	std::cout << "매개변수 y의 값은 : " << y << '\n';
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