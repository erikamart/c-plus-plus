//Cone Volume Calculator Program
// Intro C++, Lesson 10
// Written by Erika Martinez, April 2017
#include <iostream>
using namespace std;

//function prototype
void computeConeVolume(double radius, double height, double &volume);

int main()
{
	//declare variables and constants
	double coneRadius = 0.0;
	double coneHeight = 0.0;
	double coneVolume = 0.0;

	//prompt user for inputs
	cout << "Enter the radius of the cone: ";
	cin >> coneRadius;
	cout << "Enter the height of the cone: ";
	cin >> coneHeight;

	//call function to calculate volume
	computeConeVolume(coneRadius, coneHeight, coneVolume);

	//display result
	cout << "The volume of your cone is: " << coneVolume << endl;

	system("pause");
	return 0;
} //end of main

//****function definition****
void computeConeVolume(double radius, double height, double &volume)
{
	volume = 0.3333 * 3.1415 * radius * radius * height;
} // end of computeConeVolume function