#include <iostream>
#include <string>
#include "Human.h"
#include "Student.h"
#include "Boss.h"

using namespace std;

int main()
{
	Human* p;
	Human human("Denis", "Ion", 18);
	p = &human;
	p->Display();//вызов функции вывода для класса Human

	Student student("Denis", "Ion", 20, 0, "MIREA");
	p = &student;
	p->Display();//вызов функции вывода для класса Student

	Boss boss("Denis", "Ion", 36, 1234000, "MTS");
	p = &boss;
	p->Display();//вызов функции вывода для класса Boss

}