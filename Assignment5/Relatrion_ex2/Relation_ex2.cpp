#include "Relation_ex2.h"
#include<iostream>
using namespace std;

void Pencil::write()
{
	cout << "Something is written." << endl;
}

void Student::study()
{
	p1.write();
}

int main()
{
	Student s1;
	s1.study();
}