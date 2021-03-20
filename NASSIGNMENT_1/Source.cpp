#include <iostream>
#include <string>
using namespace std;

int countDecimals(double num)
{
	string strNum = to_string(num);
	strNum.erase(strNum.find_last_not_of('0') + 1, string::npos);

	int indexOfPoint = strNum.find(".");
	string subStr = strNum.substr(indexOfPoint + 1);

	return subStr.length();
}

double getAdditionAE(double a, double b)
{
	double sum = a + b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double absoluteError = abs(errorOfA) + abs(errorOfB);

	return absoluteError;
}

double getAdditionRE(double a, double b)
{
	double sum = a + b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double absoluteError = abs(errorOfA) + abs(errorOfB);

	double relativeError = absoluteError / abs(sum);

	return relativeError;
}

int main()
{

}