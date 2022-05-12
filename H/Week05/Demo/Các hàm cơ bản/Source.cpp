#include <iostream>
using namespace std;

void input(int& n, int condition)
{
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	} while (n < condition);
}
int GCD(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	else
	{
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		return a;
	}
}
int LCM(int a, int b)
{
	int result = GCD(a, b);
	return a * b / result;
}
int findMax(int a, int b)
{
	int max = a;
	if (max < b)
	{
		max = b;
	}
	return max;
}
int findMin(int a, int b)
{
	int min = a;
	if (min > b)
	{
		min = b;
	}
	return min;
}
int Fibonacci(int n)
{
	int a1 = 1, a2 = 1;
	if (n == 1 || n == 2)
		return 1;
	int i = 3, a;
	while (i <= n)
	{
		a = a1 + a2;
		a1 = a2;
		a2 = a;
		i++;
	}
	return a;
}
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
bool checkEvenNumber(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;
}
bool checkOddNumber(int n)
{
	if (n % 2 != 0)
		return true;
	else
		return false;
}
bool checkNegative(int n)
{
	if (n < 0)
		return true;
	else
		return false;
} 
bool checkPositive(int n)
{
	if (n > 0)
		return true;
	else
		return false;
}
bool checkAscending(int n)
{
	int temp2 = 0;
	int temp1 = n % 10;
	n /= 10;
	while (n > 0)
	{
		temp2 = n % 10;
		if (temp1 < temp2)
		{
			return false;
		}
		temp1 = temp2;
	}
	return true;
}
int main()
{
	int a, b;
	cin >> a;
	if (checkAscending(a) == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}