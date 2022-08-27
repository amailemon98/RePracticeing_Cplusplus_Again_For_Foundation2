/*#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {
	string lines = "hello,my,name,is";
	size_t previous = 0, current;
	current = lines.find(',');

	while (current != string::npos) {
		string substring = lines.substr(previous, current - previous);
		cout << substring << " ";
		previous = current + 1;
		current = lines.find(',', previous);
	}
	cout << lines.substr(previous, current - previous);
	return 0;
}*/