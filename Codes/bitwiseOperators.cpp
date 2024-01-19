// Program to Bitwise operators. It compares each bit of binary values of both the operators
#include <iostream>
int main()
{

    int a = 3, b = 5, c = 7;
    //a = 3; a = 011
   //b = 5;  b = 101
  //c = 7;   c = 111

  //-----------Bitwise Not--------------------
    std::cout << "Bitwise Not operation = " << ~a << std::endl;


    //-----------Bitwise And---------------------  
      /*
      if (a&b && a&c && a&a)
      {
        std::cout << "Bitwise And operation is True!" << std::endl;
      }
      else
        std::cout << "Bitwise And is False!";
    */
    //--------------Bitwise OR------------------
    /*
      if (a|b || a|c || a|a)
      {
        std::cout << "Bitwise OR operation is True!" << std::endl;
      }
      else
        std::cout << "Bitwise OR is False!";
    */


    return 0;
}
