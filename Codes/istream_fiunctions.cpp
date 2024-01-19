// This program explains the use of input stream functions: cin.get(), cin.ignore(), cin.peek(), cin.putback()
#include <iostream>
#include<string>
using namespace std;

int main()
{
    char c1, c2;
    // cin.ignore() - this function ignores one character - see the below example
   // ignore function is called two times, so this will ignore two input characters
    cin.ignore();
    cin.ignore();
    cout << "Enter a character :";
    cin >> c1;

    cout << "c1 =" << c1 << endl;

    //cin.get()- this function inputs only one character from user - it can store space and newline as well - powerfull than cin
    cin.get(c2);    //if user enters very long input in input stream then cin.get() will automatically pick one char and store into c2
    cout << "c2 =" << c2 << endl;

    // cin.peek() - this function will check the next character from input stream. it will delete form input stream
   // char( cin.peek() ) - char will convert ascii-value into character
    cout << char(cin.peek()) << endl;

    //cin.putback(char) - this function places a single charater in the input stream -Updates the input stream data
    cin.putback('W');
    cin.putback('#');


    cin.get(c2);
    cout << "c2 =" << c2 << endl;

    cin.get(c2);
    cout << "c2 =" << c2 << endl;

    cin.get(c2);
    cout << "c2 =" << c2 << endl;

    return 0;
}