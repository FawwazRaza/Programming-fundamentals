
/*Create a menu based program to print different shapes. Take appropriate inputs from the user according 
to the shape.:  Filled/Hollow Square  Filled/Hollow Triangle  Filled/Hollow Rhombus  Filled/Hollow Rectangle  Filled/Hollow Parallelogram
 Exit
Your program should provide user with proper menu to select shape and type of shape and the menu 
should provide forward and backward options for the rhombus or parallelogram to tilt. Rhombus is a 
tilted square and Parallelogram is a tilted rectangle. In Rhombus add a space after every * to make it look 
beautiful.
 * * * * * *
 * * * OR * * *
* * * * * *
 ******* *******
 ******* OR *******
******* ******* 
*/
#include<iostream>
using namespace std;
int main()
{
	int sh, ty, fb;
	cout << "for shape square enter 1 \nfor shape triangle nter 2 \nfor shape rhombus enter 3 
		\nfor shape rectangle enter 4 \nfor shape parallelogram enter 5 \n";
		cin >> sh;
	cout << "for type hollow enter 1 \n for type filled enter 2 \n ";
	cin >> ty;
	cout << "for forward enter 1 \n for backward enter 2 \n";
	cin >> fb;
	if (sh == 1 && ty == 2)
	{
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= 5; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else if (sh == 1 && ty == 1)
	{
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= 5; j++)
			{
				if (i == 1 || i == 3 || j == 1 || j == 5)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else if (sh == 4 && ty == 2)
	{
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else if (sh == 4 && ty == 1)
	{
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (i == 1 || i == 3 || j == 1 || j == 9)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else if (sh == 2 && ty == 2)
	{
		for (int i = 1, j = 0; i <= 5; ++i, j = 0)
		{
			for (int s = 1; s <= 5 - i; ++s)
			{
				cout << " ";
			}
			while (j != 2 * i - 1)
			{
				cout << "* ";
				++j;
			}
			cout << endl;
		}
	}
	else if (sh == 2 && ty == 1)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= (5 - i); j++)
			{
				cout << " ";
			}
			for (int k = 1; k <= i * 2 - 1; k++)
			{
				if (k == 1 || k == i * 2 - 1)
				{
					cout << "*";
				}
				else if (i == 5)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (sh == 3 && ty == 2 && fb == 1)
	{
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= 3; j++)
			{
				if (i == 1 && j == 1)
				{
					cout << " ";
				}
				if (i == 2 && j == 1)
				{
					cout << " ";
				}
				cout << "* ";
			}
			cout << endl;
		}
	}
	else if (sh == 3 && ty == 2 && fb == 2)
	{
	}
	else if (sh == 3 && ty == 1 && fb == 1)
	{
		for (int i = 1; i <= 3; i++)
		{
			for (int j = 1; j <= 3 - i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 3; j++)
			{
				if (i == 1 || i == 3 || j == 1 || j == 3)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else if (sh == 3 && ty == 1 && fb == 2)
	{
	}
	else if (sh == 5 && ty == 2 && fb == 1)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j < i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 8; j++)
			{
				if (i == 1 || i == 5 || j == 1 || j == 8)
				{
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (sh == 5 && ty == 1 && fb == 1)
	{
		for (int i = 1; i <= 7; i++)
		{
			for (int j = 1; j <= 7 - i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 7; j++)
			{
				if (i == 1 || i == 7 || j == 1 || j == 7)
					cout << "*";
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else if (sh == 5 && ty == 2 && fb == 2)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= 5 - i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 9; j++)
			{
				if (i == 1 || i == 5 || j == 1 || j == 9)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (sh == 5 && ty == 1 && fb == 2)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j < i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 12; j++)
			{
				if (i == 1 || i == 5 || j == 1 || j == 12)
				{
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
