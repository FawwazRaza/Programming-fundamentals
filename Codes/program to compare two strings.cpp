/*program to compare two strings*/

#include<iostream>
using namespace std;
int main()
{
	//int compare(const string& str1);
	string str1 = "allah is with us", str2 = "allah is with us";
	if (str1 == str2)
	{
		cout << "they are same ";
	}
	else
	{
		cout << "they are not same";
	}
	return 0;
}