/*program ro place extra string at last*/
#include<iostream>
using namespace std;
int main()
{
	//void push_back(char);
	string str = "he is a very good man", extrastr;
	cout << "please enter extra string name";
	cin >> extrastr;
	str = str + extrastr;
	cout << str;
	return 0;
}
