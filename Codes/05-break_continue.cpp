#include <iostream>
using namespace std;
int main()
{

    int sum = 0;
    bool isNegative = false;

    int num;
    cout << "Enter integer number: ";
    cin >> num;

    while (cin)
    {
        if (num < 0) //if num is negative, terminate the loop
            //after this iteration
        {
            cout << "Negative number detected " << endl;
            isNegative = true;
            break;
            //continue;
        }
        else
        {
            sum = sum + num;
            cout << "Enter integer number: ";
            cin >> num;
        }

    }
    cout << "sorry ";
    return 0;
}