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

int main()
{
	Computer computer1;
	Washer washer1;
	computer1.use_electricity();
	computer1.Calculate();
	washer1.use_electricity();
	washer1.Wash();
}