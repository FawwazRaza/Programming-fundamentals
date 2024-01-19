#include <iostream>
int main()
{
    int x = 9, y, z;

    y = x++ + x++;
    //z=++x;

    std::cout << y << std::endl;
    std::cout << x << std::endl;

    return 0;
}