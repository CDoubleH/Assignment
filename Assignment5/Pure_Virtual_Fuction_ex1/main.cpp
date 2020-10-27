#include "Pure_Virtual_Fuction_ex1.h"
#include<iostream>
using namespace std;

int main()
{
	int Character_type = 0;
	cout << "Select Your Character : (1.Magician 2.Knight)" << endl;
	cin >> Character_type;
	Character* ch1 = nullptr;
	if (Character_type == 1)
		ch1 = new Magician;
	else if (Character_type == 2)
		ch1 = new Knight;
	ch1->skill_1();
}