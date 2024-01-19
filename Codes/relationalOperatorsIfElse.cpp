// Program to print positive number entered by the user
#include <iostream>
int main()
{

    int marks;
    double gpa = 3.33;
    char grade = 'A';

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks > 90 && gpa >= 3.0 && grade == 'A')
    {
        std::cout << "You have got <<Erasmus>> Scholorship for UK..!" << std::endl;
    }
    else if (marks > 90 and gpa >= 2.5)
    {
        std::cout << "You have got <<HEC>> Scholorship" << std::endl;
    }
    else if (marks > 70 || grade == 'B')
    {
        std::cout << "You have got <<Fast>> Scholorship! " << std::endl;
    }
    else
    {
        std::cout << "You have got <<Afghanistan>> Scholorship! " << std::endl;
    }
    std::cout << "This line is always printed.";
    return 0;
}
