#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 2000
//Output: Nam nhuan

//Test case 2:
//Input: 2021
//Output: Khong phai nam nhuan

//Test case 3:
//Input: 1996
//Output: Nam nhuan

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
	cout << "------------ P13. NAM NHUAN ------------" << endl;
	int year;
	do
	{
		cout << "Nhap vao mot so nguyen duong year(0 < year <= 10^9): ";
		cin >> year;
	} while (year <= 0 || year > Pow(10, 9));

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << "Nam nhuan" << endl;
	else
		cout << "Khong phai nam nhuan" << endl;

	system("pause");
	return 0;
}