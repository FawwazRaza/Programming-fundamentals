#include <iostream>
#include <string>
using namespace std;

int main()
{
    //String name = "Ameer Hamza";
   //cout<<name<<endl;

   // string var = "";

  //string var = 'h';
    string var = "we never practice programing at home";
    cout << var[0] << endl;
    cout << var[1] << endl;
    cout << var[2] << endl;

    for (int i = 0; var[i] != '\0'; i++)
    {
        cout << var[i];
    }

    return 0;
}
