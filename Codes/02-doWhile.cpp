#include <iostream>
using namespace std;
int main()
{

    int score;
    cout << "Enter a score between 0 and 50: ";
    cin >> score;
    while (score > 0 && score <= 50)
    {
        cout << "Enter a score between 0 and 50: ";
        cin >> score;
    }




    // Sentinell-Controlled loops using Do-While
    score = 10;
    do
    {
        cout << "Enter a score between 0 and 50: ";
        cin >> score;
        cout << endl;
    } while (score > 0 && score < 50);

    return 0;
}
