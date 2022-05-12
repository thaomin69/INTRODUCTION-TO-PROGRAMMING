#include "Array.h"

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
	cout << endl;
}
void input2Mang(int a[], int b[], int& x, int& y)
{
	do
	{
		cout << "Nhap so luong phan tu x (x > 0): ";
		cin >> x;
		cout << "Nhap so luong phan tu y (y > 0): ";
		cin >> y;
	} while (x <= 0 || y <= 0);

	cout << "\nNhap mang 1: " << endl;
	for (int i = 0; i < x; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "\nNhap mang 2: " << endl;
	for (int i = 0; i < y; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> b[i];
	}
	ascending(a, x);
	ascending(b, y);
	cout << endl;
}
void input_BeHon100(int a[], int& n)
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
		//cout << "a[" << i << "] = ";
		cout << a[i] << " ";
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
bool KtraMangTangDan(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] >= a[j])
			{
				return false;
			}
		}
	}
	return true;
}
bool KtraMangGiamDan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] <= a[j])
			{
				return false;
			}
		}
	}
	return true;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void ascending(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
void delete_Element_AtPos(int a[], int &n, int pos)
{
	for (int i = pos + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}
void XoaPhanTuTrungNhau(int a[], int &n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				delete_Element_AtPos(a, n, j);
				j--;
			}
		}
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
void P05_SapXepSoChanTangDan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((a[i] > a[j]) && (a[i] % 2 == 0) && (a[j] % 2 == 0))
			{
				swap(a[i], a[j]);
			}
		}
	}
}
int P06_KTraThuTuPhanTuMang(int a[], int n)
{
	if (KtraMangTangDan(a, n) == true)
	{
		return 1;
	}
	else if (KtraMangGiamDan(a, n) == true)
	{
		return 2;
	}
	else 
	{
		return 3;
	}
}
int P09_DemPhanTuKhacNhau(int a[], int& n)
{
	XoaPhanTuTrungNhau(a, n);
	return n;
}
int P12_TimPhanTuLonThuHai(int a[], int n)
{
	ascending(a, n);
	return a[n - 2];
}
void P15_DaoNguocMang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			swap(a[i], a[j]);
		}
	}
}
void P25_Tron2MangKhongGiam(int a[], int b[], int c[], int x, int y, int& z)
{
	z = x + y;
	c[z];
	for (int i = 0; i < x; i++)
	{
		c[i] = a[i];
	}
	int k = 0;
	for (int i = x; i < z; i++)
	{
		c[i] = b[k++];
	}
	ascending(c, z);
}
void P26_TimPhanTuXuatHienO2Mang(int a[], int b[], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (a[i] == b[j])
			{
				cout << a[i] << " ";
			}
		}
	}

}