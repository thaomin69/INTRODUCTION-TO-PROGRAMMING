#include <iostream>
#include <iomanip>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 42.195 1 59 40.2
//Output: Pace: 2.84 
//		  Speed: 21.16

//Test case 2:
//Input: 39.283 1.2 48 30.8
//Output: Pace: 3.07 
//        Speed: 19.56

//Test case 3:
//Input: 50.123 2 38 10.2
//Output: Pace: 3.16
//        Speed: 19.01

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
	cout << "------------- P25. PACE, SPEED -------------" << endl;
	float km, h, m, s;
	do
	{
		cout << "Nhap cu li(km) va thoi gian chay(gio, phut, giay): ";
		cin >> km >> h >> m >> s;
	} while (km <= 0 || h <= 0 || m <= 0 || s <= 0 || km > Pow(10, 9) || h > Pow(10, 9) || m > Pow(10, 9) || s > Pow(10, 9));

	float pace = (h * 60 + m + (float)s / 60) / km;
	float speed = km / (h + m / 60 + s / 3600);

	cout << fixed << setprecision(2) << "Pace: " << pace << endl;
	cout << fixed << setprecision(2) << "Speed: " << speed << endl;
	
	return 0;
}