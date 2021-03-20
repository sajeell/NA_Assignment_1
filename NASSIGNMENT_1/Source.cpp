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

double getPowerAE(double a, double b)
{
	double answer = a / b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double relativeError = abs(errorOfA / a) + abs(errorOfB / b);

	double absoluteError = relativeError * answer;

	return absoluteError;
}

double getPowerRE(double a, double b)
{
	double answer = a / b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double relativeError = abs(errorOfA / a) + abs(errorOfB / b);

	return relativeError;
}

double getRootAE(double a, double power)
{
	double answer = pow(a, power);

	double errorOfA = 0.5 * pow(10, -countDecimals(a));

	double relativeError = abs(power) * abs(errorOfA / a);

	double absoluteError = relativeError * answer;

	return absoluteError;
}

double getRootRE(double a, double power)
{
	double answer = pow(a, power);

	double errorOfA = 0.5 * pow(10, -countDecimals(a));

	double relativeError = abs(power) * abs(errorOfA / a);

	return relativeError;
}

int main()
{

}