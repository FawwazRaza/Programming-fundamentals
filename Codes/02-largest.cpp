#include<iostream>
using namespace std;
int main()
{
	int scores[10] = { 11, 22, 33,44,55,66,77,88,99,100 };

	int maxIndex = 0, largest;
	for (int index = 1; index < 10; ++index)
		if (scores[maxIndex] < scores[index])
			maxIndex = index;

	largest = scores[maxIndex];
	cout << "Largest values is : " << largest << endl;

	// 2nd Way
	int max = scores[0];
	for (int index = 1; index < 10; ++index)
		if (scores[maxIndex] > max)
			max = scores[maxIndex];

	cout << "Largest values is : " << largest << endl;


}