#include <iostream>
using namespace std;

bool checkPrime(int n)
{
	int count = 0;
	if (n < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				count++;
			}
		}
		if (count == 0)
			return true;
		else
			return false;
	}
}
int b_sapXep(int id)
{
	int a = id;
	int sum = 0;
	while (a > 0)
	{
		if (a % 2 == 1)
		{
			sum += a % 10;
			sum *= 10;
		}
		a /= 10;
	}
	int b = id;
	while (b > 0)
	{
		if (b % 2 == 0)
		{
			sum += b % 10;
			sum *= 10;
		}
		b /= 10;
	}
	sum /= 10;
	return sum;
}
int d_numberOfPrime(int n)
{
	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0 && checkPrime(i)==true)
		{
			count++;
		}
	}
	return count;
}
int e_TongChuSoChan(int n)
{
	int sum = 0;
	int temp = 0;
	while (n != 0)
	{
		temp = n % 10;
		if (temp % 2 == 0)
		{
			sum += temp;
		}
		n /= 10;
	}
	return sum;
}
int e_TongChuSoLe(int n)
{
	int sum = 0;
	int temp = 0;
	while (n != 0)
	{
		temp = n % 10;
		if (temp % 2 != 0)
		{
			sum += temp;
		}
		n /= 10;
	}
	return sum;
}
double f_cal(int x, int n)
{
	double sum = 1, p = 0 , m = 0;
	for (int i = 1; i <= n; i++)
	{
		p = (i * 2);
		m = m + p + i + (i - 1);
		sum += (double)pow(x, 2*i) / m;
	}
	return sum;
}
int main() 
{
	int id = 20127412;
	int y = b_sapXep(id);
	cout << id << " - " << "Nguyen Thi Minh Thao{20CLC02[" << y << "]}" << endl;
	int n = d_numberOfPrime(id+y);
	int x = e_TongChuSoChan(id) - e_TongChuSoLe(id);
	cout << "Gia tri bieu thuc: " << f_cal(x, n) << endl;

	return 0;
}