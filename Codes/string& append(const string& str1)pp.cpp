#include<iostream>
using namespace std;
int main()
{
	// string& append(const string& str1);
	string str = "he is a very good man", extrastr;
	cout << "please enter extra string name";
	cin >> extrastr;
	str = str + extrastr;
	cout << str;
	return 0;
}
