#include <iostream>
using namespace std;
int main()
{
	int i, n;
	float x, total = 1, power = 1;


	cout << " Enter the value of x : ";
	cin >> x;

	cout << " Enter the value of n : ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		power = power * x / i;
		total = total + power;
	}
	cout << "total of exponential series is: " << total;
}