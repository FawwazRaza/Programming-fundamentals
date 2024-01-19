// while loop
#include<iostream>
#include<iomanip>
int main()
{
    int num, limit;
    std::cout << "Table of squares\n";
    std::cout << "How high to go? ";
    std::cin >> limit;
    std::cout << "\n\n number" << std::setw(10) << "square" << std::endl;
    num = 1;
    while (num <= limit)
    {
        std::cout << std::setw(6) << num << std::setw(10)
            << num * num << std::endl;
        num++;
    }
    return 0;
}
