﻿#include "Overriding_ex1.h"

#include <iostream>
using namespace std;

void Electronics::use_electricity()
{
	cout << "100W Electricity is used." << endl;
}

void Computer::use_electricity()
{
	cout << "400W Electricity is used." << endl;
}

void Washer::use_electricity()
{
	cout << "300W Electricity is used." << endl;
}
