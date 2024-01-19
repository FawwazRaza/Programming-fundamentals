/*An integer is said to be a perfect number if the sum of its divisors, including1 (but not the 
number itself), is equal to the number. For example, 6 is a perfect number, because 6=1 +2+ 3. 
Write a function is Perfect that determines whether parameter number is a perfect number. Use 
this function in a program that determines and prints all the perfect numbers between 1and 1000. 
Print the divisors of each perfect number to confirm that the number is indeed perfect. 
a) Write a function that takes an integer value and returns the number with its digits 
reversed. For example, given the number7631, the function should return 1367.
b) Write a function multiple that determines for a pair of integers whether the second is a 
multiple of the first. The function should take two integer arguments and return true if the 
second is a multiple of the first, false otherwise. Use this function in a program that 
inputs a series of pairs of integers. (Hint: Call this function within do-while loop). 
c) Write a program that has a function that takes 3 alphabet characters and find their 
preceding alphabets. For example if user entered a, m, y it will show b, n, z. Take input in 
main, pass values to function and show the output in main.
d) Write a program that has a function “Upper_to_lower”. It will take 4 alphabets as 
parameters in uppercase and will change them to lowercase. Display the changed values 
in main.*/

#include<iostream>
using namespace std;
bool multiple(int n1, int n2)
{
	if (n1 % n2 == 0)
	{
		cout << "yes";
		return true;
	}
	else
	{
		return false;
	}
}
char Upper_to_lower2(int n4)
{
	char ch4 = n4 + 32;
	cout << ch4 << endl;
	return 0;
}
char Upper_to_lower(int n1, int n2, int n3)
{
	char ch1, ch2, ch3;
	ch1 = n1 + 32; ch2 = n2 + 32; ch3 = n3 + 32;
	cout << ch1 << endl << ch2 << endl << ch3 << endl;
	return 0;
}
char preceding(int n4, int n5, int n6)
{
	n4++; n5++; n6++;
	char ch1, ch2, ch3;
	ch1 = n4; ch2 = n5; ch3 = n6;
	cout << ch1 << endl << ch2 << endl << ch3 << endl;
	return 0;
}
int reverse(long long int n2)
{
	int temp = 0, r;
	while (n2 != 0)
	{
		r = n2 % 10;
		temp = temp * 10 + r;
		n2 /= 10;
	}
	cout << endl;
	return temp;
}
void is_perfect(long long int n1)
{
	long long int temp = 0;
	for (long long int i = 1; i < n1; i++)
	{
		if (n1 % i == 0)
		{
			temp += i;
		}
	}
	if (temp == n1)
	{
		cout << "number is perfect \n";
	}
	else
	{
		cout << "number is not perfect \n";
	}
}
int main()
{
	char ch1, ch2, ch3, ch4;
	int temp, n4, n5, n6, n7;
	long long int num1, num2;
	cout << "if you want a perfect number enter 1\nif you want a reverse number enter 2\nif you want a 
		multiple number enter 3\nif you want a preceding characters enter 4\nif you want a upper to lower case
		characters enter 5\n";
		cin >> temp;
	switch (temp)
	{
	case 1:
	{
		cout << "enter a number\n";
		cin >> num1;
		is_perfect(num1);
	}
	break;
	case 2:
	{
		cout << "enter a number\n";
		cin >> num2;
		cout << reverse(num2);
	}
	break;
	case 3:
	{
		do
		{
			cout << "enter a number 1\n";
			cin >> num1;
			cout << "enter a number 2\n";
			cin >> num2;
			cout << multiple(num1, num2);
		} while (true);
		return 0;
	}
	break;
	case 4:
	{
		cout << "enter character 1\n";
		cin >> ch1;
		cout << "enter character 2\n";
		cin >> ch2;
		cout << "enter character 3\n";
		cin >> ch3;
		n4 = ch1;
		n5 = ch2;
		n6 = ch3;
		cout << preceding(n4, n5, n6);
		return 0;
	}
	break;
	case 5:
	{
		cout << "enter character 1\n";
		cin >> ch1;
		cout << "enter character 2\n";
		cin >> ch2;
		cout << "enter character 3\n";
		cin >> ch3;
		cout << "enter character 4\n";
		cin >> ch4;
		n4 = ch1;
		n5 = ch2;
		n6 = ch3;
		n7 = ch4;
		cout << Upper_to_lower(n4, n5, n6);
		cout << Upper_to_lower2(n7);
		return 0;
	}
	break;
	default:
		cout << "wrong input";
	}
	return 0;
}


