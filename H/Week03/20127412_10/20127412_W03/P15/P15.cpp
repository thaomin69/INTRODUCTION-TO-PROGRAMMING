#include <iostream>
using namespace std;

//Nguyen Thi Minh Thao
//20127412

//Test case 1:
//Input: 2 11 2021
//Output: 3 11 2021

//Test case 1:
//Input: 31 12 2002
//Output: 1 1 2003

//Test case 1:
//Input: 28 2 2017
//Output: 1 3 2017

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
	int day, month, year;
	cout << "------------ P15. NGAY MAI ------------" << endl;
	do
	{
		cout << "Nhap vao ngay, thang, nam (0 < year <= 10^9, 1 <= month <= 12, 1 <= day <= 31): ";
		cin >> day >> month >> year;
	} while (year <= 0 || year > Pow(10, 9) || month < 1 || month > 12 || day < 1 || day > 31);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	{
		if (day > 0 && day < 31)
		{
			day++;
		}
		else if (day == 31)
		{
			month++;
			day = 1;
		}
	}
	else if (month == 12)
	{
		if (day > 0 && day < 31)
		{
			day++;
		}
		else if (day == 31)
		{
			day = 1;
			month = 1;
			year++;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 0 && day < 30)
		{
			day++;
		}
		else if (day == 30)
		{
			day = 1;
			month++;
		}
	}
	else if (month == 2)
	{
		if (checkLeapYear(year) == 1)
		{
			if (day > 0 && day < 29)
			{
				day++;
			}
			else if (day == 29)
			{
				day = 1;
				month++;
			}
		}
		else
		{
			if (day > 0 && day < 28)
			{
				day++;
			}
			else if (day == 28)
			{
				day = 1;
				month++;
			}
		}
	}
	cout << day << " " << month << " " << year << endl;

	system("pause");
	return 0;
}