#include"Pointer_to_Object_ex2.h"
#include<iostream>
using namespace std;
void Animal::Eat()
{
	cout << "Yum-yum" << endl;
}

void Bird::Fly()
{
	cout << "Bird is Flying." << endl;
}

void Eagle::Hunt()
{
	cout << "Eagle is hunting" << endl;
}

int main()
{
	Bird* a1 = new Eagle;

	a1->Eat();
	a1->Fly();
//	a1->Hunt();//컴파일 에러

	return 0;
}