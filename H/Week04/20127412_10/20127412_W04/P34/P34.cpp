#include <iostream>
#include <iomanip>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 9
//Output: Tong = 3.51

//Test case 2:
//Input: 23
//Output: Tong = 5.31

//Test case 3:
//Input: 345
//Output: Tong = 19.08


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
	cout << "-------------- P34. TINH TONG --------------" << endl;
	int n;
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while (n <= 0 || n > Pow(10, 9));

	float sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sqrt(i + sum);
	}
	cout << "Tong = " << fixed << setprecision(2) << sum << endl;

	system("pause");
	return 0;
}