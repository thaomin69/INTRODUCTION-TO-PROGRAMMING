#include <iostream>
#include <iomanip> 
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 0 0
//Output: Phuong trinh co vo so nghiem

//Test case 2:
//Input: 0 -2
//Output: Phuong trinh vo nghiem!

//Test case 3:
//Input: -2 3
//Output: x = 1.50

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
	float a, b;
	float x = 0;
	cout << "------------ P08. GIAI PHUONG TRINH BAC 1 ------------" << endl;
	
	do
	{
		cout << "Nhap vao 2 so thuc a, b (-10^9 <= a,b <= 10^9): " << endl;
		cin >> a >> b;
	} while (a < Pow(-10, 9) || b < Pow(-10, 9) || a > Pow(10, 9) || b > Pow(10, 9));

	if (a == 0)
	{
		if (b != 0)
		{
			cout << "Phuong trinh vo nghiem!" << endl;
		}
		else
		{
			cout << "Phuong trinh co vo so nghiem" << endl;
		}
	}
	else
	{
		x = (-b) / a;
		cout << "x = " << fixed << setprecision(2) << x << endl;
	}

	system("pause");
	return 0;
}