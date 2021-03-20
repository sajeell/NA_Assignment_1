#include <iostream>
#include <string>
using namespace std;

int getSignificantNumbers(string x) {
	int mainCounter = 0, zerosCounter = 0;
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
int main()
{
	cout << getSignificantNumbers("1.200020000");
}