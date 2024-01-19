// Program for Multiple Selection
#include <iostream>
int main()
{

    char ch;
    std::cout << "Enter the Letter (In Capital Letter): ";
    std::cin >> ch;

    // If..Else Vowel Check
    if (ch == 'A')
    {
        std::cout << "Your Character Is A.Your Character is Vowel\n";
    }
    else if (ch == 'E')
    {
        std::cout << "Your Character Is E.Your Character is Vowel\n";
    }
    else if (ch == 'I')
    {
        std::cout << "Your Character Is I.Your Character is Vowel\n";
    }
    else if (ch == 'O')
    {
        std::cout << "Your Character Is O.Your Character is Vowel\n";
    }
    else if (ch == 'U')
    {
        std::cout << "Your Character Is U.Your Character is Vowel\n";
    }
    else
    {
        std::cout << "Your Character is Not Vowel.Otherwise Not a Capital Letter\n";
    }

    return 0;
}
