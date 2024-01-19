/*Write a program to print out all Armstrong numbers between 1 and 600. If sum of cubes 
of each digit of the number is equal to the number itself, then the number is called an 
Armstrong number.
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )*/

#include<iostream>
using namespace std;
int main()
{
	int num = 600;
	for (int i = 2; i < 10; i++)
		cout << i;
	for (int i = 1; i <= num; ++i)
	{
		int j, sum1 = 0, sum2 = 0, sum = 0;
		j = i;
		while (j >= 10)
		{
			sum = j % 10;
			sum = sum * sum * sum;
			sum1 = sum1 + sum;
			j = j / 10;
		}
		sum1 = sum1 + (j * j * j);
		if (sum1 == i)
			cout << i;

		else
			cout << " ";

	}
	system("pause");
}


/*Write a program that has an array of 100 integers. Populate this array with numbers 
between 100-10000 both included. Then print out all Armstrong numbers in this array. 
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )*/
#include<iostream>
using namespace std;
int main()
{
	long long int b[100], a[100] = { 1,407,153, 370, 371, 407, 1634, 8208, 9474,
   5474,75275,75275,752,772,8767,6796797,85876,76786,76786578,786786,786,76,76,7687,7845,2452,54
   354,68,6545,524,5637,4534,786,543,12354,56354,453452,4545,54354,543453,54354,543,535335,3653,6
   ,12134,3,23,563,1,356,3,563,56,356,356,3,56 };
	for (int i = 1; i <= 100; ++i)
	{
		int j, sum1 = 0, sum2 = 0, sum = 0;
		a[j] = a[i];
		if (a[j] < 1000)
		{
			while (a[j] >= 10)
			{
				sum = a[j] % 10;
				sum = sum * sum * sum;
				sum1 = sum1 + sum;
				a[j] = a[j] / 10;
			}
		}
		if (a[j] > 1000)
		{
			while (a[j] >= 1000)
			{
				sum = a[j] % 100;
				sum = sum * sum * sum * sum;
				sum1 = sum1 + sum;
				a[j] = a[j] / 100;
			}
		}
		sum1 = sum1 + (a[j] * a[j] * a[j]);
		if (sum1 == a[i])
			cout << a[i];
		else
			cout << " ";
	}
	system("pause");
}