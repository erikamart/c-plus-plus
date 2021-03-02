// Total Balloon Volume Program
// Intro C++, Lesson 4
// Written by Erika M, Feb 26, 2017

#include <iostream>
using namespace std;

int main()
{
	// Declare variables and constants
	int qtyBalloon = 0;
	double radius = 0.0;
	const double PI = 3.1415;
	double sphereVolume = 0.0;
	double totalVolume = 0.0;

	// Prompt the user for inputs
	cout << "Enter the quantity of balloons: ";
	cin >> qtyBalloon;
	cout << "Enter the radius of the balloon: ";
	cin >> radius;

	// Do the single volume calculation
	sphereVolume = 1.3333 * PI * radius * radius * radius;

	// Do the total volume calculation
	totalVolume = qtyBalloon * sphereVolume;

	//Display the result
	cout << "The total volume of all balloons is: " << totalVolume << endl;

	system("pause");
	return 0;
} //end of main
