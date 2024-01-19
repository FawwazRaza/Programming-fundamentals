/*to remove last character of a string*/

#include<iostream>
using namespace std;
int main()
{
	//void pop_back();
	string str = "allah is with us";
	cout << str << endl;
	int i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	str[i - 1] = '\0';
	cout << "the last character is removed : " << str;
	return 0;
}