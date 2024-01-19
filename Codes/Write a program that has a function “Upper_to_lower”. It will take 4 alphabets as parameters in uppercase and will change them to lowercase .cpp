


/*Write a program that has a function “Upper_to_lower”. It will take 4 alphabets as 
parameters in uppercase and will change them to lowercase. Display the changed values 
in main*/


#include<iostream>
using namespace std;
char Upper_to_lower2(char& ch4)
{
	int n4 = ch4;
	ch4 = n4 + 32;
	return 0;
}
char Upper_to_lower(char& ch1, char& ch2, char& ch3)
{
	int n1 = ch1;
	int n2 = ch2;
	int n3 = ch3;
	ch1 = n1 + 32; ch2 = n2 + 32; ch3 = n3 + 32;
	return 0;
}
int main()
{
	char ch1, ch2, ch3, ch4;
	int n4, n5, n6, n7;
	long long int num1, num2;
	cout << "enter character 1\n";
	cin >> ch1;
	cout << "enter character 2\n";
	cin >> ch2;
	cout << "enter character 3\n";
	cin >> ch3;
	cout << "enter character 4\n";
	cin >> ch4;
	cout << Upper_to_lower(ch1, ch2, ch3);
	cout << Upper_to_lower2(ch4);
	cout << ch1 << endl << ch2 << endl << ch3 << endl << ch4 << endl;
	return 0;
}