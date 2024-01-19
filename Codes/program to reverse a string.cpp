/*program to reverse a string*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	// reverseStr;
	int i = 0, j = 0;
	string str;
	cout << "Enter string for reversing it : ";
	getline(cin, str);
	for (j = 0; str[j] != '\0'; j++);
	cout << " reversed string is: ";
	for (i = j; i >= 0; i--)
	{
		cout << str[i];
	}
}