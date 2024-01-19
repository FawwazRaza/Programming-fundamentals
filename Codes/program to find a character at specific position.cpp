/*program to find a character at specific position*/
#include<iostream>
using namespace std;
int main()
{
	//char& at(int position);
	string str = "he has a very good man";
	int n;
	cout << "enter position";
	cin >> n;
	cout << "the character is : " << str[n];
	return 0;
}