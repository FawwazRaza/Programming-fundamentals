//Program that takes five numbers print their average and the numbers again
#include<iostream>
using namespace std;

int main()
{

	int n1, n2, n3, n4, n5;
	double average;

	cout << "Enter five integers : ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	average = (n1 + n2 + n3 + n4 + n5) / 5.0;
	cout << "The average of the given numbers = " << average;
	cout << "\nand the numbers are n1 = " << n1 << " n2 = " << n2 << " n3 = " << n3 << " n4 = " << n4 << " n5 = " << n5 << endl;

	return 0;

}