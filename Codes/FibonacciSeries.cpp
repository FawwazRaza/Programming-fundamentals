#include <iostream>
int main()
{
	//Declare variables
	int previous1, previous2, current;
	int counter, nthFibonacci;
	std::cout << "Enter the first two Fibonacci "
		<< "numbers: ";
	std::cin >> previous1 >> previous2;
	std::cout << std::endl;

	std::cout << "The first two Fibonacci "
		<< "numbers are "
		<< previous1 << " and "
		<< previous2 << std::endl;

	std::cout << "Enter the position of the "
		<< "desired Fibonacci number: ";
	std::cin >> nthFibonacci;
	std::cout << std::endl;

	if (nthFibonacci == 1)
		current = previous1;
	else if (nthFibonacci == 2)
		current = previous2;
	else
	{
		counter = 3;
		while (counter <= nthFibonacci)
		{
			current = previous2 + previous1;
			previous1 = previous2;
			previous2 = current;

			counter++;
		}//end while
	}//end else
	std::cout << "The Fibonacci number at " << "position " << nthFibonacci
		<< " is " << current << std::endl;
	return 0;
} //end main

