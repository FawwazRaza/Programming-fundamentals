// Program to print positive number entered by the user
#include <iostream>
int main()
{

    
      int number;
      std::cout << "Enter an integer: ";
      std::cin >> number;
      //when condition is true, if will execute only 1 statement if no curly braces are used
      if (number > 0)
        std::cout << "You entered a positive integer: " << number << std::endl;
        std::cout << "This statement is always executed.";

      if (number > 0);
      {
        std::cout << "You entered a positive integer: " << number << std::endl;
        std::cout << "Hello if brother.";
      }
    
    //-----------------example-2------------------------------
    /*
         int a;
         std::cout<<"Enter the Number :";
         std::cin>>a;
         if(a > 10)

            {std::cout<<a<<" Is Greater than 10"<<std::endl;}
    //-----------------example-3------------------------------
    /*
         int number;
         std::cout<<"Enter the Number :";
         std::cin>>number;
         int temp = number;
         if number < 0
            number = -number;
            std::cout<<"Absolute of number "<<temp<<" is "<<number<<std::endl;
    */
    return 0;
}



/*
// Program to print positive number entered by the user
#include <iostream>
int main()
{
/*
     double hours, salary=0.0, rate=200.0;
     std::cout<<"Enter the hours worked :";
     std::cin>>hours;
     if(hours > 40.0)
     {
        salary = hours*rate + (hours-40.0) * rate * 1.5;
        std::cout<<"Congrates!, you've got bonus.."<<std::endl;
     }
     else
        salary = hours * rate;

    std::cout<<"Salary =  "<<salary<<std::endl;
*/
//--------------example-2-----------------------
/*
  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  if (number >= 0);
    std::cout << "You entered a positive integer: " << number << std::endl;
  else
  {
    std::cout << "You entered a negative integer: " << number << std::endl;
  }

  std::cout << "This line is always printed.";

return 0;
}
*/

/*
// Program to print positive number entered by the user
#include <iostream>
int main()
{

     int number;

  std::cout << "Enter an integer: ";
  std::cin >> number;

  if (number > 0)
  {
    std::cout << "You entered a positive integer: " << number << std::endl;
  }
  else if(number < 0)
  {
    std::cout << "You entered a negative integer: " << number << std::endl;
  }
  else
  {
      std::cout << "You entered a poor Zero! " << number << std::endl;
  }
  std::cout << "This line is always printed.";
  return 0;
}

*/