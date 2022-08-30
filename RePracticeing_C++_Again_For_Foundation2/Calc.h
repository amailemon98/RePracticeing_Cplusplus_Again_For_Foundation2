#pragma once
#include<iostream>

class Calculator
{
public:
	~Calculator() {}
	Calculator();
	void Add(int x, int y);
	void Sub(int x, int y);
	void ShowResult();
private:
	int a;
	int b;
	int result;
};