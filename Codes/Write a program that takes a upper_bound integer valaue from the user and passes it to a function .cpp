/*Write a program that takes a upper_bound integer valaue from the user and passes it to a function 
named as sumOfNumbers. Sum the odd and even numbers, respectively, from 1 to a given 
upper_bound. Also, compute the absolute difference between both of them and return it to the 
main function*/

#include<iostream>
using namespace std;
void upper_bound(int num)
{
	int temp1 = 0, temp2 = 0, difference;
	for (int i = 0; i <= num; i++)
	{
		if (i % 2 == 0)
			temp1 += i;
	}
	cout << "\naaaaaaaaaaaa" << temp1 << endl;
	for (int j = 1; j <= num; j++)
	{
		if (j % 2 != 0)
			temp2 += j;
	}
	cout << "\nbbbbbbbbbb" << temp2 << endl;
	difference = temp1 - temp2;
	cout << "the absolute difference is \n" << difference;
}
int main()
{
	int n;
	cout << "enter an integer \n";
	cin >> n;
	upper_bound(n);
	return 0;
}