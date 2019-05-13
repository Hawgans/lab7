#pragma once
#include <string>

using namespace std;

class Human
{
protected:
	string name;
	string surname;
	int age;
public:
	Human(string n, string s, int a);
	virtual void Display();//обьявление виртуальной функции
	~Human()
	{}
};