#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 20
//Output: Tong = 1.16

//Test case 2:
//Input: 123
//Output: Tong = 1.04

//Test case 3:
//Input: 430
//Output: Tong = 1.01

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
	cout << "-------------- P38. TINH TONG --------------" << endl;
	int n;
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while (n <= 0 || n > Pow(10, 9));

	float sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum = pow((float)(i + sum), (float)1 / (i + 1));
	}

	cout << "Tong = " << fixed <<setprecision(2) << sum << endl;
	system("pause");
	return 0;
}