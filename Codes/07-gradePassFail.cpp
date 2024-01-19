#include<iostream>
using namespace std;
int main()
{
	int passes = 0; 		//number of passes
	int failures = 0; 	//number of failures
	int stdCounter = 1;	//student counter
	int result;			//one exam result
	//process 10 users using counter-controlled loop
	while (stdCounter <= 10)
	{
		//prompt user for input and obtain value from user
		cout << "Exam Result ( 1 = pass , 2 = fail): ";
		cin >> result;

		//if 1 increment passes
		if (result == 1)	//if-else nested in while loop
			++passes;
		else				//if result not one increment failures
			++failures;

		//increment student counter so that loop can terminate
		++stdCounter;
	} //end while


	//termination phase
	cout << "Passes = " << passes << endl;
	cout << "Failures = " << failures << endl;

	// if more than 8 students passed then raise tution
	if (passes > 8)
		cout << "Raise Tution" << endl;

	return 0;
}
