#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
	int X, player, O, num;
	char box1 = '1', box2 = '2', box3 = '3', box4 = '4', box5 = '5', box6 = '6', box7 = '7', box8 = '8', box9 = '9';
	bool toss;
	std::cout << "GAME RULES:" << std::endl << " You have to Enter the number of box in which you want to display X / O" << std::endl;
	std::cout << " If a player is able to draw three Xs or three Os in a row ( horizontally, vertically, or diagonally )" << std::endl << " then that player wins" << std::endl;
	std::cout << " If all squares are filled and neither player has made a complete row of Xs or Os, then the game is a draw" << std::endl;
	std::cout << " No player can draw in box that is already filled.";
	do
	{
		std::cout << "Enter the player number (1/2) that want to choose 'X' symbol : 	" << std::endl;
		std::cin >> X;
		if (X != 1 && X != 2)
		{
			std::cout << "Wrong choice!" << std::endl;
		}
	} while (X != 1 && X != 2);
	O = 3 - X;
	std::cout << "Symbol 'X' has been assigned to player " << X << std::endl;
	std::cout << "Symbol 'O' has been assigned to player " << O << std::endl;
	srand(time(0));
	toss = rand() % 2;
	if (toss)
	{
		std::cout << "Player " << std::endl << O << " won the toss he will start first";
		player = O;
	}
	else
	{
		std::cout << "Player " << std::endl << X << " won the toss he will start first";
		player = X;
	}
	std::cout << "\n\t\t_________________"
		<< "\n\t | | | |"
		<< "\n\t | " << box1 << " | " << box2 << " | " << box3 << " |"
		<< "\n\t |_____|_____|_____|"
		<< "\n\t | | | |"
		<< "\n\t | " << box4 << " | " << box5 << " | " << box6 << " |"
		<< "\n\t |_____|_____|_____|"
		<< "\n\t | | | |"
		<< "\n\t | " << box7 << " | " << box8 << " | " << box9 << " |"
		<< "\n\t |_____|_____|_____|";
	do
	{
		std::cout << "Player " << std::endl << player << " turns." << std::endl;
		std::cout << "Enter the box number : ";
		std::cin >> num;
		if (num == 1 && box1 == '1')
		{
			box1 = (player == X) ? 'X' : 'O';
		}
		else if (num == 2 && box2 == '2')
		{
			box2 = (player == X) ? 'X' : 'O';
		}
		else if (num == 3 && box3 == '3')
		{
			box3 = (player == X) ? 'X' : 'O';
		}
		else if (num == 4 && box4 == '4')
		{
			box4 = (player == X) ? 'X' : 'O';
		}
		else if (num == 5 && box5 == '5')
		{
			box5 = (player == X) ? 'X' : 'O';
		}
		else if (num == 6 && box6 == '6')
		{
			box6 = (player == X) ? 'X' : 'O';
		}
		else if (num == 7 && box7 == '7')
		{
			box7 = (player == X) ? 'X' : 'O';
		}
		else if (num == 8 && box8 == '8')
		{
			box8 = (player == X) ? 'X' : 'O';
		}
		else if (num == 9 && box9 == '9')
		{
			box9 = (player == X) ? 'X' : 'O';
		}
		else
		{
			std::cout << "Wrong Choice!" << std::endl;
			player = 3 - player;
		}
		std::cout << "\n\n\t\t_________________"
			<< "\n\t | | | |"
			<< "\n\t | " << box1 << " | " << box2 << " | " << box3 << " |"
			<< "\n\t |_____|_____|_____|"
			<< "\n\t | | | |"
			<< "\n\t | " << box4 << " | " << box5 << " | " << box6 << " |"
			<< "\n\t |_____|_____|_____|"
			<< "\n\t | | | |"
			<< "\n\t | " << box7 << " | " << box8 << " | " << box9 << " |"
			<< "\n\t |_____|_____|_____|";
		if ((box1 == box2 && box1 == box3) || (box4 == box5 && box4 == box6) || (box7 == box8
			&& box7 == box9) || (box1 == box4 && box1 == box7) || (box2 == box5 && box5 == box8) ||
			(box3 == box6 && box6 == box9) || (box3 == box5 && box5 == box7) || (box1 == box5 && box5 == box9))
		{
			std::cout << "\n\n\t\tCongratulations! " << player << ".....You won the game.";
			break;
		}
		else if (box1 != '1' && box2 != '2' && box3 != '3' && box4 != '4' && box5 != '5' &&
			box6 != '6' && box7 != '7' && box8 != '8' && box9 != '9')
		{
			std::cout << "\n\n\t\tthe game is tie.";
			break;
		}
		player = 3 - player;
	} while (true);
	return 0;
}