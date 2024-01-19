#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    while (count <= 20)
    {
        cout << count << " "; count += 5;
    }
    cout << endl;

    count = 0;
    do
    {
        cout << count << " "; count += 5;
    } while (count <= 20);
    cout << endl;

    return 0;
}