//Write a Function that prints the day number of the year, given the date in the form month - dayyear.For example, if the input is 1 - 1 - 2006, the day number is 1; if the input is 12 - 25 - 2006, the
//day number is 359. The program should check for a leap year.A year is a leap year if it is
//divisible by 4, but not divisible by 100. For example, 1992 and 2008 are divisible by 4, but not
//by 100. A year that is divisible by 100 is a leap year if it is also divisible by 400. For example,
//1600 and 2000 are divisible by 400. However, 1800 is not a leap year because 1800 is not
//divisible by 400.


#include <iostream>
using namespace std;
bool leap(int year)
{
	if (!(year % 400) && !(year % 100))
	{
		return true;
	}
	else if (year % 100 && !(year % 4))
	{
		return true;
	}
	return false;
}
int tempday(int mont, int day, bool l)
{
	int num = day, i = 1;
	while (i < mont)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			num += 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			num += 30;
			break;
		}
		case 2:
		{
			if (l)
			{
				num += 29;
			}
			else
			{
				num += 28;
			}
			break;
		}
		}
		i++;
	}
	return num;
}
void lyear(int month, int day, int year)
{
	bool l = leap(year);
	cout << "\nNumbers of day = " << tempday(month, day, l) << endl;
	if (l)
	{
		cout << "this is a leap year" << endl;
	}
	else
	{
		cout << "this is not a leap year" << endl;
	}
}
int main()
{
	int m, d, y;
	cout << "Enter the month: ";
	cin >> m;
	cout << "Enter the day: ";
	cin >> d;
	cout << "Enter the year: ";
	cin >> y;
	lyear(m, d, y);
	system("pause");
}