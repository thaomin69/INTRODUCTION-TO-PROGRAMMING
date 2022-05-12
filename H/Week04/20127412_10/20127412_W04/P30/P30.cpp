#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 10
//Output: NO

//Test case 2:
//Input: 8128
//Output: YES

//Test case 3:
//Input: 496
//Output: YES

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
	cout << "-------------- P30. KIEM TRA SO HOAN THIEN --------------" << endl;
	int n;
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while (n <= 0 || n > Pow(10, 9));

	long sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	system("pause");
	return 0;
}