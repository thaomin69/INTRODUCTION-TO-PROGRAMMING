#include "array.h"

void input(int a[], int& n)
{
	do
	{
		cout << "Enter the number of elements n (n > 0): ";
		cin >> n;
	} while (n <= 0);

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a[" << i << "] = ";
		cin >> a[i];
	}
}
void input_BeHon100(int a[], int &n)
{
	do
	{
		cout << "Enter the number of elements n (1 <= n <= 100): ";
		cin >> n;
	} while (n <= 0 || n > 100);

	for (int i = 0; i < n; i++)
	{
		cout << "Enter a[" << i << "] = ";
		cin >> a[i];
	}
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cout << a[i] << endl;
	}
	cout << endl;
}

bool ktra_SoChan(int n)
{
	if (n % 2 == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
bool ktra_SoLe(int n)
{
	if (n % 2 == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool checkPrime(int n)
{
	if (n < 2)
	{
		return false;
	}
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % 2 == 0)
		{
			count++;
		}
	}
	if (count > 2)
	{
		return false;
	}
	else
	{
		return true;
	}
}


void P01_MaxChan_MinLe(int a[], int n, int& max_chan, int& min_le)
{
	max_chan = _I32_MIN;
	min_le = _I32_MAX;
	for (int i = 0; i < n; i++)
	{
		if (ktra_SoChan(a[i]) == true && a[i] > max_chan)
		{
			max_chan = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (ktra_SoLe(a[i]) == true && a[i] < min_le)
		{
			min_le = a[i];
		}
	}
}
double P02_TBC_SoChan(int a[], int n)
{
	double sum = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktra_SoChan(a[i]) == true)
		{
			sum += (double)a[i];
			count++;
		}
	}
	sum /= count;
	return sum;
}
void P04_Tim_SNT(int a[], int n, bool& check)
{
	for (int i = 0; i < n; i++)
	{
		if (checkPrime(a[i]) == true)
		{
			cout << a[i] << " ";
			check = true;
		}
	}
	cout << endl;
}