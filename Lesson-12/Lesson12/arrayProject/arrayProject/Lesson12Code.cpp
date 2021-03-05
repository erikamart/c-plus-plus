// arrayProject Problem
// Intro C++, Lesson 12
// Written by Erika Martinez, May 7, 2017
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	//Declare & initialize arrays
	string pkgCodeArray[5] = { {"BB"}, {"SP"}, {"NP"}, {"HE"}, {"UC"} };
	double pkgCostArray[5] = { {1500.00}, {3250.00}, {4575.00}, {7500.00}, {5220.00} };
	string pkgNameArray[5] = { {"Base"}, {"Sport"}, {"Intermediate level"}, {"Luxury"}, {"User specified"} };

	//Declare & initialize variables
	double basePrice = 0.00;
	string optionCode = "";
	double pkgCost = 0.00;
	double subtotal = 0.00;
	double tax_fee = 0.00;
	int sub = 0;
	double finalPrice = 0.00;
	string pkgName = "";


	//Prompt the user for inputs
	cout << "Enter the Base Price: $";
	cin >> fixed >> setprecision(2);
	cin >> basePrice;

	cout << "Enter the two letter Option Code: ";
	cin >> optionCode;
	transform(optionCode.begin(), optionCode.end(), optionCode.begin(), (int(*)(int))toupper);

	//Test if entered option code is valid
	while (sub <= 4 && pkgCodeArray[sub] != optionCode)
		sub += 1;
	//end while
	//If valid provide the subscript for the parallel name and cost arrays
	if (sub <= 4) {
		pkgName = pkgNameArray[sub];
		pkgCost = pkgCostArray[sub];

		//Do calculations and display final price and full package name
		subtotal = basePrice + pkgCost;
		tax_fee = subtotal * .15;
		finalPrice = tax_fee + subtotal;

		//Display the result
		cout << fixed << setprecision(2);
		cout << endl << "The final cost for your vehicle with " << pkgName << " trim is $" << finalPrice << endl;
	}
	
	//If not a valid code display error message and stop program
	else
		cout << "Invalid option code!" << endl << endl;
		//end if

	system("pause");
	return 0;
} //end of main
