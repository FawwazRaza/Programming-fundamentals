
/*program to concatenat or append two strings*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
	// code to add two string without using append function;
	string str1, str2;
	cout << "Enter string 1";
	getline(cin, str1);
	cout << "Enter string 2";
	getline(cin, str2);
	str1 += str2;
	cout << "the string is " << str1 << endl;
}