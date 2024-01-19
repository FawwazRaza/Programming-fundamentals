#include<iostream>
int main()
{
	int num, v1 = 0, n, v2 = 0, count = 0;
	std::cout << "Enter Binary Number greator than 6 and smaller than 10 : ";
	std::cin >> num;
	do
	{
		n = num % 10;
		if (n > 1)
		{
			v2 = 1;
		}
		if (n == 1)
		{
			count++;
		}
		num = num / 10;
		v1++;
	} while (num > 0);
	if (v2 == 1)
	{
		std::cout << "Incorrect Input! this is not a Binary Number!";
	}
	else if (v1 < 6)
	{
		std::cout << "Digits are less than six." << std::endl;
	}
	else if (v1 > 10)
	{
		std::cout << "Digits are greater than 10." << std::endl;
	}
	else
	{
		std::cout << "Digits are greater than six and less than 10!" << std::endl << "
			Total no.of 1's are : " << count;
	}
	return 0;
}