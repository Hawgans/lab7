#pragma once
#include "Human.h"

class Boss : public Human
{
protected:
	int pay;
	string company;
public:
	Boss(string n, string s, int a, int p, string c);
	void Display();//вирутальная функция в производном классе
	~Boss()
	{}
};