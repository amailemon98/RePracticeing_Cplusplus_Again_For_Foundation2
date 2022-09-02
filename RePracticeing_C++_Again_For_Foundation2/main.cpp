/*#include <iostream>
#include "Myfunc.h"
int main() {
	int c = add(10, 20);
	std::cout << "10 + 20 = " << c << '\n';
	return 0;
}*/
#include <iostream>
#include "Calc.h"

int main() {
	Calculator c;
	c.Add(1, 2);
	c.ShowResult();
	c.Sub(6, 2);
	c.ShowResult();
	//헤더 Calc.h 를 통해 Calc.cpp과 통할 수 있다.
}
