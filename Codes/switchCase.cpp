#include<iostream>

int main()										//Line 3
{											//Line 4
	int testscore;								//Line 5

	std::cout << "Enter the test score: ";			//Line 6
	std::cin >> testscore;						//Line 7
	std::cout << std::endl;						//Line 8
	std::cout << "score = " << testscore / 10 << std::endl;

	switch (testscore / 10)						//Line 9
	{										//Line 10
	case 0:									//Line 11
	case 1:									//Line 12
	case 2:									//Line 13
	case 3:									//Line 14
	case 4:									//Line 15
	case 5:									//Line 16
		std::cout << "The grade is F." << std::endl;	//Line 17
		break;								//Line 18
	case 6:									//Line 19
		std::cout << "The grade is D." << std::endl;	//Line 20
		break;								//Line 21
	case 7:									//Line 22
		std::cout << "The grade is C." << std::endl;	//Line 23
		break;								//Line 24
	case 8:									//Line 25
		std::cout << "The grade is B." << std::endl;	//Line 26
		break;								//Line 27
	case 9:									//Line 28
	case 10:									//Line 29
		std::cout << "The grade is A." << std::endl;	//Line 30
		break;								//Line 31
	default:									//Line 32
		std::cout << "Incorrect marks" << std::endl;	//Line 33
	}										//Line 34
	return 0;									//Line 35
}											//Line 36
