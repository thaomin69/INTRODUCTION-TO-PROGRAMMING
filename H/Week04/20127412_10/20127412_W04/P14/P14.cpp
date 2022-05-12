#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 3 4
//Output: Tong = 22143

//Test case 2:
//Input: 3 4
//Output: Tong = 22143

//Test case 3:
//Input: 10 3
//Output: Tong = 10101010

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
	cout << "-------------- P14. TINH TONG --------------" << endl;
	float x;
	int n;
	do
	{
		cout << "Nhap vao so thuc x va so nguyen duong n: " << endl;
		cout << "(-10^9 <= x <= 10^9) va (0 < n <= 10^9)" << endl;
		cin >> x >> n;
	} while (x < Pow(-10, 9) || x > Pow(10, 9) || n <= 0 || n > Pow(10, 9));

	long int tich = 1;
	long long sum = x;
	for (int i = 1; i <= n; i++)
	{
		tich = tich * x * x;
		sum = sum + tich * x;
	}
	cout << "Tong = " << sum << endl;


	system("pause");
	return 0;
}