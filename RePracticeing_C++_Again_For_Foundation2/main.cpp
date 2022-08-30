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
}
