#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 15
//Output: Tich cac uoc so le cua 15 = 225

//Test case 2:
//Input: 40
//Output: Tich cac uoc so le cua 40 = 5

//Test case 3:
//Input: 225
//Output: Tich cac uoc so le cua 225 = 38443359375

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
	cout << "-------------- P26. TICH UOC SO LE --------------" << endl;
	int n;
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while (n <= 0 || n > Pow(10, 9));

	long long tich = 1;
	for (int i = 1; i <= n; i += 2)
	{
		if (n % i == 0)
		{
			tich *= i;
		}
	}
	cout << "Tich cac uoc so le cua " << n << " = " << tich << endl;

	system("pause");
	return 0;
}