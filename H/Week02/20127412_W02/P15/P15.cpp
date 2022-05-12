#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

#define PI 3.14
#define e 2.71

//20127412
//Nguyen Thi Minh Thao

//Test case 1
//Input: 10
//Output: y1 = 1788.9111328125, y2 = 0.0000000217

//Test case 2
//Input: 5
//Output: y1 = 611.2136230469, y2 = 0.0002405389

//Test case 3
//Input: 3.5
//Output: y1 = 356.9160156250, y2 = 0.0040401798

int Pow(int a, int b)
{
	int res = 1;
	while (b > 0)
	{
		res *= a;
		b--;
	}
	return res;
}

int main()
{
	cout << "------------- P15. TINH GIA TRI -------------" << endl;
	float x;
	do
	{
		cout << "Nhap so thuc khong am (0 <= x <= 10^9): ";
		cin >> x;
	} while (0 > x || x > Pow(10, 9));

	float y1 = 4 * (x * x + 10 * x * sqrt(x) + 3 * x + 1);
	float y2 = (sin(PI * pow(x, 2)) + sqrt(pow(x, 2) + 1)) / (pow(e, 2 * x) + cos((PI / 4) * x));

	cout << fixed << setprecision(10) << "y1 = " << y1 << endl;
	cout << fixed << setprecision(10) << "y2 = " << y2 << endl;

	return 0;
}