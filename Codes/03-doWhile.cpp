#include <iostream>
using namespace std;
int main()
{

	int sum = 0, num = 78900;
	int temp = num;

	do
	{
		sum = sum + num % 10;  //extract the last digit
		//and add it to sum
		num /= 10; //remove the last digit
	} while (num > 0);

	cout << "The sum of the digits = " << sum << endl;

	if (sum % 3 == 0)
		cout << temp << "is divisible by 3" << endl;
	else
		cout << temp << " is not divisible by 3 " << endl;

	if (sum % 9 == 0)
		cout << temp << "is divisible by 9" << endl;
	else
		cout << temp << " is not divisible by 9" << endl;

	return 0;
}
