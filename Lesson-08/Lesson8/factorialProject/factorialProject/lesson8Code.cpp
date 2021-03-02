// Factorial Program
// Intro C++, Lesson 8
// Written by Erika Martinez, April 5, 2017

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int numberIn = 0;
	int counter = 0;
	double factorial = 1;

	//prompt the user for inputs
	cout << "Enter a number between 2 and 60: ";
	cin >> numberIn;

	//test if numberIn is in range
	if (numberIn >= 2 && numberIn <= 60)
	{
		//for loop to calculate factorial
		for (counter = 1; counter <= numberIn; counter++)
		{
			factorial = factorial * counter;
		}  //end for
		cout << endl << "The factorial is: " << factorial << endl;
	}  //end if
	else
	{
		cout << endl << "Error: Not a number between 2 and 60." << endl;
	}

	//pause output window
	system("pause");
	return 0;
} //end main