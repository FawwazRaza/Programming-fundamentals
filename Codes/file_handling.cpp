#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;		// for reading data
	ofstream fout;		// for writing data 

	//input file and cpp file should be in the same folder/location	ELSE you will write full path
	fin.open("abc.txt");
	fout.open("b.txt");

	if (fin.is_open())
	{
		int x;
		while (!fin.eof())
		{
			fin >> x;			//Reading integer value
			fout << x << endl;  //writing integer value with endline 
			cout << x << endl;  //displaying on console
		}

		fin.close();
		fout.close();
	}
	else
	{
		cout << "Sorry, file not found!" << endl;
	}
	system("pause");
}