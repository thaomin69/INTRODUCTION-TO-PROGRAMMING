#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 0 -3 2
//Output: x = 0.67

//Test case 2:
//Input: 2 3 1
//Output: x1 = -0.50
//		  x2 = -1.00

//Test case 3
//Input: -2.3 2 9
//Output: x1 = -1.59
//		  x2 = 2.46

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
	float a, b, c, x, x1, x2, delta;
	cout << "------------ P09. GIAI PHUONG TRINH BAC 2 ------------" << endl;
	do
	{
		cout << "Moi nhap vao 3 so thuc a,b,c (-10^9 <= a,b <= 10^9): ";
		cin >> a >> b >> c;
	} while (a < Pow(-10, 9) || b < Pow(-10, 9) || c < Pow(-10,9) || a > Pow(10, 9) || b > Pow(10, 9) || c > Pow(10,9));

	if (a == 0)
	{
		if (b != 0 && c != 0)
		{
			x = -c / b;
			cout << "x = " << fixed << setprecision(2) << x << endl;
		}
		else if (b != 0 && c == 0)
		{
			cout << "Phuong trinh co 1 nghiem la: x = 0" << endl;
		}
		else if (b == 0 && c != 0)
		{
			cout << "Phuong trinh vo nghiem!" << endl;
		}
		else
		{
			cout << "Phuong trinh co vo so nghiem!" << endl;
		}
	}
	else
	{
		delta = b * b - 4 * a * c;

		if (delta == 0)
		{
			x = -b / 2 * a;
			cout << "x = " << fixed << setprecision(2) << x << endl;
		}
		else if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

			cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
			cout << "x2 = " << fixed << setprecision(2) << x2 << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem!" << endl;
		}
	}
	
	system("pause");
	return 0;
}