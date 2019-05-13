#include <iostream>
#include <string>
#include "Human.h"
#include "Student.h"
#include "Boss.h"

//******************************************class Human****************************************************
Human::Human(string n, string s, int a)
{
	name = n;
	surname = s;
	age = a;
}

void Human::Display()//функция вывода для класса Human
{
	cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl << endl;
}

//******************************************class Student***************************************************
Student::Student(string n, string s, int a, bool e, string u)
	:Human(n, s, a)
{
	expelled = e;
	university = u;
}

void Student::Display()//функция вывода для класса Student
{
	cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
	cout << "Expelled satus: " << expelled << "\nUniversity: " << university << endl << endl;
}

//*******************************************class Boss*******************************************************
Boss::Boss(string n, string s, int a, int p, string c)
	:Human(n, s, a)
{
	pay = p;
	company = c;
}

void Boss::Display()//функция вывода для класса Boss
{
	cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
	cout << "The salary of the Director: " << pay << "\nCompany name: " << company << endl << endl;
}