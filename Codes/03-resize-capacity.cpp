#include <iostream>
#include <string>
using namespace std;

int main()
{
    string var;
    cout << "Enter any string : ";

    getline(cin, var);        //it will store complete input-line into var
    cout << var << endl;
    cout << var.length() << endl;

    var.resize(10);         //it will resize; only stores 10 chars, deletes the remainings
    cout << var << endl;
    cout << var.length() << endl;
    cout << var.capacity() << endl; //it shows maximum capacity of string variable

    return 0;
}