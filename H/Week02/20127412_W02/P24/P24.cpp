#include <iostream>
#include<iomanip>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1:
//Input: 40 100000
//Output: 250000.00

//Test case 2:
//Input: 20 35000
//Output: 175000.00

//Test case 2:
//Input: 25.6 300000
//Output: 1171875.00

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
	cout << "------------- P24. KHUYEN MAI TIEN -------------" << endl;
	float p, q;
	do
	{
		cout << "Nhap phan tram hoan tien cua giao dich va so tien duoc hoan toi da (0 < percent, quota <= 10^9): ";
		cin >> p >> q;
	} while (p <= 0 || q <= 0 || p > Pow(10, 9) || q > Pow(10, 9));

	cout << fixed << setprecision(2) << ((q * 100) / p) << endl;

	return 0;
}