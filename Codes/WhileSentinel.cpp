// while loop
#include<iostream>
#include<iomanip>
int main()
{
    int total = 0;
    int points;
    std::cout << "Enter points earned (or -1 to quit): ";
    std::cin >> points;
    while (points != -1) // -1 is the sentinel
    {
        total += points;
        std::cout << "Enter points earned (or -1 to quit): ";
        std::cin >> points;
    }
    std::cout << "\nTotal = " << total << std::endl;

    return 0;
}

