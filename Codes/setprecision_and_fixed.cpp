// setprecision example
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main()
{
	double f = 3.14159;
	std::cout << std::setprecision(5) << f << '\n';
	std::cout << std::setprecision(9) << f << '\n';

	//it is used with setprecision and scientific.. 

	std::cout << std::fixed;
	std::cout << std::setprecision(5) << f << '\n';
	std::cout << std::setprecision(9) << f << '\n';
	return 0;
}