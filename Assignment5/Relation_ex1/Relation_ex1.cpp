#include "Relation_ex1.h"
#include<iostream>
using namespace std;

void Pencil::write()
{
	cout << "Something is written." << endl;
}

void Student::study()
{
	write();
}