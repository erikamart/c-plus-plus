#include <iostream>
#include <string>
using namespace std;
int main()
{

	string userInput = "";
	
	cout << "Enter a password: ";
	cin >> userInput;

		if (userInput.length() < 8)
		{
			cout << "Invalid. Your password has " << userInput.length() << " characters." << endl;
		} //end if

	//pause output
	system("pause");
	return 0;
} //end main