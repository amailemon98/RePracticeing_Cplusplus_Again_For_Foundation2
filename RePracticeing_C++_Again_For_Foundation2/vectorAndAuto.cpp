#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

using namespace std;

int main() {
	//auto a = 10;
	//auto a1 = 'a';
	string a2 = "auto the auto";
	auto a1 = "auto the auto"; //auto에 문자열을 입력하면 const char * 형으로 받는다.
	const char* b2 = "auto the auto";

	//cout << a << endl;
	//cout << a1 << endl;
	//cout << a2 << endl;

	//cout << typeid(a).name() << endl;
	//cout << typeid(a1).name() << endl;
	//cout << typeid(a2).name() << endl;

	cout << a2 << endl; //auto the auto
	cout << b2 << endl;

	a2[0] = 'b';
	cout << a2 << endl; //buto the auto
	//a1[0] = 'b'; //const char * 는 값을 수정할 수 없다.
	//b2[0] = 'b'; //const char * 는 값을 수정할 수 없다.
}