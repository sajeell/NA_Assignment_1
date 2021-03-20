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

double getSubtractionAE(double a, double b)
{
	double sum = a + b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double absoluteError = abs(errorOfA) + abs(errorOfB);

	return absoluteError;
}

double getSubtractionRE(double a, double b)
{
	double sum = a + b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double absoluteError = abs(errorOfA) + abs(errorOfB);

	double relativeError = absoluteError / abs(sum);

	return relativeError;
}

double getMultiplicationAE(double a, double b)
{
	double product = a * b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double relativeError = abs(errorOfA / a) + abs(errorOfB / b);

	double absoluteError = relativeError * product;

	return absoluteError;
}

double getMultiplicationRE(double a, double b)
{
	double product = a * b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double relativeError = abs(errorOfA / a) + abs(errorOfB / b);

	return relativeError;
}

double getDivisionAE(double a, double b)
{
	double product = a * b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double relativeError = abs(errorOfA / a) + abs(errorOfB / b);

	double absoluteError = relativeError * product;

	return absoluteError;
}

double getDivisionRE(double a, double b)
{
	double product = a * b;

	double errorOfA = 0.5 * pow(10, -countDecimals(a));
	double errorOfB = 0.5 * pow(10, -countDecimals(b));

	double relativeError = abs(errorOfA / a) + abs(errorOfB / b);

	return relativeError;
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


// The range functions

void getRangeAdd(double a, double b)
{
	double absoluteError = getAdditionAE(a, b);

	double answer = a + b;

	cout << "The range: " << endl;
	cout << "Upper limit: " << answer + absoluteError << endl;
	cout << "Lower limit: " << answer - absoluteError << endl;
	cout << endl;
}

void getRangeSub(double a, double b)
{
	double absoluteError = getSubtractionAE(a, b);

	double answer = a - b;

	cout << "The range: " << endl;
	cout << "Upper limit: " << answer + absoluteError << endl;
	cout << "Lower limit: " << answer - absoluteError << endl;
	cout << endl;
}

void getRangeMul(double a, double b)
{
	double absoluteError = getMultiplicationAE(a, b);

	double answer = a * b;

	cout << "The range: " << endl;
	cout << "Upper limit: " << answer + absoluteError << endl;
	cout << "Lower limit: " << answer - absoluteError << endl;
	cout << endl;
}

void getRangeDiv(double a, double b)
{
	double absoluteError = getDivisionAE(a, b);

	double answer = a / b;

	cout << "The range: " << endl;
	cout << "Upper limit: " << answer + absoluteError << endl;
	cout << "Lower limit: " << answer - absoluteError << endl;
	cout << endl;
}

void getRangePower(double a, double power)
{
	double absoluteError = getPowerAE(a, power);

	double answer = pow(a, power);

	cout << "The range: " << endl;
	cout << "Upper limit: " << answer + absoluteError << endl;
	cout << "Lower limit: " << answer - absoluteError << endl;
	cout << endl;
}


int main()
{

}