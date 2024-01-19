#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 50; ++i)
    {
        // Skip all the multiples of 7
        // Operator % calculates the modulus (remainder)
        // of a division; if (i % 7) is equal to zero
        // this means that i is a multiple of 7.

        if ((i % 7) == 0)
            continue;       //try with break
        cout << i << " ";
    }

    return 0;
}