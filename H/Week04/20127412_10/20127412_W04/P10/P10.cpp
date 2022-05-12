#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 3 2
//Output: 3^2 = 9

//Test case 2:
//Input: -2 5
//Output: -2^5 = -32

//Test case 3:
//Input: 50 3
//Output: 50^3 = 125000

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
	cout << "-------------- P10. TINH TICH --------------" << endl;
	float x;
	int n;
	do
	{
		cout << "Nhap vao so thuc x va so nguyen duong n: " << endl;
		cout << "(-10^9 <= x <= 10^9) va (0 < n <= 10^9)" << endl;
		cin >> x >> n;
	} while (x < Pow(-10, 9) || x > Pow(10, 9)|| n <= 0 || n > Pow(10, 9));

	double tich = 1;
	for (int i = 1; i <= n; i++)
	{
		tich *= x;
	}
	cout << x << "^" << n << " = " << tich << endl;

	system("pause");
	return 0;
}