#pragma once
#include <string>
#include "Human.h"

using namespace std;

class Student : public Human
{
protected:
	bool expelled;
	string university;
public:
	Student(string n, string s, int a, bool e, string u);
	void Display();//вирутальная функция в производном классе
	~Student()
	{}
};