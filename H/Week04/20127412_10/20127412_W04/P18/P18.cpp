#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 4 5
//Output: Tong = 27.27

//Test case 2:
//Input: 17 9
//Output: Tong = 8435752.08

//Test case 2:
//Input: 23 11
//Output: Tong = 2505208868.87

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
	cout << "-------------- P18. TINH TONG --------------" << endl;
	float x;
	int n;
	do
	{
		cout << "Nhap vao so thuc x va so nguyen khong am n: " << endl;
		cout << "(-10^9 <= x <= 10^9) va (0 <= n <= 10^9)" << endl;
		cin >> x >> n;
	} while (x < Pow(-10, 9) || x > Pow(10, 9) || n < 0 || n > Pow(10, 9));

	long double sum = 1;
	long double tu = 1;
	long double mau = 1;
	for (int i = 0; i < (2 * n); i += 2)
	{
		tu = tu * x * x;
		mau = mau * (i + 1) * (i + 2);
		sum = sum + (tu/mau);
	}
	cout << "Tong = " << fixed << setprecision(2) << sum << endl;
	

	system("pause");
	return 0;
}

