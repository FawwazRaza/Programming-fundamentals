// while loop
#include<iostream>

int main()
{
    int i = 0;     // 1) variable initialization
    while (i <= 5) //  2) condition checking everytime if true
    {
        std::cout << i << " ";
        i = i + 1; // 3)
    }
    std::cout << std::endl;

    // Example-2
    /*
    int i=0;     // 1) variable initialization
    while(i<=20) //  2) condition checking everytime if true
    {
        std::cout<<i<<" ";
        i = i+5;
    }
    std::cout<<std::endl;
    */

    // Example-3
    /*
    int i=0;     // 1) variable initialization
    while(i<=20) //  2) condition checking everytime if true
    {
        i = i+5;
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    */

    // Example-4
    // what if i=20; will above example get executed?

    return 0;
}
