#include<iostream>
#include<string>
using namespace std;
int main()
{
	// to resize string ;
	string str;
	int num;
	char ch = 0;
	cout << "Enter string : ";
	getline(cin, str);
	cout << "please Enter the amount of characetrs you want to print";
	cin >> num;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (i >= num)
		{
			str[i] = ch;
		}
	}
	cout << "The character after removing is: " << str;
}