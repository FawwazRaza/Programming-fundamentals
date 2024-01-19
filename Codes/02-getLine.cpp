#include <iostream>
#include <string>
using namespace std;

int main()
{
    string var;
    cout << "Enter any string : ";
    //cin>>var;
    //cout<<var<<endl;

    getline(cin, var);    //it will store complete line in variable
    cout << var << endl;

    var.push_back('S');   //push_back inserts a new char at the end of string
    var.push_back('Y');
    var.push_back('Z');

    cout << var << endl;
    var.pop_back();   //delete the last char from string
    cout << var << endl;

    return 0;
}