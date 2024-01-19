#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int scores[5];
    int sum = 0, avg = 0;

    cout << "Enter 5 integers separate by spaces" << endl;
    for (int i = 0; i < 5; ++i)
        cin >> scores[i];

    for (int index = 0; index < 5; ++index)
        sum = sum + scores[index];

    avg = sum / 5;

    // Reverse Order
    cout << "Array in reverse order is" << endl;
    for (int index = 4; index >= 0; --index)
        cout << scores[index] << endl;

    cout << "Average = " << avg << endl;

}