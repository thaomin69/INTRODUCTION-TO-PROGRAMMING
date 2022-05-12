#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 2.21
//Output: 2.0

//Test case 2:
//Input: 10.45
//Output: 10.5

//Test case 3:
//Input: 69.75
//Output: 70.0

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
	double x;
	cout << "------------ P21. LAM TRON SO THUC ------------" << endl;
	do
	{
		cout << "Nhap vao mot so thuc duong (0 < x <= 10^9): ";
		cin >> x;
	} while (x <= 0 || x > Pow(10, 9));

	int y = (int)x;
	double z = x - y;
	if (z < 0.25)
	{
		z = (int)z;
	}
	else if (z >= 0.25 && z < 0.5)
	{
		z = 0.5;
	}
	else if (z < 0.75 && z >= 0.5)
	{
		z = 0.5;
	}
	else if (z < 1.0 && z >= 0.75)
	{
		z = 1;
	}
	x = y + z;

	cout << fixed << setprecision(1) << x << endl;

	system("pause");
	return 0;
}