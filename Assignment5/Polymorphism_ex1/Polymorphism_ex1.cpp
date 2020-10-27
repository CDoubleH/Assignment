#include "Polymorphism_ex1.h"
#include<iostream>
using namespace std;

void Animal::Eat()
{
	cout << "Yum-yum" << endl;
}

void Bird::Eat()
{
	cout << "Bird is Eating." << endl;
}