#include "Calc.h"

Calculator::Calculator() {
	a = 0;
	b = 0;
	result = 0;
	std::cout << "���� ����ϱ�" << '\n';
}
void Calculator::Add(int x, int y) {
	a = x;
	b = y;
	result = a + b;
}
void Calculator::Sub(int x, int y) {
	a = x;
	b = y;
	result = a - b;
}
void Calculator::ShowResult() {
	std::cout << "result: " << result << '\n';
}