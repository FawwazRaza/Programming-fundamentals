//Program for Loops
#include<iostream>
using namespace std;

int main()
{

    // first
    int count = 0;
    while (count++ < 10)
        cout << "This loop repeats statements " << count << endl;

    // second
    count = 5;
    while (--count > 0)
        cout << count << " ";
    cout << endl;

    // third
    count = 5;
    while (count-- > 0)
        cout << count << " ";
    cout << endl;

    // four
    count = 1;
    while (count++ <= 5)
        cout << count * (count - 2) << " ";
    cout << endl;

    return 0;

}