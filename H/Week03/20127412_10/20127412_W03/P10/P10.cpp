#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 1 2 3
//Output: Phuong trinh vo nghiem!

//Test case 2:
//Input: 0 2 -3
//Output: x = 1.22, x = -1.22

//Test case 3:
//Input: 2 -7 4
//Output: x = 1.67, x = -1.67, x = 0.85, x = -0.85


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
	float a, b, c, delta, t1, t2, x1, x2, x3, x4;
	cout << "------------ P10. GIAI PHUONG TRINH TRUNG PHUONG ------------" << endl;
	do
	{
		cout << "Nhap vao 3 so thuc a,b,c (-10^9 <= a,b,c <= 10^9): " << endl;
		cin >> a >> b >> c;
	} while (a < Pow(-10, 9) || b < Pow(-10, 9) || c < Pow(-10, 9) || a > Pow(10, 9) || b > Pow(10, 9) || c > Pow(10, 9));

	
	if (a != 0)
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			cout << "Phuong trinh vo nghiem!" << endl;
		}
		else if (delta > 0)
		{
			t1 = (-b + sqrt(delta)) / (2 * a);
			t2 = (-b - sqrt(delta)) / (2 * a);

			if (t1 > 0)
			{
				cout << "x = " << fixed << setprecision(2) << sqrt(t1) << endl;
				cout << "x = " << fixed << setprecision(2) << -sqrt(t1) << endl;
			}
			if (t2 > 0)
			{
				cout << "x = " << fixed << setprecision(2) << sqrt(t2) << endl;
				cout << "x = " << fixed << setprecision(2) << -sqrt(t2) << endl;
			}
			if (t1 < 0 && t2 < 0)
			{
				cout << "Phuong trinh vo nghiem!" << endl;
			}
		}
		else
		{
			t1 = t2 = -b / (2 * a);
			if (t1 > 0)
			{
				cout << "x = " << fixed << setprecision(2) << sqrt(t1) << endl;
				cout << "x = " << fixed << setprecision(2) << -sqrt(t1) << endl;
			}
			else
			{
				cout << "Phuong trinh vo nghiem!" << endl;
			}
		}
	}
	else
	{
		if (b == 0 && c == 0)
			cout << "Phuong trinh co vo so nghiem" << endl;
		else if (b == 0 && c != 0)
			cout << "Phuong trinh vo nghiem!" << endl;
		else if (b != 0 && c == 0)
		{
			cout << "x = 0" << endl;
		}
		else if( b!=0 && c != 0)
		{
			if (b * c < 0)
			{
				cout << "x = " << fixed << setprecision(2) << sqrt((-c) / b) << endl;
				cout << "x = " << fixed << setprecision(2) << -sqrt((-c) / b) << endl;
			}
			else
			{
				cout << "Phuong trinh vo nghiem!" << endl;
			}
		}
	}
	

	return 0;
}