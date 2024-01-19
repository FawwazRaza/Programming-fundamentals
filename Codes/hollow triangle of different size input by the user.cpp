/*Convert the above given program to populate the desired pattern in a 2-D array and then print the array to 
display the pattern. The array will be 20*20. So a shape of max 20*20 can be populated. Write down 
3 | P a g e
appropriate checks on the input. It must be a menu driven program and will not end until the user 
selects to exit.
*/

#include<iostream>
using namespace std;
int main()
{
	int sh, ty, fb, t = 0;
	char a[20][20];
	cout << "enter 2 for exit";
	cin >> t;
	while (t != 2)
	{
		cout << "for shape square enter 1 \nfor shape triangle nter 2 \nfor shape rhombus 
			enter 3 \nfor shape rectangle enter 4 \nfor shape parallelogram enter 5 \n";
			cin >> sh;
		cout << "for type hollow enter 1 \n for type filled enter 2 \n ";
		cin >> ty;
		cout << "for forward enter 1 \n for backward enter 2 \n";
		cin >> fb;
		cout << "enter 2 for exit";
		cin >> t;
		if (sh == 1 && ty == 2)
		{
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 20; j++)
				{
					a[i][j] = '*';
					cout << a[i][j];
				}
				cout << endl;
			}
		}
		else if (sh == 1 && ty == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 20; j++)
				{
					if (i == 1 || i == 20 || j == 1 || j == 20)
					{
						a[i][j] = '*';
						cout << a[i][j];
					}
					else
					{
						a[i][j] = ' ';
						cout << a[i][j];
					}
				}
				cout << endl;
			}
		}
		else if (sh == 4 && ty == 2)
		{
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 60; j++)
				{
					a[i][j] = '*';
					cout << a[i][j];
				}
				cout << endl;
			}
		}
		else if (sh == 4 && ty == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 60; j++)
				{
					if (i == 1 || i == 20 || j == 1 || j == 60)
					{
						a[i][j] = '*';
						cout << a[i][j];
					}
					else
					{
						a[i][j] = ' ';
						cout << a[i][j];
					}
				}
				cout << endl;
			}
		}
		else if (sh == 2 && ty == 2)
		{
			for (int i = 1, j = 0; i <= 20; ++i, j = 0)
			{
				for (int s = 1; s <= 20 - i; ++s)
				{
					a[i][s] = ' ';
					cout << a[i][s];
				}
				while (j != 2 * i - 1)
				{
					a[i][j] = '*';
					cout << a[i][j];
					++j;
				}
				cout << endl;
			}
		}
		else if (sh == 2 && ty == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 0; j <= (20 - i); j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int k = 0; k <= i * 2 - 1; k++)
				{
					if (k == 0 || k == i * 2 - 1)
					{
						a[i][k] = '*';
						cout << a[i][k];
					}
					else if (i == 20)
					{
						a[i][k] = '*';
						cout << a[i][k];
					}
					else
					{
						a[i][k] = ' ';
						cout << a[i][k];
					}
				}
				cout << endl;
			}
		}
		else if (sh == 3 && ty == 2 && fb == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 20 - i; j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int k = 1; k <= 20; k++)
				{
					a[i][k] = '*';
					cout << a[i][k];
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (sh == 3 && ty == 2 && fb == 2)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= i; j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int k = 1; k <= 20; k++)
				{
					a[i][k] = '*';
					cout << a[i][k];
				}
				cout << endl;
			}
		}
		else if (sh == 3 && ty == 1 && fb == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 20 - i; j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int j = 1; j <= 20; j++)
				{
					if (i == 1 || i == 20 || j == 1 || j == 20)
					{
						a[i][j] = '*';
						cout << a[i][j];
					}
					else
					{
						a[i][j] = ' ';
						cout << a[i][j];
					}
				}
				cout << endl;
			}
		}
		else if (sh == 3 && ty == 1 && fb == 2)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 20 - i; j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int j = 1; j <= 20; j++)
				{
					if (i == 1 || i == 20 || j == 1 || j == 20)
					{
						a[i][j] = '*';
						cout << a[i][j];
					}
					else
					{
						a[i][j] = ' ';
						cout << a[i][j];
					}
				}
				cout << endl;
			}
		}
		else if (sh == 5 && ty == 2 && fb == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 60 - i; j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int k = 1; k <= 60; k++)
				{
					a[i][k] = '*';
					cout << a[i][k];
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (sh == 5 && ty == 1 && fb == 1)
		{
			for (int i = 1; i <= 20; i++)
			{
				for (int j = 1; j <= 60 - i; j++)
				{
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int j = 1; j <= 60; j++) {
					if (i == 1 || i == 20 || j == 1 || j == 60) {
						a[i][j] = '*';
						cout << a[i][j];
					}
					else {
						a[i][j] = ' ';
						cout << a[i][j];
					}
				}
				cout << endl;
			}
		}
		else if (sh == 5 && ty == 2 && fb == 2) {
			for (int i = 1; i <= 20; i++) {
				for (int j = 1; j <= 60 - i; j++) {
					a[i][j] = ' ';
					cout << a[i][j];
				}
				for (int k = 1; k <= 60; k++) {
					a[i][k] = '*';
					cout << a[i][k];
				}
				cout << endl;
			}
			cout << endl;
		}
	}
}
