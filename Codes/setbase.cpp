#include <iostream>
#include <iomanip> // std::setbase

//variables created inside apna namespace
namespace apna
{
    int you = 10;
    int my = 11;
}

//variables created inside programmer namespace
namespace programmer
{
    int you = 200;
    int my = 300;
}

using namespace apna;
//using namespace programmer;

//Gloabal scope
int you = 500;
int my = 501;

int main()
{
    //Local scope
    int you = 100, my = 101;
    std::cout << you << "  " << my << std::endl;
    std::cout << apna::you << "  " << apna::my << std::endl;
    std::cout << programmer::you << "  " << programmer::my << std::endl;

    return 0;
}