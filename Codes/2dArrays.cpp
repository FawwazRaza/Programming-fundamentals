#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUMBER_OF_ROWS = 5;   //This can be set to any number
	const int NUMBER_OF_COLUMNS = 5;//This can be set to any number

	int matrix[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
	int row;
	int col;
	int sum;
	int largest;
	int temp;

	//To initialize row number 5  (i.e., sixth row) to 0:
	row = 5;
	for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
		matrix[row][col] = 0;




	//To initialize the entire matrix to 0:
	for (row = 0; row < NUMBER_OF_ROWS; row++)
	{
		for (col = 0; col < NUMBER_OF_COLUMNS; col++)
		{
			matrix[row][col] = 0;
		}
	}




	//Print the 2D Array values
	for (row = 0; row < NUMBER_OF_ROWS; row++)
	{
		for (col = 0; col < NUMBER_OF_COLUMNS; col++)
		{
			cout << setw(5) << matrix[row][col] << "  ";
		}
		cout << endl;
	}





	//Input values from User
	//cout<<"Enter "<<NUMBER_OF_ROWS * NUMBER_OF_COLUMNS<<" values "<<endl;
	//for(row = 0 ; row < NUMBER_OF_ROWS ; row++)
	//	for(col = 0 ; col < NUMBER_OF_COLUMNS ; col++)
	//		cin >> matrix[row][col] ;






	//To find the sum of row number 3 of matrix:
	sum = 0;
	row = 3;
	for (col = 0; col < NUMBER_OF_COLUMNS; col++)
		sum += matrix[row][col];






	//Sum of each individual row
	for (row = 0; row < NUMBER_OF_ROWS; row++)
	{
		sum = 0;
		for (col = 0; col < NUMBER_OF_COLUMNS; col++)
			sum += matrix[row][col];
		cout << "Sum of Row " << row + 1 << " = " << sum << endl;
	}









	//Sum of each individual column
	for (col = 0; col < NUMBER_OF_COLUMNS; col++)
	{
		sum = 0;
		for (row = 0; row < NUMBER_OF_ROWS; row++)
			sum += matrix[row][col];

		cout << "Sum of Column " << col + 1 << " = " << sum << endl;
	}









	//Sum of complete matrix
	sum = 0;
	for (row = 0; row < NUMBER_OF_ROWS; row++)
	{
		for (col = 0; col < NUMBER_OF_COLUMNS; col++)
			sum += matrix[row][col];
	}
	cout << "Sum of Matrix = " << sum << endl;










	//Largest number in each row
	for (row = 0; row < NUMBER_OF_ROWS; row++)
	{
		largest = matrix[row][0];
		for (col = 1; col < NUMBER_OF_COLUMNS; col++)
			if (matrix[row][col] > largest)
				largest = matrix[row][col];
		cout << "The largest element in row " << row + 1 << " = " << largest << endl;
	}










	//Largest number in each col
	for (col = 0; col < NUMBER_OF_COLUMNS; col++)
	{
		largest = matrix[0][col];
		for (row = 1; row < NUMBER_OF_ROWS; row++)
			if (matrix[row][col] > largest)
				largest = matrix[row][col];
		cout << "The largest element in col " << col + 1 << " = " << largest << endl;
	}









	//Largest number in the matrix
	largest = matrix[0][0];
	for (row = 0; row < NUMBER_OF_ROWS; row++) {
		for (col = 0; col < NUMBER_OF_COLUMNS; col++)
			if (matrix[row][col] > largest)
				largest = matrix[row][col];
	}
	cout << "The largest element in matrix = " << largest << endl;



	return 0;
}