#include"Pointer_to_Object_ex1.h"

int main()
{
	Animal* a1 = new Animal;
	Animal* a2 = new Bird;
	Animal* a3 = new Eagle;

	a1->Eat();
	a2->Eat();
	a3->Eat();

	return 0;
}