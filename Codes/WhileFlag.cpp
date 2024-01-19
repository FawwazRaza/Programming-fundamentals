#include "iostream"
#include "cstdlib"
#include "ctime"

int main() {
	int num;		//Variable to store the random number
	int guess;		//Variable to store the number guessed by the user
	bool isGuessed;	//Boolean variable to control the loop

	srand(time(0));		//Sets the random number's seed to current time
	num = rand() % 100;	//Generates a random number between 0-99
	isGuessed = false;	//Initializes flag to false

	while (!isGuessed)
	{
		std::cout << "Enter an integer in the range 0-99 : ";
		std::cin >> guess;
		std::cout << std::endl;
		if (guess == num)
		{
			std::cout << "You entered the correct number" << std::endl;
			isGuessed = true;
		}
		else if (guess < num)
		{
			std::cout << "Your guess is lower than the number\nGuess again!" << std::endl;
		}
		else
		{
			std::cout << "Your guess is higher than the number\nGuess again!" << std::endl;
		}
	}
	return 0;
}
