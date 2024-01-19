#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2 = "3";
    string::size_type pos;

    cout << "Enter any string : ";

    getline(cin, str1);        //it will store complete input-line into var

    pos = str1.find("9");

    if (pos != string::npos)
        cout << pos << endl;
    else
        cout << "not found" << endl;

    return 0;
}
