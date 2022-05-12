#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 6
//Output: Tong = 91

//Test case 2:
//Input: 100
//Output: Tong = 338350

//Test case 3:
//Input: 5000
//Output: Tong = 41679167500

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
	cout << "-------------- P02. TINH TONG --------------" << endl;
	int n;
	do
	{
		cout << "Nhap vao so nguyen khong am n (0 <= n <= 10^9): ";
		cin >> n;
	} while (n < 0 || n > Pow(10, 9));

	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += Pow(i, 2);
	}

	cout << "Tong = " << sum << endl;

	system("pause");
	return 0;
}