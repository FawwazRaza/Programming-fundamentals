#include <iostream>
int main()
{
	for (int i = 10; i <= 9; i++)
		std::cout << i << " ";
	std::cout << std::endl;




	for (int i = 9; i >= 10; i--)
		std::cout << i << " ";
	std::cout << std::endl;




	for (int i = 10; i <= 10; i++)	//Line 1
		std::cout << i << " ";	//Line 2
	std::cout << std::endl;			//Line 3



	int i;
	for (i = 1; i <= 10; i++);	//Line 1
	std::cout << i << " ";		   //Line 2
	std::cout << std::endl;			  //Line 3



	for (int i = 1; ; i++)
		std::cout << i << " ";
	std::cout << std::endl;



	return 0;
}
