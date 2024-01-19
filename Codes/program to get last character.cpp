/*program to get last ch of a string*/

#include<iostream>
using namespace std;
int main()
{
	//iterator end();
	string str = "he is a very good man";
	int i = 0;
	while (str[i] != '\0')
	{
		++i;
		str[0] = str[i - 1];
	}
	cout << "the last character is : " << str[0];
	return 0;
}