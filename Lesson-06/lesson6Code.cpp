// Salary Program
// Intro C++, Lesson 6
// Written by Erika Martinez, March 14, 2017
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Declare variables
	double baseSalary = 0.0;
	float raiseRate = 0.0;
	double raise = 0.0;
	double newSalary = 0.0;
	
	//Prompt the user for inputs
	cout << "Enter the Base Salary: $";
	cin >> fixed >> setprecision(2);
	cin >> baseSalary;

	//Decide on the raise rate
	if (baseSalary <= 14999.99)
	{
		raiseRate = 0.05;
	}
	//end if
	if (baseSalary >= 15000.00 && baseSalary <= 49999.99)
	{
		raiseRate = 0.07;
	}
	//end if
	if (baseSalary >= 50000.00 && baseSalary <= 99999.99)
	{
		raiseRate = 0.10;
	}
	//end if
	if (baseSalary >= 100000.00)
	{
		raiseRate = 0.15;
	}
	//end if

	//Calculate raise and newSalary
	raise = raiseRate * baseSalary;
	newSalary = baseSalary + raise;

	//Display the result
	cout << fixed << setprecision(2);
	cout << endl << "You will receive a raise of $" << raise << ", for a new yearly salary of $" << newSalary << "." << endl;
	system("pause");
	return 0;
} //end of main