#include"Constructor_and_Destructor_ex1.h"
#include<iostream>
using namespace std;

//부모 클래스 AClass
Aclass::Aclass()
{
	num = 0;
	cout << "Aclass(0) is Called." << endl;
}
Aclass::Aclass(int a)
{
	num = a;
	cout << "Aclass(" << num << ") is Called." << endl;
}
Aclass::~Aclass()
{
	cout << "~Aclass(" << num << ") is Called." << endl;
}
//자식 클래스 BClass와 CClass
Bclass::Bclass()
{
	num = 0;
	cout << "Bclass(0) is Called." << endl;
}
Bclass::Bclass(int b)
{
	num = b;
	cout << "Bclass(" << num << ") is Called." << endl;
}
Bclass::~Bclass()
{
	cout << "~Bclass(" << num << ") is Called." << endl;
}

Cclass::Cclass()
{
	num = 0;
	cout << "Cclass(0) is Called." << endl;
}
Cclass::Cclass(int c) : Aclass(c)
{
	num = c;
	cout << "Cclass(" << num << ") is Called." << endl;
}
Cclass::~Cclass()
{
	cout << "~Cclass(" << num << ") is Called." << endl;
}