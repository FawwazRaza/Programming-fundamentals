// programme to provide number of days of a month in respective year
#include<iostream>
int main()
{
	int m, y, f;
	std::cout << "enter month number";
	std::cin >> m;
	std::cout << "enter year number";
	std::cin >> y;
	if (y % 4 == 0)
	{
		f = 29;
	}
	else
	{
		f = 28;
	}
	switch (m)
	{
	case 1:
		std::cout << 31 << " days";
		break;
	case 2:
		std::cout << f << " days";
		break;
	case 3:
		std::cout << 31 << " days";
		break;
	case 4:
		std::cout << 30 << " days";
		break;
	case 5:
		std::cout << 31 << " days";
		break;
	case 6:
		std::cout << 30 << " days";
		break;
	case 7:
		std::cout << 31 << " days";
		break;
	case 8:
		std::cout << 31 << " days";
		break;
	case 9:
		std::cout << 30 << " days";
		break;
	case 10:
		std::cout << 31 << " days";
		break;
	case 11:
		std::cout << 30 << " days";
		break;
	case 12:
		std::cout << 31 << " days";
		break;
	default:
		std::cout << "enter correct number";
		break;
	}