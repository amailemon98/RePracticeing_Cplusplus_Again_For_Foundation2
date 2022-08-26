#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	
	std::string s;
	getline(std::cin, s);

	std::cout << s;
	std::string t;
	getline(std::cin, t);
	std::cout << t;
}