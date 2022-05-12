#include "Function.h"

void input_SoNguyenKhongAm(int &n)
{
	do
	{
		cout << "Nhap vao so nguyen khong am n (0 <= n <= 10^9): ";
		cin >> n;
	} while (n < 0 || n > 1000000000);
}
void input_SoNguyenDuong(int& n)
{
	do
	{
		cout << "Nhap vao so nguyen duong n (0 < n <= 10^9): ";
		cin >> n;
	} while (n <= 0 || n > 1000000000);
}
int P42_findK(int n)
{
	int sum = 0;
	int i = 0, temp = 0;
	while (true)
	{
		sum += i;
		if (sum >= n)
		{
			temp = (i - 1);
			break;
		}
		i++;
	}
	return temp;
}
int P46_count(int n)
{
	int temp = 0;
	int count = 0;
	while (n != 0)
	{
		temp = n % 10;
		if (temp % 2 != 0)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}
int P50_reverse(int n)
{
	int m = 0;
	while (n != 0)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	return m;
}