/*#include <iostream>

int func1(int a, int b) {
	std::cin >> a, b;
	return a, b;
}
int func2(int &a, int &b) {
	std::cin >> a >> b; // 절대로 a, b 로 cin 값을 갖지 말자.
	//std::cout << "test1의 값은" << a << '\n';
	//std::cout << "test2의 값은" << b << '\n';
	return a, b; //return이 복수일 경우 끝에 있는 것만 반환한다.
}

int main() {
	int test1, test2;
	//std::cout << "값 두개를 입력해주세요." << '\n';
	//std::cout << func1(test1, test2); //초기화 되지 않은 지역변수라 실행이 안됨

	std::cout << "다른 값 두개를 입력해주세요." << '\n';
	std::cout << func2(test1, test2) << '\n';

}*/