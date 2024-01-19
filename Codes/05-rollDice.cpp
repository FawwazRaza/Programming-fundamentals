#include<iostream>
#include<iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    const int ARRAY_SIZE = 7;
    int frequency[ARRAY_SIZE] = { 0 };

    srand(time(0));  // seed random-number generator

    // roll dice 6000 times
    for (int roll = 1; roll <= 6000; roll++)
        ++frequency[1 + rand() % 6];

    cout << "Face" << setw(13) << "Frequency" << endl;

    // output frequency elements 1-6 in tabular format
    for (int face = 1; face < ARRAY_SIZE; face++)
        cout << setw(4) << face
        << setw(13) << frequency[face] << endl;

    return 0;  // indicates successful termination    
}