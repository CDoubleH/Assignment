#include "Inheritance_Basic_ex1.h"
#include <iostream>
using namespace std;

void Electronics::use_electricity()
{
	cout << "100W Electricity is used." << endl;
}

void Computer::Calculate()
{
	cout << "Something is Calculated." << endl;
}

void Washer::Wash()
{
	cout << "Clothes are Washed." << endl;
}