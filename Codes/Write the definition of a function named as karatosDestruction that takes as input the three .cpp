/*Write the definition of a function named as karatosDestruction that takes as input the three 
numbers. The function returns true if the first number to the power of the second number equals 
the third number; otherwise, it returns false. Assume that the three numbers are of type double. If 
false is returned, prompt the user to again provide new values otherwise terminate the program*/

#include<iostream>
using namespace std;
bool karatosDestruction(double n1, double n2, double n3);
int main()
{
	int num1, num2, num3;
	cout << "ener 1st number \n";
	cin >> num1;
	cout << "ener 2nd number \n";
	cin >> num2;
	cout << "ener 3rd number \n";
	cin >> num3;
	cout << karatosDestruction(num1, num2, num3);
	return 0;
}
bool karatosDestruction(double n1, double n2, double n3)
{
	int temp = 1;
	for (int i = 1; i <= n2; i++)
	{
		temp *= n1;
	}
	if (temp == n3)
	{
		cout << "correct" << endl;
		return true;
	}
	else if (temp != n3)
	{
		cout << "!!!!!!!!!!!!!!!!!!" << endl;
		return main();
	}
}