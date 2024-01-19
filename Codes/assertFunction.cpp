#define NDEBUG
#include <stdio.h>
#include <iostream>
#include <assert.h>

int main()
{
	int x = 7;
	/* Some big code in between and let's say x	is accidentally changed to 9 */

	x = 9;

	// Programmer assumes x to be 7 in rest of the code
	assert(x == 7);

	std::cout << "Rest of the code here" << std::endl;

	/*
		int den, num;
		cout << "Enter two integers" << endl;
		cin >> num >> den;
		assert(den != 0);
		cout << "Moving forward" << endl;
		cout << "num / den = " << num / den << endl;
	*/


	return 0;
}