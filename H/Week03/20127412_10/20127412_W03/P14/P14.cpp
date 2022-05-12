#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 11 2021
//Output: 30

//Test case 2:
//Intput: 2 2016
//Output: 29

//Test case 3
//Intput: 2 2021
//Output: 28

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

int checkLeapYear(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
}

int main()
{
	int month, year;
	cout << "------------ P14. SO NGAY TRONG THANG ------------" << endl;
	do
	{
		cout << "Nhap vao thang va nam (0 < year <= 10^9) va (1 <= month <= 12): ";
		cin >> month >> year;
	} while (year <= 0 || year > Pow(10, 9) || month < 1 || month > 12);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		cout << "31" << endl;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		cout << "30" << endl;
	}
	else if (month == 2)
	{
		if (checkLeapYear(year) == 1)
		{
			cout << "29" << endl;
		}
		else if (checkLeapYear(year) == 0)
		{
			cout << "28" << endl;
		}
	}

	system("pause");
	return 0;
}