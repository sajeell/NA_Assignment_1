#include <iostream>
#include <string>
using namespace std;

/*
* @param (string x)
* @returns int (The number of significant figures in the
* number entered by the user)
*/
int getSignificantNumbers(string x) {
	int mainCounter = 0, zerosCounter = 0, tempCounter = 0, zerosDecimalCounter = 0;
	string leftDecimal = "";

	while (x[tempCounter] != '.') {
		leftDecimal += x[tempCounter];
		tempCounter++;
	}

	if (leftDecimal == "0")
	{
		/*
		* This condition will be executed when the
		* input number contains 0 to the left of
		* the decimal point
		*/
		for (int i = 0, length = x.length(); i < length; i++)
		{
			if (
				x[i] == '1' || x[i] == '2'
				|| x[i] == '3' || x[i] == '4'
				|| x[i] == '5' || x[i] == '6'
				|| x[i] == '7' || x[i] == '7'
				|| x[i] == '8' || x[i] == '9'
				)
			{
				break;
			}

			zerosDecimalCounter++;
		}

		string rightSignificantFigures = x.substr(zerosDecimalCounter, x.length());

		int numberOfSignificantFigures = rightSignificantFigures.length();

		return numberOfSignificantFigures;

	}
	else {
		/*
		* This condition will be executed when the
		* input number contains non-zero number to the left of
		* the decimal point
		*/
		for (int i = 0, length = x.length(); i < length; i++) {
			if (x[i] == '0') {
				zerosCounter++;
			}
			else if (x[i] != '0' && x[i] != '.') {
				mainCounter += zerosCounter + 1;
				zerosCounter = 0;
			}
		}
		return mainCounter;
	}

}
int main()
{
	string input;
	cout << "Task 1:" << endl;
	cout << "Enter the number >> ";
	getline(cin, input);

	cout << endl;

	cout << "The number contains: " << endl;
	cout << getSignificantNumbers(input) << " significant numbers";
	cout << endl;
}