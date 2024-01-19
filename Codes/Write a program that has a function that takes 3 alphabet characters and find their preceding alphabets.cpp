/* Write a program that has a function that takes 3 alphabet characters and find their 
preceding alphabets. For example if user entered a, m, y it will show b, n, z. Take input in 
main, pass values to function and show the output in main.*/

#include<iostream>
using namespace std;
char preceding(char& ch1, char& ch2, char& ch3)
{
	int n4 = ch1;
	int n5 = ch2;
	int n6 = ch3;
	n4++; n5++; n6++;
	ch1 = n4; ch2 = n5; ch3 = n6;
	return 0;
}
int main()
{
	char ch1, ch2, ch3;
	int temp, n4, n5, n6;
	cout << "enter character 1\n";
	cin >> ch1;
	cout << "enter character 2\n";
	cin >> ch2;
	cout << "enter character 3\n";
	cin >> ch3;
	cout << preceding(ch1, ch2, ch3);
	cout << ch1 << endl << ch2 << endl << ch3 << endl;
	return 0;
}