#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

using namespace std;

int main() {
	//auto a = 10;
	//auto a1 = 'a';
	string a2 = "auto the auto";
	auto a1 = "auto the auto"; //auto�� ���ڿ��� �Է��ϸ� const char * ������ �޴´�.
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
	//a1[0] = 'b'; //const char * �� ���� ������ �� ����.
	//b2[0] = 'b'; //const char * �� ���� ������ �� ����.
}