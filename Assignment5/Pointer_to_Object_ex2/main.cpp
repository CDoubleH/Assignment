#include"Pointer_to_Object_ex2.h"

int main()
{
	Bird* a1 = new Eagle;

	a1->Eat();
	a1->Fly();
	//	a1->Hunt();//������ ����

	return 0;
}