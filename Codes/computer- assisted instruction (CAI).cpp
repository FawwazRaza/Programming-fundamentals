/*The use of computers in education is referred to as computer- assisted instruction (CAI). 
Write a program that will help an elementary school student learn multiplication. Use the 
rand function to produce two positive one-digit integers and the operation as well. The 
program should then prompt the user with a question, such as if integers are 6 and 7 then 
program will ask:
“6 * 7 = ?”
Or
“6 - 7 = ?”
The student then inputs the answer. Next, the program checks the student’s answer. If it’s 
correct, display the message "Very good!" and ask another multiplication question. If the 
answer is wrong, display the message "No. Please try again." and let the student try the 
same question three times or if the student gets it right.
In the end the student will be given a report about his test.
Each question will be displayed with the correct answer. 
It will also show on which attempt the answer was correct or was incorrect in all three
Will provide the summary of first, second and third attempt correct answers.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n1, n2, func, n3;
	float ans;
	srand(time(0));
	n1 = (rand() % 9);
	cout << n1 << endl;
	n2 = (rand() % 9);
	cout << n2 << endl;
	n3 = (rand() % 4);
	cout << n3 << endl;
	switch (n3)
	{
	case 0:
	{
		cout << n1 << "+" << n2 << "= ";
		cin >> ans;
		if (ans == (n1 + n2))
		{
			cout << "very good! \n your answer is correct in 1st attempt";
		}
		else
		{
			cout << "no. please try again! \n you have three attempts";
			for (int i = 1; i <= 3; i++)
			{
				cout << n1 << "+" << n2 << "= ";
				cin >> ans;
				if (ans != (n1 + n2))
				{
					cout << "No. Please try again";
					cout << i << " attempt is incorrect";
				}
				else
					cout << "your answer is correct in " << i << " attempt";
			}
			cout << endl;
		}
	}
	break;
	case 1:
	{
		cout << n1 << "-" << n2 << "= ";
		cin >> ans;
		if (ans == (n1 - n2))
		{
			cout << "very good! \n your answer is correct in 1st attempt";
		}
		else
		{
			for (int i = 1; i <= 3; i++)
			{
				cout << n1 << "-" << n2 << "= ";
				cin >> ans;
				if (ans != (n1 - n2))
				{
					cout << "No. Please try again" << endl;
					cout << i << " attempt is incorrect";
				}
				else
					cout << "your answer is correct in " << i << " attempt";
			}
			cout << endl;
		}
		break;
	}
	case 2:
	{
		cout << n1 << "*" << n2 << "= ";
		cin >> ans;
		if (ans == (n1 * n2))
		{
			cout << "very good! \n your answer is correct in 1st attempt";
		}
		else
		{
			for (int i = 1; i <= 3; i++)
			{
				cout << n1 << "*" << n2 << "= ";
				cin >> ans;
				if (ans != (n1 * n2))
				{
					cout << "No. Please try again" << endl;
					cout << i << " attempt is incorrect";
				}
				else
					cout << "your answer is correct in " << i << " attempt";
			}
			cout << endl;
		}
		break;
	}
	case 3:
	{
		cout << n1 << "/" << n2 << "= ";
		cin >> ans;
		if (ans == (n1 / n2))
		{
			cout << "very good! \n your answer is correct in 1st attempt";
		}
		else
		{
			for (int i = 1; i <= 3; i++)
			{
				cout << n1 << "/" << n2 << "= ";
				cin >> ans;
				if (ans != (n1 / n2))
				{
					cout << "No. Please try again" << endl;
					cout << i << " attempt is incorrect";
				}
				else
					cout << "your answer is correct in " << i << " attempt";
			}
			cout << endl;
		}
		break;
	}
	default:
		cout << "answers are incorrect";
		break;
	}
	system("pause");
}
