#include<iostream>
using namespace std;
int main()
{
	int list[10] = { 11, 22, 33,44,55,66,77,88,99,100 };
	int index = -1, value;

	cout << "Please enter the value to find : ";
	cin >> value;
	for (int i = 0; i < 10; ++i)
	{
		if (list[i] == value)
			index = i;
	}
	if (index != -1)
		cout << "The value was found at index = " << index << endl;

}