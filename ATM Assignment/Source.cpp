#include <iostream>
using namespace std;

int main()
{
	int a;
	char again;

	do 
	{
		cout << "Enter the amount: ";		//user input//
		cin >> a;

		if (a < 1)
				cout << "Please enter amount greater than 0" << endl;
		else if (a >= 1);
				cout << "Number of $100 bills: " << a / 100;
			cout << "\nNumber of $50 bills: " << (a %= 100) / 50;
			cout << "\nNumber of $20 bills: " << (a %= 50) / 20;
			cout << "\nNumber of $10 bills: " << (a %= 20) / 10;
			cout << "\nNumber of $5 bills: " << (a %= 10) / 5;
			cout << "\nNumber of $1 bills: " << (a %= 5) << endl;
			cout << "Would you like to make another withdraw? (Y/N)";		//asks to run again//
			cin >> again;

	} while (again == 'Y' || again == 'y');

	system("pause");
	return 0;
}