#pragma once
#define _CRT_SECURE_NO_WARNIGS

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {
	
	//std::string s;
	//getline(std::cin, s);

	//std::cout << s;

	//front(): 첫번째 요소
	//back(): 마지막 원소
	//begin(): 첫번째 위치
	//end(): 마지막 위치
	//push_back(): 마지막에 데이터 추가
	//pop_back(): 마지막에서 데이터 뽑기
	//size(): 원소의 개수
	//clear(): 비우기
	//resize(): 벡터의 사이즈 변경


	std::vector<int> v1 = { 1, 2, 3 };
	std::vector<std::pair<int, char>> v2;
	int a, b;
	char c, d;

	v1.push_back(5);
	v1.push_back(6);
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i];
	}
	std::cout << "\n";

	a = v1.front();
	b = v1.back();
	std::cout << "front:" << a << " back: " << b << "\n";
	v1.pop_back();
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i];
	}
	std::cout << "\n";
	
	v2.push_back(make_pair(1, 'a'));
	v2.push_back(make_pair(2, 'b'));
	v2.push_back(make_pair(3, 'c'));
	for (int i = 0; i < v2.size(); i++) {
		std::cout << "<" << v2[i].first << " " << v2[i].second << ">";
	}
	std::cout << "\n";

	a = v2.front().first;
	c = v2.front().second;
	b = v2.back().first;
	d = v2.back().second;
	std::cout << "front: <" << a << " " << c << ">\n";
	std::cout << "back: <" << b << " " << d << ">\n";
	v2.clear();
}