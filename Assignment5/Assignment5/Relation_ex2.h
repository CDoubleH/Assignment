#pragma once
#include<iostream>
using namespace std;

class Pencil
{
public:
	void write()
	{
		cout << "Something is written." << endl;
	}
};

class Student
{
private:
	Pencil p1;
public:
	void study()
	{
		p1.write();
	}
};