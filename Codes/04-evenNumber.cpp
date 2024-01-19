#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int scores[10];

    cout << "Enter 5 integers separate by spaces" << endl;
    for (int i = 0; i < 10; ++i)
        scores[i] = 2 + 2 * i;


    // Reverse Order
    cout << "Array elements are" << endl;
    for (int index = 0; index < 10; ++index)
        cout << setw(7) << index << setw(10) << scores[index] << endl;


}