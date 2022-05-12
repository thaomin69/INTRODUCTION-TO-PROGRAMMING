#include <iostream>
using namespace std;

//20127412
//Nguyen Thi Minh Thao

//Test case 1
//Input: 123 500
//Output: 377

//Test case 2
//Input: 69 100
//Output: 31

//Test case 3
//Input: 179 400
//Output: 221

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
	cout << "-------- P10. TINH SO KWH DIEN TIEU THU --------" << endl;
	cout << "(0 <= previous <= current <= 10^9)" << endl;
	int prev, cur;
	do
	{
		cout << "Nhap chi so dien thang truoc: ";
		cin >> prev;
		cout << "Nhap chi so dien thang hien tai: ";
		cin >> cur;
	} while (0 > prev || cur < 0 || prev > cur || prev > Pow(10, 9) || cur > Pow(10, 9));

	cout << "So dien tieu thu: " << cur - prev << endl;

	return 0;
}