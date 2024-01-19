
/*Write a function that displays at the left margin of the screen a solid square of asterisks whose 
side is specified in integer parameter side*/

#include<iostream>
using namespace std;
void square(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	int num;
	cout << "please enter the number " << endl;
	cin >> num;
	square(num);
	return 0;
}
