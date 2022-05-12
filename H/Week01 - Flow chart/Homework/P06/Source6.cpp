#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.142
int main()
{
	float x;
	cout << "Input x: ";
	cin >> x;

	float temp = (x * PI) / 180;
	float temp1 = (x * PI) / 180;

	cout << "sin(" << x << ") = " << sin(temp) << endl;
	cout << "cos(" << x << ") = " << cos(temp1) << endl;

	return 0;
}