#include <iostream>
#include "Word.h"
#include <conio.h>



int main()
{
	Word test("test", "bed 1");
	test.setNewTranslation("bed 2");
	test.setNewTranslation("bed 3");


	std::cout << test;




	_getch();
	return 0;
}