#include <iostream>
using namespace std;

int main()
{
	double withdraw;
	withdraw =0;
	int a;
	char choice;
	cout << "Enter the amount: ";

	while (choice == 'Y' || choice == 'y');
	{
		if (a < 1)
			cout << "Please enter amount greater than 0" << endl;
		else if (a >= 1)
		cout << "Number of $100 bills: " << a / 100;
		cout << "\nNumber of $50 bills: " << (a %= 100) / 50;
		cout << "\nNumber of $20 bills: " << (a %= 50) / 20;
		cout << "\nNumber of $10 bills: " << (a %= 20) / 10;
		cout << "\nNumber of $5 bills: " << (a %= 10) / 5;
		cout << "\nNumber of $1 bills....: " << (a %= 5) << endl;
		cout << "Would you like to make another withdraw? (Y/N)";
		cin >> choice;
	}
	

	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}