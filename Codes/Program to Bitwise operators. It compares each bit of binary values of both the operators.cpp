// Program to Bitwise operators. It compares each bit of binary values of both the operators
#include <iostream>
int main()
{

    int a = 3;

    if (a > 0)
        a = 100;
    else
        a = 0;

    std::cout << "Updated a : " << a << std::endl;

    // Ternary Operator
    a = (a > 0) ? 100 : 0;
    std::cout << "Ternary Operator : " << a << std::endl;

    return 0;
}