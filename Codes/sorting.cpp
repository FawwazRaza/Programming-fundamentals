// Example program
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void initialize(int list[], int listSize)
{
    int count;
    for (count = 0; count < listSize; count++)
        list[count] = rand() % 100;
}
void print(const int list[], int listSize)
{
    int count;
    for (count = 0; count < listSize; count++)
        cout << list[count] << " ";
}
//minimum from array
int findMin(const int list[], int size)
{
    int min;
    if (size <= 0)
        return list[size];
    else
    {
        min = findMin(list, size - 1);
        if (list[size] < min)
            min = list[size];

        cout << "min = " << min << endl;
    }
    return min;
}
//--------------------------------------
void bubblesort(int A[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < (size - i) - 1; ++j)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
//-------------------------------------
void selectionSort(int list[], int length)
{
    int i, j, smallestIndex, temp;
    for (i = 0; i < length - 1; i++)
    {
        smallestIndex = i;
        for (j = i + 1; j < length; j++)
        {
            if (list[j] < list[smallestIndex])
                smallestIndex = j;
        }
        temp = list[smallestIndex];
        list[smallestIndex] = list[i];
        list[i] = temp;
    }
}
//--------------------------------------
int main()
{
    const int size = 5;
    int a1[size];
    initialize(a1, size);
    selectionSort(a1, size);
    print(a1, size);
    //cout << findMin(a1,size-1);
    return 0;
}