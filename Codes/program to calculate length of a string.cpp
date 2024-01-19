#include<iostream>
using namespace std;
int main()
{
	//int max_size();
	string str = "he is a very good man";
	int i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	cout << "Length of the string is: " << i << endl;
	return 0;
}