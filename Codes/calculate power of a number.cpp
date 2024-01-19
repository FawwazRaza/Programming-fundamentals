/*Calculate power of a number x using a function “PowerCalc”. Input integer x and the power p 
from user. Pass x and p to PowerCalc function. Calculate and display first p powers of x on 
console in the PowerCalc function.
Example:
PowerCalc(5, 4) will give the following output:
5
25
125
625
*/

#include<iostream>
using namespace std;
void powercalc(int x, int p)
{
	int num = 1;
	for (int i = 1; i <= p; i++)
	{
		num = num * x;
		cout << num;
		cout << endl;
	}
}
int main()
{
	int x, p;
	cout << "please enter the number " << endl;
	cin >> x;
	cout << "please enter the power " << endl;
	cin >> p;
	powercalc(x, p);
	return 0;
}
