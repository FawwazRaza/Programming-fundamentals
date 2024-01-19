/*Inverse of a matrix is a matrix A is a matrix A-1 such that A x A-1 = I. Where I, is an 
identity matrix. You are required to write down a code that will take the input of an n*m 
matrix A and another m*n matrix B. Will tell if B is inverse of A or not. Use proper output 
statements to get the input of the matrices with the certain dimensions.
Hint: Try matrix multiplication*/

#include<iostream>
using namespace std;
int main()
{
	int i, j, n, k;
	float a[100][200], t, temp[100][200], b[100][200];
	cout << "Enter order of matrix-";
	cin >> n;
	cout << "Enter elements of matrix A" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cout << "Enter elements of matrix B" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> b[i][j];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << b[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
		{
			temp[i][j] = 0;
		}
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
			for (k = 0; k < n; ++k)
			{
				temp[i][j] += a[i][k] * b[k][j];
			}
	cout << endl << "multiplied Matrix is: " << endl;
	for (i = 0; i < n; ++i)
		for (j = 0; j < n; ++j)
		{
			cout << " " << temp[i][j];
			if (j == n - 1)
				cout << endl;
		}
	for (i = 0; i < n; i++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n; j < 2 * n; j++)
			{
				if (i == j - n)
					a[i][j] = 1;
				else
					a[i][j] = 0;
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = n; j < 2 * n; j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
		for (j = 0; j < n; j++)
		{
			if (temp[i][j] == a[i][j])
				cout << "same\n";
			else
				cout << "not\n";
		}
	}
	return 0;
}
