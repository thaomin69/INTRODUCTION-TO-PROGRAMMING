#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 10
//Output: Tong cac uoc so cua 10 la: 18

//Test case 2:
//Input: 500
//Output: Tong cac uoc so cua 500 la: 1092

//Test case 3:
//Input: 500
//Output: Tong cac uoc so cua 3107 la: 3360

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
	cout << "-------------- P22. TONG UOC SO --------------" << endl;
	int n;
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while (n <= 0 || n > Pow(10, 9));

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	cout << "Tong cac uoc so cua " << n << " la: " << sum << endl;

	system("pause");
	return 0;
}