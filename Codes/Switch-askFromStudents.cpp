#include<iostream>
#include<string>

using namespace std;
int main() {
	int number;
	cout << "Enter a number in the range 0 - 7 : ";
	cin >> number;
	cout << "The number you entered is = " << number << endl;

	switch (number) {
	case 0:
	case 1:
		cout << "Learning to use ";
	case 2:
		cout << "C++'s ";
	case 3:
		cout << "switch structure." << endl;
		break;
	case 4:
		break;
	case 5:
		cout << "This program shows the effect ";
	case 6:
	case 7:
		cout << "of break statement." << endl;
		break;
	default:
		cout << "The number is out of range." << endl;
	}
	cout << "Out of the switch structure" << endl;
	return 0;
}
